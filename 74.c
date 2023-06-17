#include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d",&n1);
    int num1[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&num1[i]);
    }
    scanf("%d",&n2);
    int num2[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&num2[i]);
        for(int j=0;j<n1;j++)
        {
            if(num2[i]==num1[j])
                num1[j]=-1;
        }
    }
    for(int i=0;i<n1;i++)
    {
        if(num1[i]!=EOF&&num1[i]!=-1)
            printf("%d ",num1[i]);
    }
    return 0;


}