#include <stdio.h>
int main()
{
    int a[10];
    int i,j,n;
    n=0;
    int b[10]={0};
    for(int i=0;i<10;i++)
    {
        a[i]=0;
    }
    int current;
    for(i=0;i<10;i++)
    {
        int signal=0;
        scanf("%d",&current);
        for(j=0;j<10;j++)
        {
            if(current==b[j])
                signal=1;
        }
        if(signal==0)
            b[i]=current;
    }
    for(int i=0,j=0;i<10;i++)
    {
        if(b[i]!=0)
        {
            a[j]=b[i];
            j++;
            n++;
        }
    }
    for(i  =  0;  i<n;  i++)
        printf("%d  ",  a[i]);
    return  0;
}
