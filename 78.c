#include <stdio.h>
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    double num[n+1];
    num[0]=x;
    for(int i=0;i<n;i++)
    {
        num[i+1]=(num[i]+(x/num[i]))/2;
    }
    printf("%.5f",num[n]);
    return 0;
}