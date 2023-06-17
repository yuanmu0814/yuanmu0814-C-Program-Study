#include <stdio.h>
#include <string.h>
void print(char *s,int n)
{
    int length=strlen(s);
    for(int i=0;i<length-n+1;i++)
    {
        for(int j=i;j<i+n;j++)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
}
int main()
{
    char str[100];
    gets(str);
    int length=strlen(str);
    for(int i=1;i<=length;i++)
    {
        print(str,i);
    }
}