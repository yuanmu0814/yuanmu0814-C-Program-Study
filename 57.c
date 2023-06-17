#include <stdio.h>
int jiahe(int num)
{
    int out=0;
    for(int i=1;i<=num;i++)
    {
        out=out+i;
    }
    return out;
}
int main()
{
    int n,out=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        out=out+jiahe(i);
    }
    printf("%d",out);
    return 0;
}