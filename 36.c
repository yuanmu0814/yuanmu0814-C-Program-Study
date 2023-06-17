#include <stdio.h>
int huiwen(int num)
{
    int out=0,end;
    while(num!=0)
    {
        end=num%10;
        out=out*10+end;
        num=num/10;
    }
    return out;
}

int main()
{
    int input,temp=0,i=1;
    scanf("%d",&input);
    while(input!=huiwen(input))
    {
        temp=input+huiwen(input);
        printf("%d:%d+%d=%d\n",i,input,huiwen(input),temp);
        input=temp;
        i++;
    }
    printf("%d",input);
    return 0;
}
