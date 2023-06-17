#include <stdio.h>
int main()
{
    int geshu,fenshu[50],i=0,temp;
    scanf("%d\n",&geshu);
    if(geshu<5&&geshu>50)
        printf("ERROR!\n");
    else
    {
        for(int g=0;g<geshu;g++)
        {
            scanf("%d",&fenshu[g]);
        }
        for(i=0;i<geshu;i++) //Ã°ÅÝÅÅÐò//
        {
            for(int j=0;j<geshu-i-1;j++)
            {
                if(fenshu[j]>fenshu[j+1])
                {
                    temp=fenshu[j];
                    fenshu[j]=fenshu[j+1];
                    fenshu[j+1]=temp;
                }
            }
        }
    }
    double sum=0.0;
    for(i=2;i<=geshu-3;i++)
    {
        sum=sum+fenshu[i];
    }
   printf("%.2f\n",sum/(geshu-4));
}
