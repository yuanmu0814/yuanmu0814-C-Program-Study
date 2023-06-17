#include <stdio.h>
double current(double num,int n)
{
    if(n==0)
        return num;
    else
    {
        double temp=current(num,n-1);
        return (temp*2/3+(num/(3*temp*temp)));  
    }
             
}
int main()
{
    double num;
    int n;
    scanf("%lf %d",&num,&n);
    if(num==0)
    {
        printf("0.000000");
        return 0;
    }
    else
        printf("%.6lf",current(num,n));
}