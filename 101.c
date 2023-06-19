#include <stdio.h>
#include <string.h>
void sort(char *str)
{
    int length=strlen(str);
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length-i;j++)
        {
            if(str[j]<str[j+1])
            {
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
}
int main()
{
    char str[100];
    gets(str);
    sort(str);
    puts(str);
}
