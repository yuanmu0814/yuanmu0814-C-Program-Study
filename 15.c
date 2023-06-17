#include <stdio.h>
int jiecheng(int n)
{
    int i,x=1;
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    return x;
}
int main()
{
    int j,jieshu;
    double e=1.0;
    scanf("%d",&jieshu);
    if(jieshu<=1)
    {
        printf("0");
        return 0;
    }
    else
    {
        for(j=1;j<=jieshu;j++)
        {
            e=e+1.0/jiecheng(j);    
        }
        printf("%.12lf",e);
        return 0;
    } 
}