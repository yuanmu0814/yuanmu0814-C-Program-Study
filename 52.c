#include <stdio.h>
#include <string.h>

int main()
{
    int blankcount = 0, entercount = 0;
    int i = 0, j = 0;
    char ch[60][60];

    fgets(ch[0], 60, stdin);
    while (ch[i][j] != '\n' && ch[i][j] != '\0')
    {
        if (ch[i][j] == ' ')
            blankcount++;
        j++;
    }

    i++;
    while (fgets(ch[i], 60, stdin) != NULL)
    {
        entercount++;
        j = 0;
        while (ch[i][j] != '\n' && ch[i][j] != '\0')
        {
            if (ch[i][j] == ' ')
                blankcount++;
            j++;
        }
        i++;
    }

    printf("%d %d", blankcount, entercount);
    return 0;
}
