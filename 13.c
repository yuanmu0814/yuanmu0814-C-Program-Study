#include <stdio.h>
int main()
{
    long x,y,z=0,num;
    //声明变量x,y,z,sum//
    printf("请输入一个正整数\n");
    //显示提示//
    scanf("%ld",&x);
    //读入数值//
    num=x; 
    //将x的值保留//
    while(x!=0)
    {
        y=x%10;
        //取这个数的最后一位//
        z=y+z*10;
        //从后往前把数生成//
        x=x/10;
        //把数变小十倍，这样再取最后一位就是下一位//
    }
    //生成回文数//
    if(z==num)
    {
        printf("%ld",num);
    }
    else
    {
        printf("0");
    }
    //检验//
    return 0;
}