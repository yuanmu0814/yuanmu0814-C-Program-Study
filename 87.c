#include "stdio.h"
int main()
{
    int hang_A,lei_A,hang_B,lei_B;
    scanf("%d %d",&hang_A,&lei_A);
    int num_A[hang_A][lei_A];
    for(int i=0;i<hang_A;i++)
        for(int j=0;j<lei_A;j++)
            scanf("%d",&num_A[i][j]);
    scanf("%d %d",&hang_B,&lei_B);
    int num_B[hang_B][lei_B];
    for(int i=0;i<hang_B;i++)
        for(int j=0;j<lei_B;j++)
            scanf("%d",&num_B[i][j]);
    int hang_ti,lei_ti;
    scanf("%d %d",&hang_ti,&lei_ti);
    hang_ti--;
    lei_ti--;
    if((hang_ti+hang_B<=hang_A)&&(lei_ti+lei_B<=lei_A))
    {
        for(int i=hang_ti;i<hang_ti+hang_B;i++)
            for (int j=lei_ti;j<lei_ti+lei_B;j++)
                num_A[i][j]=num_B[i-hang_ti][j-hang_ti];
    }
    for(int i=0;i<hang_A;i++)
    {
        for(int j=0;j<lei_A;j++)
            printf("%d ",num_A[i][j]);
        printf("\n");
    }
}