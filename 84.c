#include <stdio.h>
int main()
{
    int n[30]={0},count=0;
    for(int i=0;;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]==-1)
            break;
        count++;
    }
    int max=0;
    for(int i=0;i<count;i++)
    {
        if(max<n[i])
            max=n[i];
    }
    for(int i=max;i>0;i--)
    {
        for(int j=0;j<count;j++)
        {
            if(n[j]>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}