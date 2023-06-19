#include<stdio.h>
#include<math.h>
#define N 10000000
void main()
{
double sum=0;
int i;
for(i=0; i<N; i++)
{
sum += sin((double)(i)/N)/N;
}
printf("%lf\n%lf",sum,1-cos(3.14));
}
