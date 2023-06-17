#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;
    scanf("%lf",&x);
    y=1+sin(x);
    printf("%.2lf",y);
    return 0;
}