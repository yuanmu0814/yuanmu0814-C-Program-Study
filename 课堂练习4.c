/*
 * 编程分别统计字符串中所有数字字符的数值和.
 */
#include<stdio.h>
int main()
{
    char str[100];
    int out=0;
    gets(str);
    for(int i=0;i<100;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            out+=str[i]-'0';
    }
    printf("%d",out);
    return 0;
}