#include <stdio.h>
int main()
{
    char c='0'+2;
    switch(c)
    {
    case 1:
        printf("A");
        break;
    case '2':
        printf("B");
    case 2:
        printf("C");
    default:
        printf("D");
    }
}
