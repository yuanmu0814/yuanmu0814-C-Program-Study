#include <stdio.h>
#include <string.h>
void compress(char *s, char *t)
{
    int length=strlen(s);
    for(int i=0,j=0;i<length;i++)
    {
        if(s[i]==s[i+1])
            continue;
        else
        {
            t[j]=s[i];
            j++;
        }
    }
}
int main()
{
  char s[100]={"eeeeeaafffddd"};
  char t[50]={0};
  compress(s,t);
  printf("The origin sting is: %s\n",s);
  printf("The compress sting is: %s\n",t);
}
