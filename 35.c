#include <stdio.h>
int main()
{
    int year[2],month[2],day[2],old;
    scanf("%d.%d.%d",&year[0],&month[0],&day[0]);
    scanf("%d.%d.%d",&year[1],&month[1],&day[1]);
    old=year[1]-year[0]-1;
    if(month[1]>month[0])
    {
        old++;
    }
    if(month[1]==month[0]&&day[1]>day[0])
    {
        old++;
    }
    printf("%d",old);
    return 0;
}
