#include <stdio.h>
int main()
{
    int a=0,b=0,c=0;
    if(a=1,a>=b)
    {
        switch(b++)
        {
        case 1:
            c=a;
        case 0:
            c=b;
            break;
        default:
            c=0;
        }
    }
    printf("%d",c);
    return 0;
}
