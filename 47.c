#include <stdio.h>
int main()
{
    int fen[60]={0},i=0,j,g,count=1,max[2]={0},min[2]={0},temp;
    while(1)
    {
        scanf("%d",&fen[i]);
        if(fen[i]==-1)
        {
            break;
        }
        count++;
        i++;
    }
    for(g=0;g<count-1;g++)
    {
    for(j=0;j<count-g-1;j++)
    {
        if(fen[j]>fen[j+1])
        {
            temp=fen[j];
            fen[j]=fen[j+1];
            fen[j+1]=temp;
        }
    }
    }
    int k;
    double sum=0.0;
    for(k=3;k<count-2;k++)
    {
        sum=sum+fen[k];
    }
    printf("%.2f\n",(sum/(count-5)));
}
