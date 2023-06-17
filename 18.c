#include <stdio.h>
int main()
{
    int time;
    printf("请输入骑行时间（请以分钟为单位，谢谢！）\n");
    scanf("%d",&time);
    //hour=time/60+1;
    if(time<=15)
    {
        printf("应收费1元\n");
        return 0;
    }
    else if(time<=30)
    {
        printf("应收费2元\n");
        return 0;
    }
    else
    {
        time=time/60+1;
        printf("应收费%d元",time*3);
        return 0;
    }
}