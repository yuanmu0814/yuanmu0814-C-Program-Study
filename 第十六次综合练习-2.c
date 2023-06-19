#include <stdio.h>
#include <string.h>
int main()
{
    int num[100],count=0;
    for(int i=0;;i++)
    {
        int temp;
        scanf("%d",&temp);
        if(temp==-1)
            break;
        num[i]=temp;
        count++;
    }
    while(1)
    {
        int temp=0;
        scanf("%d",&temp);
        if(temp==-1)
            break;
        for(int i=0;i<count;i++)
        {
            if(temp==num[i])
            {
                num[i]=114514;
                break;
            }
        }
    }
    for(int i=0;i<count;i++)
        if(num[i]!=114514)
            printf("%d ",num[i]);
}
