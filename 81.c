#include <stdio.h>
int current(int ori,int n)
{
    int back=ori;
    for(int i=0;i<n;i++)
    {
        back=ori+back*10;
    }
    return back;
}
int main()
{
    int ori,cishu,sum=0;
    scanf("%d %d",&ori,&cishu);
    for(int i=0;i<cishu-1;i++)
    {
        printf("%d + ", current(ori,i));
        sum+=current(ori,i);
    }
    printf("%d = %d", current(ori,cishu-1),sum+ current(ori,cishu-1));
}
