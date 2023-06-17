#include <stdio.h>
#include <math.h>
double qianbu(double a,int n)
{
    double qianbu=a;
    for(int i=1;i<n;i++)
    {
        qianbu*=(a-1);
        a--;
    }
    return qianbu;
}
double cifang(double x,int n)
{
    double ji=x;
    for(int i=1;i<n;i++)
    {
        ji*=x;
    }
    return ji;
}
int main()
{
    double x,a,out=1.0;
    int n;
    scanf("%lf %lf %d",&x,&a,&n);
    for(int i=1;i<=n;i++)
    {
        out=out+qianbu(a,i)*cifang(x,i)/tgamma(i);
    }
    printf("%.8lf",out);
    return 0;
    }