#include<stdio.h>
int main()
{
    char a[30]={'c'},c[30]={'c'};
    gets(a);
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(int i=m,j=n+m;j<30;i++,j++)
    {
        if(a[j]=='\0')
            break;
        c[i]=a[j];
    }
    puts(c);
    return 0;
}


