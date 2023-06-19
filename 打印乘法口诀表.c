#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n); // 输入一个整数n，表示乘法表的大小
    for(int i=1;i<= n;i++) // 控制行数
    {
        for(int j=1;j<=n;j++) // 控制列数
        {
            printf("%3d",i*j); // 打印每个位置的乘积，使用%3d保持对齐
        }
        printf("\n"); // 换行
    }
    return 0;
}
