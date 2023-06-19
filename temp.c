#include "stdio.h"
int main()
{
    int current[3]={0},m;
    scanf("%d",&m);
    for (int i = 1; i <= m; ++i)
    {
        current[0]*=10;
        current[0]+=i;
    }
    printf("%d",current[0]);
}