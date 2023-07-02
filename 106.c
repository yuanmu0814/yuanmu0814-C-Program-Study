#include <stdio.h>
#include <string.h>
void sort(char *str)
{
    int length=strlen(str);
    for(int i=0;i<length;i++)
        for(int j=0;j<length-i-1;j++)
            if(str[j]>str[j+1])
            {
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
}
int examine(char *str_1, char *str_2)
{
    int length_1=strlen(str_1),length_2=strlen(str_2);
    if(length_1!=length_2)
        return 0;
    for(int i=0;i<length_1;i++)
        if(str_1[i]!=str_2[i])
            return 0;
    return 1;
}
void output(char *str)
{
    int length=strlen(str),count=1;
    for(int i=0;i<length;i++)
    {
        if(str[i]==str[i+1])
            count++;
        else
        {
            printf("%c %d\n",str[i],count);
            count=1;
        }
    }
}
int main()
{
    char str_1[20],str_2[20];
    gets(str_1);
    gets(str_2);
    sort(str_1),sort(str_2);
    printf("%d\n",examine(str_1,str_2));
    output(str_1);
}
