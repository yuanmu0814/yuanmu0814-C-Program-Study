#include <stdio.h>
#include <string.h>
int main()
{
    int length_1,length_2,number[40];
    scanf("%d %d",&length_1,&length_2);
    for(int i=0;i<length_1;i++)
    {
        scanf("%d",&number[i]);
    }
    for(int i=0;i<length_2;i++)
    {
        int temp,signal=1;
        scanf("%d",&temp);
        for(int j=0;j<length_1;j++)
        {
            if(temp==number[j])
            {
                signal=-1;
                break;
            }
        }
        if(signal==1)
        {
            number[length_1]=temp;
            length_1++;
        }
    }
    for(int i=0;i<length_1;i++)
    {
        for(int j=0;j<length_1-i-1;j++)
        {
            if(number[j]>number[j+1])
            {
                int temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
        }
    }
    for(int i=0;i<length_1;i++)
        printf("%d ",number[i]);
}
