#include <stdio.h>
long factorial(int n)
{
    long back=1;
    for(int i=1;i<=n;i++)
    {
        back=back*i;
    }
    return back;
}
int main()
{
    int num;
    printf("��������Ҫ����׳˵���\n");
    scanf("%d",&num);
    if (num < 0)
    {
        printf("������Ч��������һ���Ǹ�������\n");
    }
    else
    {
        printf("%ld\n", factorial(num));
    }
    return 0;
}