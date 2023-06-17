#include <stdio.h>
int main()
{
    int n,temp,xinqi;
    printf("请输入几天后\n");
    scanf("%d",&n);
    temp=6+n;
    xinqi=temp%7;
    switch(xinqi)
    {
        case 0:
        printf("星期日");
        break;
        case 6:
        printf("星期六");
        break;
        case 5:
        printf("星期五");
        break;
        case 4:
        printf("星期四");
        break;
        case 3:
        printf("星期三");
        break;
        case 2:
        printf("星期二");
        break;
        case 1:
        printf("星期一");
        break;
    }
    return 0;
}