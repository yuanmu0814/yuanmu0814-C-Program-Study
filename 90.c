#include "stdio.h"
#include "string.h"
char *insert(char *string,char c)
{
    int signal=0;
    for(int i=0;i<strlen(string);i++)
    {
        if(c<=string[i])
        {
            for(int j=(int)(strlen(string)+1);j>=i;j--)
            {
                string[j]=string[j-1];
            }
            signal=1;
            string[i]=c;
            break;
        }
    }
    if(signal==0)
    {
        string[strlen(string)]=c;
    }
    return c;
}
int main()
{
    char str[50],ch,*s=str;
    gets(str);
    scanf("%c",&ch);
    *insert(s,ch);
    puts(str);
}