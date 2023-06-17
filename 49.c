#include <stdio.h>
int main()
{
    int hangshu,i,j,num=1;
    scanf("%d",&hangshu);
    hangshu++;
    for(i=0;i<hangshu;i++)
    {
    for(j=1;j<=hangshu-i;j++)
    {
        printf("  ");
    }
    for(int g=0;g<=i;g++)
    {
        if(g==0||i==0)
        num=1;
        else
        num=num*(i-g+1)/g;
        printf("%4d",num);
    }
    printf("\n");
    }
    return 0;
}