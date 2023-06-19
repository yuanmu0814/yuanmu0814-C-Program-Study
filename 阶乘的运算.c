#include <stdio.h>
long factorial(int n)
{
    long back=1;
    for(int i=1;i<=n;i++)
    {
        back=back*i;
    }
    return back;
}
int main()
{
    int num;
    printf("请输入需要计算阶乘的数\n");
    scanf("%d",&num);
    if (num < 0)
    {
        printf("输入无效！请输入一个非负整数。\n");
    }
    else
    {
        printf("%ld\n", factorial(num));
    }
    return 0;
}