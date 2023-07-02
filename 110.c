#include <stdio.h>
int checkyear(char *id)
{
    int year=0;
    for(int i=6;i<10;i++)
        year=year*10+id[i]-'0';
    return (year>=1900&&year<=2016)?1:-1;
}
int main()
{
    char id[32];
    gets(id);
    printf("%s",(checkyear(id)==1)?"Yes":"No");
    return 0;
}
