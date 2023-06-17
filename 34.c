#include <stdio.h>
int main()
{
    float input,check;
    int output,temp;
    scanf("%f",&input);
    temp=input;
    check=input-temp;
    if(check<0.5)
    {
        output=input;
    }
    if(check>=0.5)
    {
        output=input+1;
    }
    printf("%d",output);
    return 0;
}
