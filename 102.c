#include <stdio.h>
#include <string.h>
int count(char *sentence)
{
    int number=0;
    for(int i=0;i<strlen(sentence);i++)
    {
        if((sentence[i]>='a'&&sentence[i]<='z')||(sentence[i]>='A'&&sentence[i]<='Z')||(sentence[i]==' '))
            number++;
    }
    return number;
}
int main()
{
    char str[100];
    gets(str);
    printf("%d",count(str));
}
