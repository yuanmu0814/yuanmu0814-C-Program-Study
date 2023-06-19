#include <stdio.h>
int main()
{
    char a;
    a=getchar();//读入一个字符
    if(a>='a'&&a<='z')//如果输入的是小写字母，也就是这个字符的ASCII码值介于a，z的ASCII码值之间    
    {
        a=a+('A'-'a');//大写字母和小写字母的差值的计算方法
        printf("%c",a);
    }
    else if(a>='A'&&a<='Z')//同理，如果输入的是大写字母
    {
        a=a+('a'-'A');
        printf("%c",a);
    }
    else
        printf("输入的不是字母");
    return 0;
}
