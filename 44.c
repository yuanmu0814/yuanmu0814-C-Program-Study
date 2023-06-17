#include <stdio.h>
main()
{
    int x;
    for(x=100;x<=105;x++)
    {
        if(x%3==0)
            continue;
        printf("%d",x);
    }
}
