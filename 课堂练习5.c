/*
 * 自整除数字就是该数字可以整除其每一个位上的数字。例如128就是一个自整除数字，因为128%1=0,128%2=0, 128%8=0。另外，自整除数字不允许存在为0的数位，例如108不是自整除数字，因为存在0。
 * 要求输入一个数字下限和一个数字上限，输出在该范围内(包括上下限)的所有自整除数字。
 * 例如:输入:1 和22，输出: 1,2,3,4,5,6,7,8,9,11,12,15,22。
 */
#include<stdio.h>
int check(int n)
{
    int signal=0,ori=n,check=n;
    while(check)
    {
        if(n%10==0)
        {
            return -1;
        }
        check/=10;
    }
    while(n)
    {
        if(ori%(n%10)!=0)
        {
            signal=1;
            break;
        }
        n/=10;
    }
    return signal;
}
int main()
{
    int max,min;
    scanf("%d %d",&min,&max);
    for(int i=min;i<=max;i++)
    {
        if(check(i)==0)
            printf("%d ",i);
    }
    return 0;
}