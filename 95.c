#include <stdio.h>
int main()
{
    int num[100],length_1,length_2;
    scanf("%d",&length_1);
    for(int i=0;i<length_1;i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&length_2);
    for(int i=0;i<length_2;i++)
    {
        int temp;
        scanf("%d",&temp);
        for(int j=0;j<length_1;j++)
        {
            if(temp==num[j])
            {
                num[j]=114514;
            }
        }
    }
    for(int i=0;i<length_1;i++)
        for(int j=0;j<length_1-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int temp=num[j+1];
                num[j+1]=num[j];
                num[j]=temp;
            }
        }
    for(int i=0;i<length_1;i++)
    {
        if(num[i]!=114514)
            printf("%d ",num[i]);
    }
}