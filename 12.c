#include <stdio.h>
int main()
{
    int a[9]={0};
LOOP:
    printf("请输入行列式内的数\n");
    int i=0;
    for(i=0;i<=8;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("|%4d%4d%4d|\n",a[0],a[1],a[2]);
    printf("|%4d%4d%4d|\n",a[3],a[4],a[5]);
    printf("|%4d%4d%4d|\n",a[6],a[7],a[8]);
    printf("结果=%5d\n",(a[0]*a[4]*a[8]+a[1]*a[5]*a[6]+a[2]*a[3]*a[7]-a[1]*a[3]*a[8]-a[0]*a[5]*a[7]-a[2]*a[4]*a[6]));
    goto LOOP;
    return 0;
}
