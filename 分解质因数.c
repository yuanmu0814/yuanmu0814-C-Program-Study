#include <stdio.h>
int is_prime(int n)
{
    int back=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            back=-1;
            break;
        }
    }
    return back;
}
int main()
{
    int num;
    printf("������һ��������\n");
    scanf("%d",&num);
    int ori=num;
    for(int i=2;i<num;i++)//�Ӷ���ʼ�����Ѱ���Ƿ�Ϊ������
    {
        if(is_prime(i)==1)//�����Ƿ�Ϊ����
        {
           while(num%i==0)//ѭ���ж��Ƿ���Ա�����
           {
                printf("%d*",i);
                num=num/i;
           }
        }
    }
    if(num!=1)//������һλ
    {
        printf("%d\n",num);
    }
    //��ʵ���߼�����˵���ǿ��Բ��ü��������Ƿ�Ϊ�����ģ���֪��Ϊʲô��QAQ
    //��һ��д��
    num=ori;
    int i=2;//�Ӷ���ʼ�ж�
    while(i<num)
    {
        if(num%i==0)//�Ƿ��������
        {
            printf("%d*",i);
            num=num/i;
        }
        else
            i++;//�������������ȥ������һ����
    }
    printf("%d",num);//������һ����

    return 0;
}