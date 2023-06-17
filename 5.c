#include <stdio.h>
int main()
{
    int i=1;
    int sum=0;
    do
    {
        sum=sum+i;
        i++;
    } while (i<=100);
    printf("sum=%d",sum);
    return 0;
}