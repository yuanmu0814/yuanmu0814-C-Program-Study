#include <stdio.h>
main()
{
    int i=0;
    while(i<3)
    {
        for(;i<4;i++)
        {
            printf("%d",i++);
            if(i<3)
            {
                continue;
            }
            else
            {
                break;
            }
            printf("%d\n",i);
        }
    }
}
