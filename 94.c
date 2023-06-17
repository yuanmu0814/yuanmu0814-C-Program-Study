#include <stdio.h>
int main()
{
    int num_1[100],i=0;
    for(;i<100;)
    {
        int temp=0;
        scanf("%d",&temp);
        if(temp==-1)
            break;
        else
        {
            num_1[i]=temp;
            i++;
        }     
    }
    for(;i<100;)
    {
        int signal=0,temp=0;
        scanf("%d",&temp);
        if(temp==-1)
            break;
        for(int j=0;j<i;j++)
        {
            if(temp==num_1[j])
            {
                signal=1;
                break;
            }
        }
        if(signal==0)
        {
            num_1[i]=temp;
            i++;
        }
    }
    for (int j=0;j<i;j++)
    {
        for(int g=0;g<i-1-j;g++)
        {
            if(num_1[g]>num_1[g+1])
            {
                int temp=num_1[g];
                num_1[g]=num_1[g+1];
                num_1[g+1]=temp;
            }
        }
    }
    for(int j=0;j<i;j++)
    {
        printf("%d ",num_1[j]);
    }
      
}