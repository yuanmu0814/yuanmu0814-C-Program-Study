#include <stdio.h>
#include <string.h>
void combine(char *fullname, char *surname, char *name)
{
    int length_surname=strlen(surname),length_name=strlen(name);
    for(int i=0;i<length_surname;i++)
        fullname[i]=surname[i];
    for(int j=0;j<length_name;j++,length_surname++)
        fullname[length_surname]=name[j];
}
int main()
{
    char surname[]="zhao",name[]="changkuan",fullname[100];
    combine(fullname,surname,name);
    puts(fullname);
}
