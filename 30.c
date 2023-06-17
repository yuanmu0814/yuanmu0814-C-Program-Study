#include <stdio.h>
#include <math.h>
int main()
{
    int i,jingdu=1000000;
    double shangxian=0,xiaxian=3.14,jifen=0,buchang;
    buchang=((xiaxian-shangxian)/jingdu);
    for(i=1;i<=jingdu;i++)
    {
        jifen=jifen+sin(shangxian)*buchang;
        shangxian=shangxian+buchang;
    }
    printf("%lf",jifen);
    return 0;
}