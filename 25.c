#include <stdio.h>
main()
{
    int y=9;
    switch(y++)
    {
    case 9:
        y/=2;
    case 8:
        --y;
    }
    printf("%d",y);
}
