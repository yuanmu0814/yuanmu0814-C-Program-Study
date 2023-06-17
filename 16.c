#include <stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        if(x==i*i)
        {
            printf("%d\n",i);
            break;
        }
    }
    if(x==i)
    {
        printf("0\n");
    }
    return 0;
}