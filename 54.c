#include <stdio.h>

int main()
{
    int blankcount = 0, entercount = 0;
    char ch[60];

    while (gets(ch) !='\0')
    {
        entercount++;
        int j = 0;
        while (ch[j] != '\0')
        {
            if (ch[j] == ' ')
            {
                blankcount++;
            }
            j++;
        }
    }

    printf("%d %d", blankcount, entercount);
    return 0;
}
