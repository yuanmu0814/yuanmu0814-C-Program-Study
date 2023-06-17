#include <stdio.h>
int main()
{
    int i,result,num;
    char yunsuanfu='+';
    scanf("%d",&result);
    while(yunsuanfu != '=')
    {
        scanf("%c%d",&yunsuanfu,&num);
        switch(yunsuanfu)
        {
        case '+':
            result+=num;
            break;
        case '-':
            result-=num;
            break;
        case '*':
            result*=num;
            break;
        case '/':
            result/=num;
            break;
        }
    }
    printf("%d",result);
    return 0;
}
