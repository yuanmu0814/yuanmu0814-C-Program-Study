#include <stdio.h>
#include <string.h>
void deldigit(char *s, char *t)
{
    int length_t=strlen(t),length_s=strlen(s);
    for(int i=0;i<length_s;i++)
        (s[i]>='0'&&s[i]<='9')?(t[length_t]=s[i];length_s++):(;);

}
int main()

