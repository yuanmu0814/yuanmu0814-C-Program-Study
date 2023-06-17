#include <stdio.h>
int main()
{
    int a[12]={0},count[12]={0},num[12]={0},max=0;
    for(int i=0;i<12;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<11-i;j++)
        {
            int temp;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<12;i++)
    {
        for(int j=i+1;j<12;j++)
        {
            if(a[i]==a[j])
            {
                count[i]++;
            }
            else
            num[i]=a[i];
        }
    }
    for(int i=0;i<12;i++)
    {
        if(count[i]>count[max])
        {
            max=i;
        }
    }
    printf("num: %d, times=%d",num[max],count[max]+1);
}
