#include <stdio.h>
int main()
{
    int i, j;
    printf("请输入两个数:"); 
    scanf("%d %d",&i,&j); 
    if (i>j)
    {
        printf("是新型肺炎病人\n");
    }
    else
    {
        printf("不是新型肺炎病人\n");
    }
    return 0;
}