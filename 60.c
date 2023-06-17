#include <stdio.h>
void inv1(int *b,int n)
{
    for(int i=0;i<=((n-1)/2);i++)
    {
        int temp;
        temp=b[i];
        b[i]=b[n-i-1];
        b[n-i-1]=temp;
    }
}
int main()
{
    int a[7]={1,2,3,4,5,6,7};
    printf("原始\n");
    for(int i=0;i<7;i++)
    {
    printf("%d\n",a[i]);
    }
    printf("\n");
    inv1(a,7);
    printf("交换后\n");
    for(int i=0;i<7;i++)
    {
    printf("%d\n",a[i]);
    }
}