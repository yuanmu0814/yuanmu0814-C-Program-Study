#include <stdio.h>
int jiecheng(int i)
{
    long out=1;
    for(int j=1;j<=i;j++)
    {
        out=out*j;
    }
    return out;
}
int main()
{
    int n;
    double sum=1.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+1.0/jiecheng(i);
    }
    printf("%.10lf",sum);
    return 0;
}
