#include <stdio.h>
#define M 10
int main() {
    int a[M] = {157,4,45,2,52,3,34,22,1,45};
    for (int j = 0; j < M; j++)
    {
        int min = a[j];
        int minIndex = j;
        for (int i = j + 1; i < M; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
                minIndex = i;
            }
        }
        // 将找到的最小值与当前位置元素进行交换
        int temp = a[j];
        a[j] = min;
        a[minIndex] = temp;
        // 输出当前最小数
        printf("%d ", a[j]);
    }
    return 0;
}
