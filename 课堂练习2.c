/*
 * 编程求解键盘输入的任一整数的所有素数因子。
 */
#include<stdio.h>
#include<math.h>
int check(int num)
{
    int signal=0;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            signal=1;
            break;
        }
    }
    return signal;
}
int main()
{
    int num,flag=0;
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            if(check(i)==0)
            {
                printf("%d ",i);
                flag=1;
            }
        }
    }
    if(flag==0)
        printf("无素数因子\n");
    return 0;
}