#include <stdio.h>
int main()
{
    int length1,length2;
    scanf("%d",&length1);
    int num[40]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    for(int i=0;i<length1;i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&length2);
    for(int i=0,g=length1;i<length2;i++)
    {
        int temp=0,signal=0;
        scanf("%d",&temp);
        for(int j=0;j<length1;j++)
        {
            if(temp==num[j])
            {
                num[j]=-1;
                signal=1;
            }
        }
        if(signal==0)
        {
            num[g]=temp;
            g++;
        }
    }
    for(int i=0;i<length1+length2;i++)
    {
        for(int j=0;j<length1+length2-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(int i=0;i<length1+length2;i++)
    {
        if(num[i]!=-1)
            printf("%d ",num[i]);
    }
}
