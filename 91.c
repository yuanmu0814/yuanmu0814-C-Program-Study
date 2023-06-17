#include "stdio.h"
int comb(int a,int b)
{
    return ((a%10)*1000+(a/10%10)*10+(b/10%10)*1+(b%10)*100);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", comb(a,b));
    return 0;
}