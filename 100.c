#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    //打印第一排
    for(int i=1;i<n;i++)
    {
        printf(" ");
    }
    for(int i=0;i<n;i++)
    {
        printf("*");
    }
    printf("\n");
    //打印斜边
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<2*n-2+i;j++)
        {
            if(j==n-i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("*\n");
    }
    for(int i=n+1;i<2*n-1;i++)
    {
        for(int j=0;j<4*n-3-i;j++)
        {
            if(j==i-n)
                printf("*");
            else
                printf(" ");
        }
        printf("*\n");
    }
    for(int i=1;i<n;i++)
    {
        printf(" ");
    }
    for(int i=0;i<n;i++)
    {
        printf("*");
    }
    printf("\n");

}
