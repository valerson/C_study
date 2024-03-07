// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct
// {
//     char *a;           // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
//     unsigned int n;    // наибольшая степень десяти
//     unsigned int size; // размер выделенной динамической памяти в а
// } Decimal;

// void input_number(char *massive[]);
// // void elong_add(const Decimal *a, const Decimal *b, Decimal *res);
// void elong_set_int(Decimal *a, char m[]);
// void elong_destroy(Decimal *a);

// int main(void)
// {
//     // Decimal a;
//     //  Decimal b;
//     //      Decimal res;

//     char *num1;
//     char *num2;
//     input_number(&num1);
//     input_number(&num2);
//     // elong_set_int(&a, num1);
//     //  elong_set_int(&b, num2);

//     printf("num 1= %s\n", num1);
//     printf("num 2= %s\n", num2);
//     free(num1); // освобождаем память введенного массива для первого числа
//     free(num2); // освобождаем память введенного массива для второго числа

//     // elong_destroy(&a);
//     //  elong_destroy(&b);

//     return 0;
// }

// void input_number(char *massive[])
// {
//     char *m = malloc(1 * sizeof(char));
//     int i = 0;
//     if (m == NULL)
//     {
//         printf("Memory allocation error\n");
//         return;
//     }

//     while (1)
//     {
//         if (scanf("%c", &m[i]) != 1)
//             break;
//         i += 1;
//         m = realloc(m, (1 + i) * sizeof(char)); // 1-потому что сначала выделили память для 1
//     }
//     m[i] = '\0'; // фигачим символ конца строки -1 - потому что в конце вводимого массива что-то есть (иначе количество символов большое)
//     *massive = m;

//     // free(m); //тут не освобождаем. указатель m перевели на massive. после фнукции фри нужно сделать
// }

// // функция получения числа из ввода и его записи в структуру децимал
// void elong_set_int(Decimal *a, char m[])
// {
//     a->a = malloc((strlen(m) + 1) * sizeof(char)); // выделяем память для массива в структуре
//     // printf("massiv m = %s", m);
//     strcpy(a->a, m);
//     a->n = strlen(m) - 1; //-1 потому что я добавлял символ '\0'
//     a->size = a->n * sizeof(char);

//     printf("n= %u\n", a->n);
//     printf("massive = %s\n", a->a);
// }

// // // функция выполняющяя сложение двух чисел
// // void elong_add(const Decimal *a, const Decimal *b, Decimal *res)
// // {
// // }

// // функция
// void elong_destroy(Decimal *a)
// {
//     free(a->a); // освобождаем память из массива в структуре
// }

// ЗАДАЧА СТРЕМНАЯ!
//  #include <stdio.h>
//  #include <stdlib.h>
//  #include <string.h>

// typedef struct
// {
//     char *a;           // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
//     unsigned int n;    // наибольшая степень десяти
//     unsigned int size; // размер выделенной динамической памяти в а
// } Decimal;

// void input_number(char **massive, int count);
// void elong_set_int(Decimal *a, char num[]);
// void elong_add(const Decimal *a, const Decimal *b, Decimal *res);
// void elong_print(const Decimal *res);
// void elong_destroy(const Decimal *a);

// int main(void)
// {
//     Decimal a;
//     Decimal b;
//     Decimal res;

//     // запоолняем 2 массива цифр для 2 чисел
//     char *num[2]; // массив указателей на строку 1 и 2
//     input_number(num, 2);

//     elong_set_int(&a, num[0]);
//     elong_set_int(&b, num[1]);

//     elong_add(&a, &b, &res);
//     elong_print(&res);

//     free(num[0]); // освобождаем память введенного массива для первого числа
//     free(num[1]); // освобождаем память введенного массива для второго числа

//     elong_destroy(&a);   // освобождаем память введенного массива для первого числа структуры
//     elong_destroy(&b);   // освобождаем память введенного массива для первого числа структуры
//     elong_destroy(&res); // освобождаем память итогового массива
//     return 0;
// }

// void input_number(char **massive, int count)
// {
//     for (int j = 0; j < count; j += 1)
//     {
//         char *m = malloc(1 * sizeof(char));
//         int i = 0;

//         while (1)
//         {
//             if (scanf("%c", &m[i]) != 1 || m[i] == '\n')
//                 break;
//             i += 1;
//             m = realloc(m, (1 + i) * sizeof(char)); // 1-потому что сначала выделили память для 1
//         }
//         m[i] = '\0'; // фигачим символ конца строки -1 - потому что в конце вводимого массива что-то есть (иначе количество символов большое)
//         massive[j] = m;
//     }
// }

// void elong_set_int(Decimal *a, char num[])
// {
//     unsigned int n = strlen(num);
//     a->a = malloc((n + 1) * sizeof(char)); // 1 на конец строки дополнительно выделить '\0'
//     strcpy(a->a, num);
//     a->n = n;
//     a->size = (n + 1) * sizeof(char);
// }

// void elong_add(const Decimal *a, const Decimal *b, Decimal *res)
// {
//     Decimal x;
//     Decimal y;
//     Decimal result;
//     int count_n, count_m;
//     if (a->size >= b->size)
//     {
//         x.a = a->a;
//         y.a = b->a;
//         x.size = a->size;
//         y.size = b->size;
//         count_n = a->n - 1;
//         count_m = b->n - 1;
//     }
//     else
//     {
//         x.a = b->a;
//         y.a = a->a;
//         x.size = b->size;
//         y.size = a->size;
//         count_n = b->n - 1;
//         count_m = a->n - 1;
//     }

//     // printf("%s\n%s\n count n = %d\n count m = %d\n", x.a, y.a, count_n, count_m);

//     result.a = malloc(x.size + 1 * sizeof(char));
//     int remains = 0;
//     for (int i = count_n - 1, k = 0; i >= 0; i -= 1, k += 1)
//     {
//         // printf("x.a[%d] = %c\n", i, x.a[i]);
//         if (count_m >= 0)
//         {
//             // printf("y.a[%d] = %c\n", count_m, y.a[count_m]);

//             if ((y.a[count_m] - '0' + x.a[i] - '0' + remains) >= 10)
//             {
//                 result.a[k] = (y.a[count_m] - '0' + x.a[i] - '0' + remains) % 10;
//                 remains = 1;
//             }
//             else
//             {
//                 result.a[k] = y.a[count_m] - '0' + x.a[i] - '0' + remains;
//                 remains = 0;
//             }
//             count_m -= 1;
//         }

//         else
//         {
//             if ((x.a[i] + remains) >= 10)
//             {
//                 if (i != 0)
//                 {
//                     result.a[k] = (x.a[i] - '0' + remains) % 10;
//                     remains = 1;
//                 }
//                 else
//                 {
//                     result.a[k] = (x.a[i] - '0' + remains) % 10;
//                     remains = 1;
//                 }
//             }
//             else
//             {
//                 result.a[k] = x.a[i] - '0' + remains;
//                 remains = 0;
//             }
//         }
//         result.n = k;
//     }

//     if (remains == 1)
//     {
//         result.a[result.n + 1] = 1;
//         result.n += 1;
//     }

//     res->a = result.a;
//     result.size = (result.n + 1) * sizeof(char);
//     res->n = result.n;
//     res->size = result.size;
// }

// void elong_print(const Decimal *res)
// {
//     int n = (int)res->n;
//     for (int i = n; i >= 0; i -= 1)
//     {
//         printf("%d", res->a[i]);
//     }
// }

// void elong_destroy(const Decimal *a)
// {
//     free(a->a);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *a;           // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;    // наибольшая степень десяти
    unsigned int size; // размер выделенной динамической памяти в а
} Decimal;

void input_number(char **massive, int count);
void str_to_num(char *num, int *number);
void elong_set_int(Decimal *a, int *num, int n);
void elong_add(const Decimal *a, const Decimal *b, Decimal *res);
void elong_print(const Decimal *res);
void elong_destroy(const Decimal *a);

int main(void)
{
    Decimal a;
    Decimal b;
    Decimal res;

    // запоолняем 2 массива чисел (НЕ !!! цифр) для 2 чисел
    char *num[2]; // массив указателей на строку 1 и 2
    input_number(num, 2);
    int n = strlen(num[0]) - 1;
    int number1[n];
    // printf("n= %d\n", n);
    int m = strlen(num[1]);
    // printf("m= %d\n", m);
    int number2[m];
    str_to_num(num[0], number1);
    str_to_num(num[1], number2);

    elong_set_int(&a, number1, n);
    elong_set_int(&b, number2, m);

    elong_add(&a, &b, &res);
    elong_print(&res);

    free(num[0]); // освобождаем память введенного массива для первого числа
    free(num[1]); // освобождаем память введенного массива для второго числа

    elong_destroy(&a);   // освобождаем память введенного массива для первого числа структуры
    elong_destroy(&b);   // освобождаем память введенного массива для первого числа структуры
    elong_destroy(&res); // освобождаем память итогового массива
    return 0;
}

void input_number(char **massive, int count)
{
    for (int j = 0; j < count; j += 1)
    {
        char *m = malloc(1 * sizeof(char));
        int i = 0;

        while (1)
        {
            if (scanf("%c", &m[i]) != 1 || m[i] == '\n')
                break;
            i += 1;
            m = realloc(m, (1 + i) * sizeof(char)); // 1-потому что сначала выделили память для 1
        }
        m[i] = '\0'; // фигачим символ конца строки -1 - потому что в конце вводимого массива что-то есть (иначе количество символов большое)
        massive[j] = m;
    }
}

void str_to_num(char *num, int *number)
{
    int n = strlen(num);
    for (int i = 0; i < n; i += 1)
    {
        if (num[i] == 13) // 13 - символ конца строки CR по ASCII
        {
            break;
        }
        number[i] = num[i] - '0';
        // printf("numbber[%d]= %d\n", i, number[i]);
    }
}

void elong_set_int(Decimal *a, int *num, int n)
{

    a->a = malloc((n + 1) * sizeof(int)); // 1 на конец строки дополнительно выделить '\0'

    //  копируем их в строку
    for (int i = 0; i < n; i++)
    {
        a->a[i] = num[i];
    }
    // a->a[n] = '\0'; // Устанавливаем завершающий символ строки
    //  strcpy(a->a, num);

    a->n = n;
    a->size = (n + 1) * sizeof(int);
}

void elong_add(const Decimal *a, const Decimal *b, Decimal *res)
{
    Decimal x;
    Decimal y;
    Decimal result;
    int count_n, count_m;
    if (a->size >= b->size)
    {
        x.a = a->a;
        y.a = b->a;
        x.size = a->size;
        y.size = b->size;
        count_n = a->n - 1;
        count_m = b->n - 1;
    }
    else
    {
        x.a = b->a;
        y.a = a->a;
        x.size = b->size;
        y.size = a->size;
        count_n = b->n - 1;
        count_m = a->n - 1;
    }

    // printf("%s\n%s\n count n = %d\n count m = %d\n", x.a, y.a, count_n, count_m);

    result.a = malloc(x.size + 1 * sizeof(char));
    int remains = 0;
    for (int i = count_n, k = 0; i >= 0; i -= 1, k += 1)
    {
        // printf("x.a[%d] = %d\n", i, x.a[i]);
        if (count_m >= 0)
        {
            // printf("y.a[%d] = %d\n", count_m, y.a[count_m]);

            if ((y.a[count_m] + x.a[i] + remains) >= 10)
            {
                result.a[k] = (y.a[count_m] + x.a[i] + remains) % 10;
                remains = 1;
            }
            else
            {
                result.a[k] = y.a[count_m] + x.a[i] + remains;
                remains = 0;
            }
            count_m -= 1;
        }

        else
        {
            if ((x.a[i] + remains) >= 10)
            {
                if (i != 0)
                {
                    result.a[k] = (x.a[i] + remains) % 10;
                    remains = 1;
                }
                else
                {
                    result.a[k] = (x.a[i] + remains) % 10;
                    remains = 1;
                }
            }
            else
            {
                result.a[k] = x.a[i] + remains;
                remains = 0;
            }
        }
        result.n = k;
    }

    if (remains == 1)
    {
        result.a[result.n + 1] = 1;
        result.n += 1;
    }

    res->a = result.a;
    result.size = (result.n + 1) * sizeof(char);
    res->n = result.n;
    res->size = result.size;
}

void elong_print(const Decimal *res)
{
    int n = (int)res->n;
    for (int i = n; i >= 0; i -= 1)
    {
        printf("%d", res->a[i]);
    }
}

void elong_destroy(const Decimal *a)
{
    free(a->a);
}

// void elong_print(Decimal x)
// {
//     int n = x.n;

//     for (int i = n; i >= 0; i -= 1)
//     {
//         printf("%d", x.a[i]);
//     }
//     printf("\n");
// }