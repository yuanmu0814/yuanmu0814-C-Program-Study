/*
 * 编程实现，找到从0开始前20个素数，屏幕上分别在打印出这20个素数以及这20个素数的和。
 */
#include<stdio.h>
#include<math.h>
int check(int n)
{
    int signal=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            signal=1;
            break;
        }
    }
    return signal;
}
int main()
{
    int sum=0;
    for(int i=2,j=1;j<=20;i++)
    {
        if(check(i)==0)
        {
            sum+=i;
            j++;
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("%d",sum);
    return 0;
}