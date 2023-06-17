#include <stdio.h>
double jiecheng(int n)
{
    double back=1.0;
    for(int i=1;i<=n;i++)
    {
        back*=i;
    }
    return back;
}
double cifang(int x,int n)
{
    double back=1.0;
    for(int i=1;i<=n;i++)
    {
        back*=x;
    }
    return back;
}
double diedai(int di,int ci)
{
    double back=1.0;
    for(int i=1;i<=ci;i++)
    {
        back+= cifang(di,i)/jiecheng(i);
    }
    return back;
}
int main()
{
    int dishu,cishu;
    scanf("%d %d",&dishu,&cishu);
    printf("%.5f %.5f",diedai(dishu,cishu), diedai(dishu,cishu)-diedai(dishu,cishu-1));
    return 0;
}