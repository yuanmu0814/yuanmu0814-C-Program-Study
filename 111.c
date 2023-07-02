#include <stdio.h>
int is_same(char *id_1, char *id_2)
{
    for(int i=0;i<6;i++)
        if(id_1[i]!=id_2[i])
            return -1;
    return 1;
}
int main()
{
    char id_1[32],id_2[32];
    gets(id_1);
    gets(id_2);
    printf("%s",(is_same(id_1,id_2)==1)?"Yes":"No");
}
