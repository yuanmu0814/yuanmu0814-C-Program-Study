#include <stdio.h>
int main()
{
    int num[3][4]={0},signal=1;
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            scanf("%d",&num[i][j]);
    int maxi[3]={0},minj[4]={100,100,100,100};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(maxi[i]<num[i][j])
                maxi[i]=num[i][j];
        }
    }
    for(int j=0;j<4;j++)
    {
        for(int i=0;i<3;i++)
        {
            if(minj[j]>num[i][j])
                minj[j]=num[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(num[i][j]==maxi[i]&&num[i][j]==minj[j])
            {
                printf("saddlepoint: %d, col: %d, row:%d",num[i][j],j,i);
                signal=0;
            }
        }
    }
    if(signal)
    {
        printf("no saddlepoint");
    }
}
