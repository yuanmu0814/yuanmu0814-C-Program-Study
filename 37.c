#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    double s,mianji;
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2.0;
    mianji=s*(s-a)*(s-b)*(s-c);
    mianji=sqrt(mianji);
    printf("%.3lf",mianji);
}
