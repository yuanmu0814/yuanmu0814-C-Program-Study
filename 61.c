#include <stdio.h>
int main()
{
    int jieshu;
    scanf("%d",&jieshu);
    for(int i=0;i<jieshu;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int j=0;j<(jieshu-i)*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
