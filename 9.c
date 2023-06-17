#include <stdio.h>
int main()
{
    int bai;
    printf("请输入百分制成绩\n");
    scanf("%d",&bai);
    if (bai<=59)
    {
        printf("该生的二进制成绩为0");
    }
    else
    {
        printf("该生的二进制成绩为1");
    }
    return 0;
}