#include <stdio.h>
int main()
{
    int length1,length2,num[200]={0},signal=0,out[100]={0},g=0;
    scanf("%d",&length1);
    for(int i=0;i<length1;i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&length2);
    for(int i=0;i<length2;i++)
    {
        int temp;
        scanf("%d",&temp);
        for(int j=0;j<length1;j++)
        {
            if(num[j]==temp)
            {
                out[g]=temp;
                signal=1;
                g++;
                break;
            }
        }
    }
    for(int i=0;i<g;i++)
    {
        for(int j=0;j<g-1;j++)
        {
            if(out[j+1]>out[j])
            {
                int temp=out[j];
                out[j]=out[j+1];
                out[j+1]=temp;
            }
        }
    }
    if(signal==0)
        printf("No Answer");
    for(int i=0;i<g;i++)
        if(out[i]!=0)
            printf("%d ",out[i]);
}