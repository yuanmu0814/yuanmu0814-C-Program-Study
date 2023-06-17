#include <stdio.h>
int jiahe(int out)
{
    int he=0;
    for(int i=1;i<=out;i++)
    {
        he=he+i;
    }
    return he;
}
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+jiahe(i);
    }
    printf("%d",sum);
}