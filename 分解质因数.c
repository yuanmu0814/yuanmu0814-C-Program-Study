#include <stdio.h>
int is_prime(int n)
{
    int back=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            back=-1;
            break;
        }
    }
    return back;
}
int main()
{
    int num;
    printf("请输入一个正整数\n");
    scanf("%d",&num);
    int ori=num;
    for(int i=2;i<num;i++)//从二开始，逐个寻找是否为其因数
    {
        if(is_prime(i)==1)//检验是否为质数
        {
           while(num%i==0)//循环判断是否可以被整除
           {
                printf("%d*",i);
                num=num/i;
           }
        }
    }
    if(num!=1)//输出最后一位
    {
        printf("%d\n",num);
    }
    //其实从逻辑上来说，是可以不用检验因数是否为素数的，你知道为什么吗QAQ
    //另一种写法
    num=ori;
    int i=2;//从二开始判断
    while(i<num)
    {
        if(num%i==0)//是否可以整除
        {
            printf("%d*",i);
            num=num/i;
        }
        else
            i++;//如果不能整除就去检验下一个数
    }
    printf("%d",num);//输出最后一个数

    return 0;
}