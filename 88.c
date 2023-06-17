#include "stdio.h"
int main()
{
    int length;
    scanf("%d",&length);
    int ori[length],sort[length];
    for(int i=0;i<length;i++)
    {
        scanf("%d",&ori[i]);
    }
    for(int i=0;i<length;i++)
    {
        sort[i]=-114514;
        int temp=ori[i],signal=1;
        for(int j=i+1;j<length;j++)
        {
            if(temp==ori[j])
            {
                signal=0;
            }
        }
        if(signal==1)
            sort[i]=temp;
    }
    for(int i=0;i<length;i++)
        for(int j=0;j<length-1;j++)
        {
            if(sort[j+1]>sort[j])
            {
                int temp=sort[j+1];
                sort[j+1]=sort[j];
                sort[j]=temp;
            }
        }
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length;j++)
        {
            if(ori[i]==sort[j])
            {
                printf("%d ",j+1);
            }
        }
    }

}