#include <stdio.h>
#include <string.h>
#include <ctype.h>
int function(char *s1,char *s2)
{
    int length_s1=strlen(s1),length_s2=strlen(s2),has=-1;
    for(int i=0;i<length_s1;i++)
    {
        int signal=0;
        if(tolower(s1[i])==tolower(s2[0]))
        {
            for(int j=0,g=i;j<length_s2;j++,g++)
            {
                if(tolower(s1[g])!=tolower(s2[j]))
                    {
                        signal=-1;
                        break;
                    }
            }
        }
        else
            signal=-1;
        if(signal==0)
        {
            printf("%d ",i+1);
            has=1;
        }   
    }
    return has;
}
int main()
{
    char str[100],check[100];
    gets(str);
    gets(check);
    if(function(str,check)==-1)
        printf("-1");
    return 0;
}