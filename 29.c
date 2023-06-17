#include <stdio.h>
int main()
{
    int n,i=1,sum=0,a=1;
    scanf("%d",&n);
    if(n>0&&n<11)
    {
        for(i=1;i<=n;i++)
        {
            a=a*i;
            sum=sum+a;
        }
        printf("%d\n",sum);
    }
    else
    {
        printf("input error");
    }
    return 0;
}