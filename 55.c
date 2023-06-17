#include<stdio.h>
int main()
{
    char a='c',b;
    int m=0,n=1;
    while(1)
    {
        b=getchar();
        if(a=='\n'&&b=='\n')
            break;
        if(a==' ')
            m++;
        else if(a=='\n')
            n++;
        a=b;
    }
    printf("%d %d",m,n);
    return 0;
}
