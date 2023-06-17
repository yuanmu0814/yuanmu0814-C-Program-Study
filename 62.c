#include <stdio.h>
int strfun(char *s,char *t)
{
   int length=0,length1=0;
   for(int i=0;i<100;i++)
    {
        if(s[i]=='\0')
            break;
        length++;
    }
    for(int i=0;i<length;i++)
    {
        t[i]=s[i];
    }
    length1=length;
    for(int i=0;i<length1;i++)
    {

       if(s[i]=='c'&&s[i+1]=='h')
       {
         for(int j=i;j<length1-2;j++)
           {
               t[j]=t[j+2];
           }
           length-=2;
           t[length]='\0';
       }
    }
    if(length==length1)
    return 114514;
    else
    return length1-length;

}
int main()
{
    char ch[100]={'c'},*s=ch,temp[100]={'c'},*t=temp;
    int k=0;
    gets(s);
    printf("原字符串：");
    puts(s);
    k=strfun(s,t);
    printf("转变后：");
    puts(t);
    if(k==114514)
       printf("没有找到字母");
    else
       printf("删除%d",k);
}
