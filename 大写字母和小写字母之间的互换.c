#include <stdio.h>
int main()
{
    char a;
    a=getchar();//����һ���ַ�
    if(a>='a'&&a<='z')//����������Сд��ĸ��Ҳ��������ַ���ASCII��ֵ����a��z��ASCII��ֵ֮��    
    {
        a=a+('A'-'a');//��д��ĸ��Сд��ĸ�Ĳ�ֵ�ļ��㷽��
        printf("%c",a);
    }
    else if(a>='A'&&a<='Z')//ͬ�����������Ǵ�д��ĸ
    {
        a=a+('a'-'A');
        printf("%c",a);
    }
    else
        printf("����Ĳ�����ĸ");
    return 0;
}
