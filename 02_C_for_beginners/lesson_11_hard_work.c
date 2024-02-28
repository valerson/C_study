// BreadsPandS Ѕусики
#include <stdio.h>
#include <string.h>

// проверка на одинаковость букв в строке
int check_one(char s[]);

// проверка на одинаковость букв в строке
int check_repeat(char s[], int pmax);

// нахождение максимальной длины повтор€ющихс€ элементов
int find_pmax(char s[]);

int main(void)
{
    char s[1000];
    fgets(s, 1000, stdin);
    int n = strlen(s);
    // printf("\n enter word %s", s);
    // printf("%d\n", n);

    int pmax = find_pmax(s) + 1;
    // int pmax = n;
    // printf("pmax = %d\n", pmax);
    int res = check_repeat(s, pmax);
    if (res == n)
    {
        // printf("result= ");
        printf("NO");
    }
    else
    {
        // printf("result= ");
        for (int i = 0; i <= res; i += 1)
            printf("%c", s[i]);
    }

    return 0;
}

int check_one(char s[])
{
    int n = strlen(s);
    for (int i = 0; i < n; i += 1)
    {
        if (s[0] != s[i])
            return 0;
    }
    return 1;
}

int find_pmax(char s[])
{
    int n = strlen(s);
    for (int i = n / 2; i > 0; i -= 1)
    {
        if (n % i == 0)
            return i;
    }
}

int check_repeat(char s[], int pmax)
{
    int count = 0;
    int result = strlen(s);
    for (int j = pmax; j >= 0; j -= 1)
    {
        // printf("count = %d", count);
        for (int i = 0; i < pmax; i += 1)
        {
            if (s[i] == s[j + 1 + i])
            {
                // printf("find!!! i = %d, j = %d\n", i, j);
                count += 1;
            }
            else
                break;
        }
        // printf("count = %d\n", count);
        if (count == pmax / 2 && result > j)
        {
            result = j;
        }
        count = 0;
    }
    // printf("-------------------------------------!!! j = %d\n", result);
    if (result != strlen(s))
        return result;
    else
        return strlen(s);
}

// Maya „исла ћай€
