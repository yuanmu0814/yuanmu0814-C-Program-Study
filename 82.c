#include <stdio.h>
void Input(int *t,int n)//输入数组内的值
{
    for(int i=0;i<n;i++)
        scanf("%d",&t[i]);
}
void bubbleSort(int *t,int n)//冒泡排序
{
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (t[j]>t[j+1])
            {
                int temp=t[j+1];
                t[j+1]=t[j];
                t[j]=temp;
            }
        }
    }
}
void Output(int *t,int n)//按照题设要求输出
{
    int count=1;
    for(int i=0;i<n;i++)
    {
        if(t[i]!=t[i+1])
        {
            printf("%d %d\n",t[i],count);
            count=1;
        }
        else
            count++;
    }
}
int main()
{
    int length1,length2;
    scanf("%d",&length1);
    int num1[length1],*s1=num1;
    Input(s1,length1);
    bubbleSort(s1,length1);
    scanf("%d",&length2);
    int num2[length2],*s2=num2;
    Input(s2,length2);
    bubbleSort(s2,length2);
    int signal=1;
    if(length1==length2)
    {
        for(int i=0;i<length1;i++)
        {
            if(num1[i]!=num2[i])
                signal=0;
        }
        printf("%d\n",signal);
        if(signal==1)
            Output(s1,length1);
        if(signal==0)
            Output(s1,length1);
    }
    else
    {
        printf("0\n");
        Output(s1,length1);
    }
}