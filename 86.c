#include "stdio.h"
int main()
{
    char str[10];
    gets(str);
    if(str[0]>='a'&&str[0]<='z')
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9')||(str[i]>='A'&&str[i]<='Z'));
            else
            {
                printf("0");
                return 0;
            }

        }
        printf("1");
    }
    else
    {
        printf("0");
    }
}