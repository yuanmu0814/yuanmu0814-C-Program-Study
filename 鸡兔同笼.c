#include <stdio.h>
#include <stdlib.h>

int fun(int n, int m); // 函数声明

int n1, n2; // 全局变量，保存鸡和兔的数量

int main()
{
    int m, n, f;
    printf("请输入总只数和总腿数\n");
    scanf("%d%d", &n, &m); // 输入n和m的值，分别表示总数量和总腿数

    f = fun(n, m); // 调用fun函数计算鸡和兔的数量

    if (f == -1)
        printf("No answer"); // 如果返回值为-1，输出"No answer"
    else
        printf("%d只鸡，%d只兔\n", n1, n2); // 输出鸡和兔的数量

    return 0;
}

int fun(int n, int m)
{
    for (int i = 0; i <= n; i++)
    {
        if ((i * 4 + (n - i) * 2) == m) // 判断鸡和兔的总腿数是否等于m
        {
            n2 = i; // n2保存兔的数量
            n1 = n - i; // n1保存鸡的数量
            return 0; // 返回0表示找到了鸡和兔的数量
        }
    }

    return -1; // 返回-1表示没有找到合适的鸡和兔的数量
}
