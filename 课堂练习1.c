/*
 * 从键盘输入一个10进制正整数，把它转换成二进制数，把这个二进制数存放到建立好的一维数组中，并输出该二进制数，如输入12344，输出11000000111000
 */
#include<stdio.h>
int main()
{
    int num, i=0;
    int out[100]={0};
    scanf("%d",&num);
    while(num)
    {
        if(num%2!=0)
            out[i]=1;
        else
            out[i]=0;
        num/=2;
        i++;
    }
    i--;
    for(i;i>=0;i--)
        printf("%d",out[i]);
    return 0;
}
