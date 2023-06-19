#include <stdio.h>
#include <string.h>
void deldigit(char *s, char *t)
{
    int length_s=strlen(s),length_t=strlen(t);
    for(int i=0;i<length_s;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            t[length_t]=s[i];
            length_t++;
        }
    }
}
int main()
{
    char s[100]={"I 1234am 4455a student."};
    char t[100]={"How are you."};
    deldigit(s,t);
    printf("%s",t);
}
