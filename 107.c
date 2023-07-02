#include <stdio.h>
float housefound(float *gz)
{
    float sum=0.0;
    for(int i=0;i<5;i++)
        sum+=gz[i]*0.12;
    return sum;
}
int main()
{
    float gz[5]={1.1,2.2,3.3,4.4,5.5};
    printf("%g",housefound(gz));
}
