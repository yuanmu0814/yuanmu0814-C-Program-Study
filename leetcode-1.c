#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d",&m);
    int arr1[100]={0};
    int arr2[100]={0};
    int fangjian[100]={23333};
    int count=0;
    for(i=0;i<m;i++)
        scanf("%d",&arr1[i]);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr2[i]);
    for(i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++)
    {
        for(j=0;j<sizeof(arr2)/sizeof(arr2[0]);j++)
        {
            if(arr1[i]==arr2[j])
            {
                fangjian[count]=arr1[i];
                count++;
                break;
            }
        }
    }
    for(i=0;i<count-1;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(fangjian[i]==fangjian[j])
            {
                fangjian[j]=114514;
            }
        }
    }
    if(fangjian[0]==23333)
    {
        printf("No Answer");
    }
    else
    {
        for(i=0;i<count;i++)
        {
            if(fangjian[i]!=114514)
            {
                printf("%d ",fangjian[i]);
            }
        }
    }
    return 0;
}