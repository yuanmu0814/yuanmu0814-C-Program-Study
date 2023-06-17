#include "stdio.h"
int main()
{
    int n,m,signal=0;
    scanf("%d %d",&n,&m);
    int num[n][m],maxi[n],minj[m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        maxi[i]=num[i][0];
        for (int j = 0; j < m; j++)
        {
            if(maxi[i]<num[i][j])
                maxi[i]=num[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        minj[j]=num[0][j];
        for (int i = 0; i < n; i++)
        {
            if(minj[j]>num[i][j])
                minj[j]=num[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(num[i][j]==maxi[i]&&num[i][j]==minj[j])
            {
                printf("%d %d %d\n",num[i][j],i+1,j+1);
                signal=1;
            }
        }
    }
    if(signal==0)
        printf("No answer");
}
