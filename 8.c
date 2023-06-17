#include <stdio.h>
int main()
{
    int a=100,b=200;
    a=a<0&&++b;
    printf("%d,%d",a,b);
    return 0;
}