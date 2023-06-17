#include <stdio.h>
int main()
{
    int num[100]={0},sum=0,temp[10]={0},g=0;
    char op[100]={'+'};
    for(int i=0;i<100;i++)
    {
        scanf("%d%c",&num[i],&op[i+1]);
        if(op[i+1]=='=')
            break;
    }
    for(int i=0,j=0;op[j]!='=';i++,j++)
    {
        switch(op[j])
        {
            case '+':
            {
                temp[g]=num[i];
                g++;
                break;
            }
            case '-':
            {
                temp[g]=0-num[i];
                g++;
                break;
            }
            case '*':
            {
                temp[g]=num[i-1]*num[i];
                temp[g-1]=0;
                g++;
                break;
            }
            case '/':
            {
                temp[g]=num[i-1]/num[i];
                temp[g-1]=0;
                g++;
                break;
            }
        }
    }
    for(int i=0;i<g;i++)
    {
        sum+=temp[i];
    }
    printf("%d",sum);
    return 0;
}