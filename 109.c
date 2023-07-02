#include <stdio.h>
int birth(char *id, char *birthday)
{
    int year_of_birth=0;
    for(int i=0,j=6;j<=13;i++,j++)
    {
        birthday[i]=id[j];
        if(i<4)
        {
            year_of_birth*=10;
            year_of_birth+=birthday[i]-'0';
        }
    }
    return ((year_of_birth%4==0&&year_of_birth%100!=0)||year_of_birth%400==0)?1:-1;
}
int main()
{
    char id[32],birthday[9];
    printf("请输入身份证号码\n");
    gets(id);
    int flag=birth(id,birthday);
    for(int i=0;i<8;i++)
        printf("%d",birthday[i]-'0');
    printf("\n%s",(flag==1)?"yes":"no");
}
