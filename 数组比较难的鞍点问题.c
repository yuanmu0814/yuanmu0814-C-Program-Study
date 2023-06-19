/*
输入一个3*4二维数组，求其“鞍点”，即该位置上的元素在该行上最大，在该列上最小，如果没有鞍点输出"no saddlepoint"。
【输入形式】
3*4二维数组
【输出形式】
saddlepoint: %d, col: %d, row:%d
或
no saddlepoint
【样例输入】
1 9 8 4
2 6 7 5
3 8 9 5
【样例输出】
saddlepoint: 7, col: 2, row:1*/
#include <stdio.h>
int main()
{
    int num[3][4]={0}; // 二维数组存储输入的数据
    int signal=1; // 信号标志，用于判断是否存在鞍点
    // 输入数据
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    int maxi[3],minj[4]; // 分别存储每行的最大值和每列的最小值
    // 计算每行的最大值
    for(int i=0;i<3;i++)
    {
        maxi[i]=num[i][0]; // 假设每行的第一个数为最大值
        for(int j=0;j<4;j++)
        {
            if(num[i][j]>maxi[i])
                maxi[i]=num[i][j]; // 更新最大值
        }
    }

    // 计算每列的最小值
    for(int j=0;j<4;j++)
    {
        minj[j]=num[0][j]; // 假设每列的第一个数为最小值
        for(int i=0;i<3;i++)
        {
            if(num[i][j]<minj[j])
                minj[j]=num[i][j]; // 更新最小值
        }
    }
    // 寻找鞍点并输出
    for (int i=0; i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(num[i][j]==maxi[i]&&num[i][j]==minj[j]) // 当当前元素既是所在行的最大值又是所在列的最小值时
            {
                signal=-1; // 存在鞍点，将信号标志设为-1
                printf("saddlepoint: %d, col: %d, row: %d\n",num[i][j],j,i); // 输出鞍点的值、列号和行号
            }
        }
    }
    if(signal==1) // 如果信号标志仍为1，表示不存在鞍点
        printf("no saddlepoint\n");
    return 0;
}

