#include<stdio.h>
int main()
{
int n,x; //y,z;
scanf("%d",&n);
for(int i=100;i<=999;i ++)
{
    if((n-i)<1000)
    {
        if((i - i%100*100)%10 == (n-i)%100&&i - i%10*10 == ((n-i) - (n-i)%100*100)%10&&i - i%10*10 == (n-i) - (n-i)%10*10)
        {
            
            x=i%100;
            //y=i%10 - i%100*10;
            //z=i - i%10*10;
            
        }
        printf("%d ",x);
    //printf("%d,%d,%d\n",x,y,z);
    }
}
return 0;
}