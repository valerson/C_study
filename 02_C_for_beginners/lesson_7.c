// #include <stdio.h>

// int main()
// {
//     int l, k, s, count = 1;
//     scanf("%d%d%d", &l, &k, &s);
//     int w = l;
//     while (w < s)
//     {
//         l = l + k;
//         w += l;
//         count += 1;
//     }
//     printf("%d", count);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int s, l, k, count = 0;
//     scanf("%d%d%d", &s, &l, &k);
//     int dist = s;
//     while ((dist - l) >= 0 && l > 0)
//     {
//         dist -= l;
//         l -= k;
//         count += 1;
//     }
//     printf("%d %d", count, dist);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int money, price, delta, count = 0, day = 0, week = 1;
//     scanf("%d%d%d", &price, &delta, &money);
//     while (money - price > 0)
//     {
//         if (day == 1 && week != 1)
//             price += delta;
//         day += 1;
//         money -= price;
//         count += 1;
//         if (day == 7)
//         {
//             week += 1;
//             day = 1;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int number;
//     scanf("%d", &number);

//     while (number % 10 == 0)
//     {
//         number /= 10;
//     }
//     do
//     {
//         printf("%d", number % 10);
//         number /= 10;
//     } while (number);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x;       // €блок на одной (текущей) €блоне
//     int sum = 0; // уже собрали €блок
//     int n = 5;   // количество деревьев
//     int i;       // сколько деревьев уже обработали

//     // scanf("%d", &n);
//     // i = 0;          не написали, может будет работать и так?
//     while (i < n)
//     {
//         // scanf("%d", &x);
//         x = 6;
//         sum += x;
//         printf("x is %d and sum is %d\n", x, sum);
//         i++;
//         x = x + 2 + x * 2;
//     }

//     printf("%d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int h, count_all = 0, count_170 = 0;
//     char end;
//     // while (2 == scanf("%d%c", &h, &end) || 1 == scanf("%d%c", &h, &end))
//     // {
//     //     count_all += 1;
//     //     if (h > 170)
//     //         count_170 += 1;
//     // }

//     do
//     {
//         scanf("%d%c", &h, &end);
//         count_all += 1;
//         if (h > 170)
//             count_170 += 1;
//     } while (end != EOF);
//     printf("%d %d", count_all, count_170);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int n = 0, number, result = 1;
//     scanf("%d", &number);
//     int temp = number;

//     // определ€ем n - разр€дность числа
//     while (temp > 0)
//     {
//         temp /= 10;
//         n += 1;
//     }
//     int m = n - 1;
//     for (int i = 0; i < n; i += 1)
//     {
//         if ((int)(number / (pow(10, m))) % 10 != number % 10)
//         {
//             result = 0;
//             break;
//         }
//         n -= 1;
//         number /= 10;
//         m -= 2;
//     }
//     printf("%s", result == 1 ? "YES" : "NO");
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     // printf("%d", 1500625 % (int)(pow(5, 4)));
//     int n, k, a = 2, result = 1;
//     scanf("%d%d", &n, &k);
//     while (a <= 9)
//     {
//         if (n % (int)(pow(a, k)) == 0)
//         {
//             n /= (int)(pow(a, k));
//             result *= a;
//             printf("%d %d\n", a, n);
//         }
//         else
//             a += 1;
//         if (n == 1)
//             break;
//     }
//     printf("%d", n == 1 ? result : -1);
//     return 0;
// }

// for_60 —колько раз встретилась цифра в числе?
// #include <stdio.h>
// int main(void)
// {
//     int d, k, count = 0;
//     scanf("%d%d", &d, &k);
//     printf("%d %d ", d, k);
//     while (k > 0)
//     {
//         if (d == k % 10)
//             count += 1;
//         k /= 10;
//     }
//     printf("%d", count);
//     return 0;
// }

//  // for_6 —колько раз встретилась цифра в ќ„≈Ќ№ ЅќЋ№Ўќћ числе?
// #include <stdio.h>
// int main(void)
// {
//     int count = 0, d;
//     int k;

//     scanf("%d", &d);
//     printf("%d", d);

//     while ((k = getchar()) != EOF)
//     {
//         putchar(k);

//         if (k - 48 == d)
//         {
//             count += 1;
//         }
//     }

//     printf(" %d", count);

//     return 0;
// }

// считывание по одному символу
// ќ“Ћ»„Ќќ≈!!!!
// #include <stdio.h>

// int main()
// {
//     int d;
//     int number;
//     int numberPrint;
//     int count = 0;

//     scanf("%1d", &d);
//     printf("%d ", d);

//     while (scanf("%1d", &number) == 1)
//     {
//         if (d == number)
//             count++;

//         printf("%d   ", number);
//     }

//     printf(" %d", count);

//     return 0;
// }

// for_14 —кобки
// #include <stdio.h>
// int main(void)
// {
//     char symvol;
//     int open = 0, close = 0, flag = 0;
//     scanf("%1c", &symvol);
//     if (symvol == '(')
//     {
//         open += 1;
//         while (scanf("%1c", &symvol) == 1)
//         {
//             if (symvol == '(')
//                 open += 1;
//             if (symvol == ')')
//                 close += 1;
//             // if (symvol != '(' && symvol != ')' && symvol != '\n')
//             //{
//             // flag = 1;
//             // printf("NO");
//             // break;
//             //}
//             if (open - close < 0)
//             {
//                 flag = 1;
//                 printf("NO");
//                 break;
//             }
//         }
//         if (open - close == 0)
//             printf("YES");
//         else if (flag != 1)
//             printf("NO");
//     }

//     else
//         printf("NO");

//     return 0;
// }
