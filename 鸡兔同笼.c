#include <stdio.h>
#include <stdlib.h>

int fun(int n, int m); // ��������

int n1, n2; // ȫ�ֱ��������漦���õ�����

int main()
{
    int m, n, f;
    printf("��������ֻ����������\n");
    scanf("%d%d", &n, &m); // ����n��m��ֵ���ֱ��ʾ��������������

    f = fun(n, m); // ����fun�������㼦���õ�����

    if (f == -1)
        printf("No answer"); // �������ֵΪ-1�����"No answer"
    else
        printf("%dֻ����%dֻ��\n", n1, n2); // ��������õ�����

    return 0;
}

int fun(int n, int m)
{
    for (int i = 0; i <= n; i++)
    {
        if ((i * 4 + (n - i) * 2) == m) // �жϼ����õ��������Ƿ����m
        {
            n2 = i; // n2�����õ�����
            n1 = n - i; // n1���漦������
            return 0; // ����0��ʾ�ҵ��˼����õ�����
        }
    }

    return -1; // ����-1��ʾû���ҵ����ʵļ����õ�����
}
