#include <stdio.h>
#include <string.h>
#include <math.h>
int original_number(char *str);//还原为数字
void plus(int *num_1,int *num_2,int n);//加法运算及输出
void subtract(int *num_1,int *num_2,int n);//减法运算及输出
void multiply(int *num_1,int *num_2,int n);//乘法运算及输出
int main()
{
    int n=0,num_1[100]={0},num_2[100]={0};
    char operation;
    /*这个题相当恶心，它要求自动判断数字个数，但是同时还有负数，就很搞人。
    同时夹杂一个运算符，如果直接scanf("%d")的话，该位置会被保存为0，又无法和矩阵中的数相区分，
    所以我写了一个很复杂的算法来解决这个问题，不知道聪明的你会不会有更好的办法捏*/
    while(1)//循环
    {
        char temp[10]={"c"};//设置临时字符串用于保存一个数字或者符号
        for(int j=0;j<10;j++)//一次读入一个字符，如果读入空格或换行则说明当前数字或符号已结束
        {
            char current;
            scanf("%c",&current);
            if(current==' '||current=='\n')
                break;
            else
                temp[j]=current;
        }
        if((temp[0]=='+'||temp[0]=='-'||temp[0]=='*')&&(temp[1]=='\0'))//判断是否为符号
        {
            operation=temp[0];//保存符号
            break;
        }  
        else
            num_1[n]=original_number(temp);//利用函数，存入数字
        n++;
    }
    for(int i=0;i<n;i++)
        scanf("%d",&num_2[i]);//第二个矩阵就非常简单了，赣！
    switch (operation)//switch根据符号进行相应计算即可
    {
        case '+':
        {
            plus(num_1,num_2,n);
            break;
        }
        case '-':
        {
            subtract(num_1,num_2,n);
            break;
        }
        case '*':
        {
            multiply(num_1,num_2,n);
            break;
        }
    }
}
int original_number(char *str)//还原为数字
{
    int back=0;
    if(str[0]=='-')//判断是否为负数
    {
        int length=strlen(str);
        for(int i=1;i<length;i++)//如果是负数，则从第二位开始计算，即真正表示数字的部分
        {
            back*=10;
            back+=str[i]-'0';
        }
        return -back;
    }
    else
    {
        int length=strlen(str);
        for(int i=0;i<length;i++)//否则从第一位就开始计算
        {
            back*=10;
            back+=str[i]-'0';
        }
        return back;
    }
}
void plus(int *num_1,int *num_2,int n)//加法运算及输出
{
    int N=sqrt(n),current=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%5d",num_1[current]+num_2[current]);
            current++;
        }
        printf("\n");
    }     
}
void subtract(int *num_1,int *num_2,int n)//减法运算及输出
{
    int N=sqrt(n),current=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%5d",num_1[current]-num_2[current]);
            current++;
        }
        printf("\n");
    }   
}
void multiply(int *num_1,int *num_2,int n)//乘法运算及输出
{
    int N=sqrt(n),current=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%5d",num_1[current]*num_2[current]);
            current++;
        }
        printf("\n");
    }   
}