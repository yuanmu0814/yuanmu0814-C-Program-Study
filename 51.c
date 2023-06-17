#include <stdio.h>
int main()
{
    int blankcount=0,entercount=1 ;
    char a,b;
    for(int i=0;i<9999;i++)
    {
        b=getchar();
        if(a=='\n'&&b=='\n')
            break;
        if(a==' ')
            blankcount++;
        else if(a=='\n')
            entercount++;
        a=b;
    }
    printf("%d %d",blankcount,entercount);
    return 0;
}
