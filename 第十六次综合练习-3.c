#include <stdio.h>
int main()
{
    int num[3][4]={0},signal=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    int maxi[3],minj[4];
    for(int i=0;i<3;i++)
    {
        maxi[i]=num[i][0];
        for(int j=0;j<4;j++)
        {
            if(num[i][j]>maxi[i])
                maxi[i]=num[i][j];
        }
    }
    for(int j=0;j<4;j++)
    {
        minj[j]=num[0][j];
        for(int i=0;i<3;i++)
        {
            if(num[i][j]<minj[j])
                minj[j]=num[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(num[i][j]==maxi[i]&&num[i][j]==minj[j])
            {
                signal=-1;
                printf("saddlepoint: %d, col: %d, row:%d",num[i][j],j,i);
            }
        }
    }
    if(signal==1)
        printf("no saddlepoint");
}