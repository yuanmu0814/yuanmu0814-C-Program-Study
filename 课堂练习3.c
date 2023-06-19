/*
 * 对于M以内的自然数n，如果n为3的倍数，则连续计算各个数位的立方和，直至该立方和结果停留在某个自然数。此自然数即为黑洞。例如:63是3的倍数，按上面的规律运算，最后的153即为黑洞。从键盘输入任一3的倍数，计算黑洞数。
 */
#include<stdio.h>
int check(int n)
{
    int back=0;
    while(n)
    {
        back+=(n%10)*(n%10)*(n%10);
        n/=10;
    }
    return back;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3!=0)
    {
        printf("不是三的倍数");
        return 0;
    }
    else
    {
        while(1)
        {
            if(n==check(n))
            {
                printf("%d",n);
                break;
            }
            n+=3;
        }
    }
    return 0;
}