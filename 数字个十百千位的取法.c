#include <stdio.h>
int main()
{
    int num,ge,shi,bai,qian;
    scanf("%d",&num);
    /*思考如何去个十百千位呢，可以考虑到个是一个数除以10以后的余数；
    得到个位后，把这个数除以10，利用int型特性，将只保留整数，所以可以做到完整的将一个数去掉末尾，
    再重复得到个位的操作即可；百位千位类似*/
    //个位的取法：
    ge=num%10;
    shi=num/10%10;
    bai=num/100%10;
    qian=num/1000%10;
    printf("%d %d %d %d\n",ge,shi,bai,qian);
    /*这个过程也可以使用循环来实现，终止条件应为这个数为0*/
    while(num!=0)
    {
        printf("%d ",num%10);
        num=num/10;
    }
    return 0;
}