#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct
{
    char *dig; // ������ ��� �������� �����:
               // a[0] * 100^0 + a[1] * 100^1 + .. + a[n - 1] * 100^(n-1)
    int n;     // ������ ����� � ��������
    char sign; // ���� �����
} LongN;

LongN getLongN(char *s);

int main(void)
{
    return 0;
}

LongN getLongN(char *s)
{
    LongN *result = malloc(sizeof(LongN)); // ������ ��� ��������� ������
    result->sign = malloc(sizeof(char));   // ������ ��� �����
    result->n = malloc(sizeof(int));       // ������ ��� ���������� ��������
    int n;
    if (isdigit(s[0]))
    {
        result->sign = '+';
        n = strlen(s);
        result->n = n / 2;
        result->dig = malloc(n * sizeof(int)); // ������ ��� ������� ����. �������, ���� �� �� n*sizeof(char), �� ���� ����� ��� �����
    }
    else
    {
        result->sign = '-';
        n = strlen(s) - 1;
        result->n = n / 2 + 1;
        result->dig = malloc(n * sizeof(int)); // ������ ��� ������� ����. �������, ���� �� �� n*sizeof(char), �� ���� ����� ��� �����
    }
    // ������� �� ���� �����
    // printf("n= %d\n", n);
    // printf("znak= %c\n", result->sign);
    // printf("kol-vo razr= %d\n", result->n);

    int temp;
    int i = n, j = 0;

    while (i >= 1)
    {
        // printf("i=%d\n", i);
        if (i - 1 >= 0 && isdigit(s[i - 1]))
        {
            // printf("one\n");
            temp = (s[i] - '0') * 1 + (s[i - 1] - '0') * 10;
            // printf("temp = %d\n", temp);
        }
        else
        {
            // printf("two\n");
            temp = (s[i] - '0') * 1;
            // printf("temp = %d\n", temp);
        }
        result->dig[j] = temp;
        j += 1;
        i -= 2;
    }

    /*for (int i = result->n-1; i >= 0; i -= 1)
    {
        printf("result.dig[%d] = %d\n", i, result->dig[i]);
    }*/
    return *result;
}

LongN getLongN(char *s)
{
    LongN result; // ������� ��������� ��������
    int n;
    if (isdigit(s[0]))
    {
        result.sign = '+';
        n = strlen(s);
        result.n = n / 2;
    }
    else
    {
        result.sign = '-';
        n = strlen(s) - 1;
        result.n = n / 2 + 1;
    }

    result.dig = malloc(result.n * sizeof(char)); // �������� ������ ��� ������� ����

    int temp;
    int i = n, j = 0;

    while (i >= 1)
    {
        if (i - 1 >= 0 && isdigit(s[i - 1]))
        {
            temp = (s[i] - '0') * 1 + (s[i - 1] - '0') * 10;
        }
        else
        {
            temp = (s[i] - '0') * 1;
        }
        result.dig[j] = temp;
        j += 1;
        i -= 2;
    }

    return result; // ���������� ��������� ��������
}