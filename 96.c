#include <stdio.h>
int main()
{
    int length_1,length_2;
    scanf("%d",&length_1);
    int num_1[length_1][length_1];
    for(int i=0;i<length_1;i++)//读入第一个矩阵
    {
        for(int j=0;j<length_1;j++)
        {
            scanf("%d",&num_1[i][j]);
        }
    }
    scanf("%d",&length_2);
    int num_2[length_2][length_2];
    for(int i=0;i<length_2;i++)//读入第二个矩阵
    {
        for(int j=0;j<length_2;j++)
        {
            scanf("%d",&num_2[i][j]);
        }
    }
    int signal=1;
    for(int i=0;i<length_1;i++)
    {
        for(int j=0;j<length_1;j++)
        {
            if(num_1[i][j]==num_2[0][0])
            {
                signal=1;
                for(int i2=i,i3=0;i2<i+length_2;i2++,i3++)
                {
                    for(int j2=j,j3=0;j2<j+length_2;j2++,j3++)
                    {
                        if(num_1[i2][j2]!=num_2[i3][j3])
                        {
                            signal=-1;
                            break;
                        }
                    }
                }
                if(signal==1)
                {
                    printf("%d,%d",i+1,j+1);
                    break;
                }
            }
        }
    }
    if(signal!=1)
        printf("-1");
}