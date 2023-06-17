#include <stdio.h>
#include <math.h>
int main()
{
    double i=1,jifen=0;
    while(i!=3.140)
    {
        jifen=jifen+sin(i)*0.001;
        i=i+0.001;
    }
    printf("%.15lf",jifen);
    return 0;
}
