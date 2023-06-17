#include "stdio.h"
#include "math.h"
double jiecheng(int n)
{
    double back=1;
    for(int i=1;i<=n;i++)
    {
        back*=i;
    }
    return back;
}
double current(double x,int n)
{
    double back=1;
    for(int i=1;i<=2*(n-1);i++)
    {
        back*=x;
    }
    return (back/ jiecheng(2*(n-1)));
}
double sum(double x,int n)
{
    double back=1;
    int fuhao=-1;
    for(int i=2;i<=n;i++)
    {
        back+=fuhao*current(x,i);
        fuhao*=(-1);
    }
    return back;
}
int  main()
{
    double x,e;
    scanf("%lf %lf",&x,&e);
    int i=2;
    for(;i<=12;i++)
    {
        double k=(sum(x,i)-sum(x,i-1));
        if(fabs(k)<=e)
            break;

    }
    printf("%d %.7lf\n",i-1, sum(x,i));
}