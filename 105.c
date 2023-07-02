#include <stdio.h>
#include <string.h>
#include <ctype.h>
void print(char character, int high);
void removeSpaces(char *s);
void sort(char *s);
int main()
{
    char str[1000];
    gets(str);
    removeSpaces(str);
    sort(str);
    int current_length=strlen(str),count=1;
    for(int i=0;i<current_length;i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            print(str[i],count);
            count=1;
        }
    }
}
void print(char character, int high)
{
    printf("\n%c ",character);
    for(int i=0;i<high;i++)
    {
        printf("*");
    }
}
void sort(char *s)
{
    int length=strlen(s);
    for(int i=0;i<length;i++)
    {
        s[i]=tolower(s[i]);
        for(int j=0;j<length-i-1;j++)
        {
            if(s[j+1]<s[j])
            {
                char temp=s[j+1];
                s[j+1]=s[j];
                s[j]=temp;
            }
        }
    }
}
void removeSpaces(char *s)
{
    int length=strlen(s);
    for(int i=0;i<length;)
    {
        if(s[i]==' ')
        {
            for(int j=i;j<length;j++)
                s[j]=s[j+1];
        }
        else
            i++;
    }
}
