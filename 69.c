#include <stdio.h>
int main()
{
    int a[10]={0},i,count=0;
    for(i=0;i<10;i++)
    {
        int current=0;
        scanf("%d",&current);
        if(current>0)
        {
            a[i]=current;
            count++;
        }
    }
    printf("复数个数: %d\n",9-count);
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
