#include <stdio.h>
int main()
{
    char str[100];
    gets(str);
    int n;
    n=str[0]-'0';
    printf("%d",n);
}
