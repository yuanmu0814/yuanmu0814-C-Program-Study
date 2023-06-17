#include <stdio.h>
int main()
{
    int len1;
    scanf("%d",&len1);
    int num[len1];
    for(int i=0;i<len1;i++)
    {
        scanf("%d",&num[i]);
    }
    int len2;
    scanf("%d",&len2);
    int count=len1;
    for(int i=0,j=len1;i<len2;i++)
    {
        int temp=0,signal=0;
        scanf("%d",&temp);
        for(int j=0;j<len1;j++)
        {
            if(temp==num[j])
                signal=1;
        }
        if(signal==0)
        {
            num[j] = temp;
            j++;
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<count-i;j++)
        {
            if(num[j]>num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(int i=0;i<count;i++)
        printf("%d ",num[i]);
}