#include <stdio.h>
main()
{
    int i,j,k,n;
    printf("请输入要求生成的菱形阶数\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(k=1;k<=2*i-1;k++)
        {
            printf("#");
        }

        printf("\n");
    }

    for(i=n;i>=1;i--)
    {

        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(k=1;k<=2*i-1;k++)
        {
            printf("#");
        }

        printf("\n");
    }
}