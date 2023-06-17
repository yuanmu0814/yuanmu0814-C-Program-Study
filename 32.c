#include <stdio.h>
int main()
{
    int num,temp=0,out=0,yuanshizhi;
    printf("请输入需要判断的整数\n");
    scanf("%d",&num);
    yuanshizhi=num;
    while(num!=0)
    {
    temp=num%10;
    out=out*10+temp;
    num=num/10;
    }
    if(out==yuanshizhi)
    {
        printf("%d",out);
    }
    else
    {
        printf("0");
    }
    return 0;
}