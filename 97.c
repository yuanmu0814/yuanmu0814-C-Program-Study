#include <stdio.h>
#include <math.h>
double current(int n)
{
    return (1.0/(2*n-1));
}
double sum(int n)
{
    double back=0,fuhao=1;
    for(int i=1;i<=n;i++)
    {
        back+=current(i);
        fuhao*=(-1);
    }
    return (4*back);
}
int main()
{
    double jingdu;
    scanf("%lf",&jingdu);
    for(int i=1;i<20000000;i++)
    {
        int cha=fabs(sum(i)-sum(i-1));
        if(cha<jingdu)
        {
            printf("%d",i);
            return 0;
        }
        else
            i+=cha;
    }
}
