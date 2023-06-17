#include <stdio.h>
#include <math.h>
int check(int num)
{
    int signal=1;
    while(num!=0)
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                signal = 0;
                break;
            }
        }
        num/=10;
    }
    return signal;
}
int main()
{
    for(int i=200;i<9999;i++)
    {
        if(check(i)==1)
        {
            printf("min=%d\n",i);
            break;
        }
    }
    for(int i=9999;i>200;i--)
    {
        if(check(i)==1)
        {
            printf("max=%d",i);
            break;
        }
    }
    return 0;
}