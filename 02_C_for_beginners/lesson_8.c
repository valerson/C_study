// #include <stdio.h>

// #define N 10

// int main()
// {
//     int a[N];             // коробка с €чейками
//     int i, k, n, res = 0; // номер текущей €чейки

//     for (i = 0; i < N; i++)
//     {                       // номера €чеек мен€ютс€
//         scanf("%d", &a[i]); // получить число шариков в €чейке с номером i
//     }
//     scanf("%d%d", &k, &n);
//     // »щем все €чейки, в которых числа < 0
//     for (i = k; i < n; i++)
//     {                // перебираем все €чейки
//         res += a[i]; // если число в €чейке a[i] подходит
//     }
//     printf("%d ", res);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n, temp;
//     scanf("%d", &n);
//     int *a = malloc(n * sizeof(int));
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &temp);
//         a[i] = temp;
//     }
//     for (int i = 0; i < n; i += 1)
//     {
//         if (a[i] % 2 == 0)
//             printf("%d ", a[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < n; i += 1)
//     {
//         if (a[i] % 2 != 0)
//             printf("%d ", a[i]);
//     }
//     free(a);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int *massive = malloc(n * sizeof(int));
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &massive[i]);
//     }

//     for (int i = n; i >= 0; i -= 1)
//     {
//         // printf("%d", i);
//         printf("%d ", massive[i]);
//     }
//     free(massive);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n, k;
//     scanf("%d", &n);
//     int *massive = malloc(n * sizeof(int));
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &massive[i]);
//     }
//     scanf("%d", &k);
//     for (int i = 0; i < n; i += 1)
//     {
//         if (massive[i] == k)
//         {
//             printf("%d", i);
//             break;
//         }
//     }
//     free(massive);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n, k, flag = 0;
//     scanf("%d", &n);
//     int *massive = malloc(n * sizeof(int));
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &massive[i]);
//     }
//     scanf("%d", &k);
//     for (int i = 0; i < n; i += 1)
//     {
//         if (massive[i] == k)
//         {
//             printf("%d", i);
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//         printf("-1");
//     free(massive);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int *massive_a = malloc(n * sizeof(int));
//     int *massive_b = malloc(n * sizeof(int));
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &massive_a[i]);
//     }
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &massive_b[i]);
//         printf("%d ", massive_a[i] + massive_b[i]);
//     }
//     free(massive_a);
//     free(massive_b);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n, res = 0;
//     scanf("%d", &n);
//     int *m_a = malloc(n * sizeof(int));
//     int *m_b = malloc(n * sizeof(int));
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &m_a[i]);
//     }
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &m_b[i]);
//         res += m_a[i] * m_b[i];
//     }
//     printf("%d", res);
//     free(m_a);
//     free(m_b);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int n, temp, m[10] = {0};
//     scanf("%d", &n);
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &temp);
//         m[temp] += 1;
//     }
//     for (int i = 0; i <= 9; i += 1)
//     {
//         printf("%d %d\n", i, m[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// void func_fun(int *m, int n);
// int main(void)
// {
//     int n, temp;
//     scanf("%d", &n);
//     int *m = malloc(n * sizeof(int));
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &temp);
//         m[i] = temp;
//     }
//     func_fun(m, n);
//     for (int i = 0; i < n; i += 1)
//     {
//         printf("%d ", m[i]);
//     }
//     return 0;
// }

// void func_fun(int *m, int n)
// {
//     for (int i = 0; i < n; i += 1)
//     {
//         m[i] *= 2;
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// void give_out_money(int *m, int *res, int summ);
// void print_result(int *a, int *b);
// int main(void)
// {
//     int x;
//     scanf("%d", &x);
//     int mon[9] = {1, 2, 5, 10, 50, 100, 500, 1000, 5000};
//     int res[9] = {0};
//     int *money = mon;
//     int *result = res;
//     give_out_money(money, result, x);
//     print_result(money, result);
//     return 0;
// }
// void give_out_money(int *m, int *res, int summ)
// {
//     for (int i = 8; i >= 0; i -= 1)
//     {
//         if (summ - m[i] >= 0)
//         {
//             while (summ - m[i] >= 0)
//             {
//                 summ -= m[i];
//                 res[i] += 1;
//             }
//         }
//     }
// }
// void print_result(int *a, int *b)
// {
//     for (int i = 8; i >= 0; i -= 1)
//     {
//         printf("%d %d\n", a[i], b[i]);
//     }
// }

// // R_kupetc "—праведливый" купец
// #include <stdio.h>
// #include <stdlib.h>

// int avarage(int *m, int n);

// int money_avarage(int *m, int n);

// int funk_flag(int *m, int n);

// int main(void)
// {
//     int n, temp, result = 0, flag = 0;
//     scanf("%d", &n);
//     int *money = malloc(n * sizeof(int));
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &money[i]);
//     }

//     result += money_avarage(money, n);

//     // for (int i = 0; i < n; i += 1)
//     //     printf("%d ", money[i]);
//     // printf("\n");

//     while (flag == 0)
//     {
//         result += money_avarage(money, n);
//         flag = funk_flag(money, n);
//     }
//     printf("%d %d", result, avarage(money, n));

//     free(money);
//     return 0;
// }

// // вычисление среднего арифметического значени€ элементов в массиве
// int avarage(int *m, int n)
// {
//     int avarage, summ = 0;
//     for (int i = 0; i < n; i += 1)
//         summ += m[i];
//     avarage = summ / n;
//     return avarage;
// }

// // уравнивание элементов в массиве
// int money_avarage(int *m, int n)
// {
//     int result = 0;
//     int temp;
//     for (int i = 1; i <= n; i += 1)
//     {
//         if ((m[i - 1] + m[i % n]) % 2 == 0)
//         {
//             temp = (m[i - 1] + m[i % n]) / 2;
//             m[i - 1] = temp;
//             m[i % n] = temp;
//         }
//         else
//         {
//             result += 1;
//             temp = (m[i - 1] + m[i % n] - 1) / 2;
//             m[i - 1] = temp;
//             m[i % n] = temp;
//         }
//     }
//     return result;
// }

// // сравнение каждого элемента массива и среднего
// int funk_flag(int *m, int n)
// {
//     int flag = 1;
//     for (int i = 0; i < n; i += 1)
//     {
//         if (m[i] != avarage(m, n))
//         {
//             flag = 0;
//             break;
//         }
//     }
//     return flag;
// }

// // Ќ≈ –≈Ў»Ћ!!!
// #include <stdio.h>
// #include <stdlib.h>

// int number_in_massive(int *massive, int x, int *ptemp);

// void print_it(int *m, int a, int b);

// int main(void)
// {
//     int a, b, flag = 0, i = 0, j = 0;
//     scanf("%d%d", &a, &b);
//     int *massive = malloc(100 * sizeof(int));
//     int *remains = malloc(100 * sizeof(int));
//     int temp = 0;
//     int *ptemp = &temp;
//     while (flag != 1)
//     {
//         massive[i] = a / b;

//         if (number_in_massive(remains, 10 * (a % b), ptemp) == 0)
//         {
//             a = 10 * (a % b); // остаток * 10  !!!
//             remains[j] = a;
//             j += 1;
//         }
//         // тут остаток уже был (начало нового периода)
//         else
//         {
//             printf("period start index = %d\n", temp);
//             flag = 1;
//             break;
//         }
//         i += 1;
//     }

//     // for (int i = 0; i < j + 1; i += 1)
//     //     printf("%d ", massive[i]);
//     // printf("\n");

//     printf("%d,", massive[0]);
//     if (temp > 0)
//     {
//         print_it(massive, 1, temp + 1); // печать без периода
//         printf("(");
//         print_it(massive, temp + 1, j + 1); // печать периода
//         printf(")");
//     }
//     else
//     {
//         printf("(");
//         print_it(massive, temp + 1, j + 1); // печать периода
//         printf(")");
//     }

//     return 0;
// }

// int number_in_massive(int *massive, int x, int *ptemp)
// {
//     for (int i = 0; i < 100; i += 1)
//     {
//         if (massive[i] == x)
//         {
//             *ptemp = i;
//             return 1;
//         }
//     }

//     return 0;
// }

// void print_it(int *m, int a, int b)
// {
//     for (int i = a; i < b; i += 1)
//         printf("%d", m[i]);
// }

// R_arr_pascal “реугольник ѕаскал€
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     n = n + 1;
//     // не нравитс€ степику иначе
//     long long matrix[66][66];

//     // int **matrix = malloc(n * sizeof(int *));

//     // // заполн€ем квадратную матрицу n*n единицами
//     // for (int i = 0; i < n; i += 1)
//     // {
//     //     matrix[i] = malloc(n * sizeof(int));
//     //     for (int j = 0; j < n; j += 1)
//     //     {
//     //         matrix[i][j] = 1;
//     //     }
//     // }

//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             matrix[i][j] = 1;
//         }
//     }

//     for (int i = 2; i < n; i += 1)
//     {
//         for (int j = 1; j < i; j += 1)
//         {
//             matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
//         }
//     }

//     // // печать всей матрицы более-менее красивое
//     // for (int i = 0; i < n; i += 1)
//     // {
//     //     for (int j = 0; j < i + 1; j += 1)
//     //     {
//     //         printf("%d ", matrix[i][j]);
//     //     }
//     //     printf("\n");
//     // }

//     for (int i = 0; i < n; i += 1)
//     {
//         printf("%lld ", matrix[n - 1][i]);
//     }

//     // free(matrix);
//     return 0;
// }

// // int factorial(int x)
// // {
// //     int result = 1;
// //     for (int i = 1; i <= x; i += 1)
// //     {
// //         result *= i;
// //     }
// //     return result;
// // }

// R_arr_4 –ешето Ёратосфена
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     // printf("%d", 1300000/2);
//     int number[325000];
//     int i = 4, n;
//     scanf("%d", &n);
//     // number[0] = 2;
//     // number[1] = 3;
//     // number[2] = 5;
//     // number[3] = 7;
//     int *massive = malloc(n * sizeof(int));
//     for (int i = 0; i < n; i += 1)
//         scanf("%d", &massive[i]);
//     for (int i = 0; i < n; i += 1)
//         if (massive[i] % 2 != 0 && massive[i] % 3 != 0 && massive[i] % 5 != 0 && massive[i] % 7 != 0)
//             printf("%d ", massive[i]);

//     // for (int j = 2; j <= 1300000; j += 1)
//     // {
//     //     // printf("i= %d\n", i);
//     //     if (j % 2 != 0 && j % 3 != 0 && j % 5 != 0 && j % 7 != 0)
//     //     {
//     //         // printf("prostoe\n");
//     //         number[i] = j;
//     //         i += 1;
//     //     }
//     // }
//     // // printf("%d ", i);
//     // for (int k = 0; k < i; k += 1)
//     // {
//     //     printf("%d ", number[k]);
//     // }
//     free(massive);
//     return 0;
// }

// arr_log_uniq —колько разных покупателей
// #include <stdio.h>
// int main(void)
// {
//     int n, id, result = 0, id_max = 0;
//     scanf("%d", &n);
//     int byers[1000] = {0};
//     long long timestamp, recept_id;
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%lld%d%lld", &timestamp, &id, &recept_id);
//         byers[id] += 1;
//         if (id > id_max)
//             id_max = id;
//     }

//     for (int i = 0; i <= id_max; i += 1)
//     {
//         if (byers[i] != 0)
//             result += 1;
//     }
//     printf("%d", result);
//     return 0;
// }

// #include <stdio.h>
// struct Card
// {
//     char rank; // достоинство
//     /* ћасть (suit):
//     c - clubs, трефы, ?
//     s - spades, пики, ??
//     h - hearts, червы, ??
//     d - diamond, бубны, ??*/

//     char suit; // масть
//     /* ƒостоинство (rank):
//     '2', '3', '4', '5', '6', '7', '8', '9' - от 2 до 9
//     'T' (ten - дес€ть),
//     '  J' (валет),
//     'Q' (дама),
//     'K' (король),
//     'A' (туз). */
// };

// int check(struct Card *hand);

// int main(void)
// {

//     // struct Card karta;
//     int count = 0;
//     struct Card massive[52]; // потому что карты всего 52+1
//     char suit_card, rank_card;
//     for (int i = 0; i < 52; i += 1)
//     {
//         scanf("%c%c", &massive[i].rank, massive[i].suit);
//         if (massive[i].rank == 'Q' && massive[i].suit == 's')
//             count += 1;
//         if (massive[i].rank == '\n' && massive[i].rank == EOF)
//             break;
//     }
//     printf("%d", count);

//     return 0;
// }

// int check(struct Card *hand)
// {
//     struct Card *p;
//     int count = 0;
//     for (p = hand; p->rank != 0; p += 1)
//     {
//         if (p->rank == 'Q' && p->suit == 's')
//             count += 1;
//     }
//     return count;
// }

// #include <stdio.h>
// #include <math.h>
// #define N 100
// typedef struct
// {
//     char a[N];      // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
//     unsigned int n; // наибольша€ степень дес€ти
// } Decimal;

// void elong_print(Decimal x);

// int main(void)
// {
//     // int x, i = 0, n = 1;
//     // Decimal number;
//     // scanf("%d", &x);
//     // number.a[i] = x;
//     // while (x != EOF && x != '\n')
//     // {
//     //     scanf("%d", &x);
//     //     i += 1;
//     //     n += 1;
//     //     number.a[i] = x;
//     // }
//     // number.n = n;
//     Decimal x = {{7, 4, 1}, 2}; // число 147
//     Decimal zero = {{0}, 0};

//     elong_print(x);    // 147
//     elong_print(zero); // 0

//     return 0;
// }

// void elong_print(Decimal x)
// {
//     int n = x.n;

//     for (int i = n; i >= 0; i -= 1)
//     {
//         printf("%d", x.a[i]);
//     }
//     printf("\n");
// }

// elong_add —ложение больших чисел
#include <stdio.h>

#define N 100
typedef struct
{
    char a[N];      // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n; // наибольша€ степень дес€ти
} Decimal;

void elong_print(Decimal x);

Decimal add(Decimal x, Decimal y);

Decimal complete(Decimal x);

int main(void)
{
    Decimal x = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, 9};
    Decimal y = {{3, 2, 5}, 2};
    Decimal res;

    res = add(x, y);  // res = x+y
    elong_print(res); // print

    return 0;
}

void elong_print(Decimal x)
{
    int n = x.n;

    for (int i = n; i >= 0; i -= 1)
    {
        printf("%d", x.a[i]);
    }
    printf("\n");
}

Decimal add(Decimal x, Decimal y)
{
    int remains = 0; // не помню как там в математике называетс€. то, что в уме держим. назвал остаток
    Decimal a, b, result, result_output;
    if (x.n >= y.n)
    {
        a = x;
        b = y;
    }
    else
    {
        a = y;
        b = x;
    }

    for (int i = a.n, j = b.n; i >= 0; i -= 1, j -= 1)
    {
        if (j >= 0)
            b.a[i] = b.a[j];
        else
            b.a[i] = 0;
    }

    for (int i = a.n; i >= 0; i -= 1)
    {
        printf("a[i]= %d b[i] = %d\n", a.a[i], b.a[i]);
        if (a.a[i] + b.a[i] + remains >= 10)
        {
            result.a[i] = (a.a[i] + b.a[i] + remains) % 10;
            remains = 1;
        }
        else
        {
            result.a[i] = a.a[i] + b.a[i] + remains;
            remains = 0;
        }
        // printf("result a[i] = %d, remains=%d\n\n", result.a[i], remains);
    }
    result.n = a.n + remains;
    for (int i = result.n, j = 0; i >= 0; i -= 1, j += 1)
        result_output.a[i] = result.a[j];
    result_output.n = result.n;
    return result_output;
}
