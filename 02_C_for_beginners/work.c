// #include <stdio.h>

// typedef struct
// {
//     unsigned char red;
//     unsigned char green;
//     unsigned char blue;
// } Color;

// Color getColor();
// void printRGB(Color);

// int main(void)
// {
//     Color z;

//     z = getColor();
//     printRGB(z);
//     return 0;
// }

// // считать RGB-формат с консоли
// Color getColor()
// {
//     Color res;
//     int r, g, b;
//     scanf("%d%d%d", &r, &g, &b);
//     res.red = r;
//     res.green = g;
//     res.blue = b;
//     return res;
// }

// // Печатать только числа!!
// void printRGB(Color rgb)
// {
//     printf("%u %u %u\n", rgb.red, rgb.green, rgb.blue);
// }

#include <stdio.h>
// int summ(int n, int res)
// {
//     if (n / 10 == 0)
//     {
//         res = res + n % 10;
//         return res;
//     }
//     else
//     {
//         res = res + n % 10;
//         return summ(n / 10, res);
//     }
// }

// unsigned long long fact(int n)
// {
//     if (n == 1 || n == 0)
//         return n;
//     else
//         n = n * fact(n - 1);
//     return n;
// }

// int main(void)
// {
//     // int n;
//     // scanf("%d", &n);
//     for (int i = 1; i <= 20; i += 1)
//     {
//         printf("i= %d ostatok ot 9 = %d\n", i, i % 9);
//     }

//     // printf("%d", n % 10);
//     return 0;
// }

// #include <stdio.h>
// #include <locale.h>

// // Функция для вычисления факториала числа
// unsigned long long factorial(int n)
// {
//     if (n == 0)
//         return 1;
//     return n * factorial(n - 1);
// }

// // Функция для проверки, является ли число простым
// int isPrime(int n)
// {
//     if (n <= 1)
//         return 0;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return 0;
//     }
//     return 1;
// }

// // Функция для вычисления суммы цифр числа
// int sumOfDigits(unsigned long long num)
// {
//     int sum = 0;
//     while (num != 0)
//     {
//         sum += num % 10;
//         num /= 10;
//     }
//     return sum;
// }

// int main()
// {
//     setlocale(LC_ALL, " ");
//     int n;
//     printf("n=?: ");
//     scanf("%d", &n);

//     int loveCount = 0;

//     // Перебираем количество лепестков от 1 до n
//     for (int i = 1; i <= n; i++)
//     {
//         printf("x= %d\n", i);
//         // Вычисляем факториал количества лепестков
//         unsigned long long fact = factorial(i);
//         printf("fact(x)= %d\n", fact);
//         // Вычисляем сумму цифр полученного числа
//         int sum = sumOfDigits(fact);
//         printf("summ_fact(x)= %d\n", sum);
//         // Проверяем, является ли сумма цифр простым числом
//         printf("prostoe?= %d\n", isPrime(sum));
//         if (isPrime(sum))
//         {
//             // Если да, то увеличиваем счетчик "ЛЮБИТ"
//             loveCount++;
//         }

//         // {
//         // // Вычисляем факториал количества лепестков
//         // unsigned long long fact = factorial(i);
//         // // Вычисляем сумму цифр полученного числа
//         // int sum = sumOfDigits(fact);
//         // // Проверяем, является ли сумма цифр простым числом
//         // if (isPrime(sum))
//         // {
//         //     // Если да, то увеличиваем счетчик "ЛЮБИТ"
//         //     loveCount++;
//         // }
//     }

//     printf("love_num= %d \n", loveCount);

//     return 0;
// }

#include <stdio.h>

// Функция для вычисления факториала числа
unsigned long long factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// Функция для проверки, является ли число простым
int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Функция для вычисления суммы цифр числа
int sumOfDigits(unsigned long long num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int n;
    printf("n=: ");
    scanf("%d", &n);

    int loveCount = 0;

    // Перебираем количество лепестков от 1 до n
    for (int i = 1; i <= n; i++)
    {
        // Вычисляем факториал количества лепестков
        unsigned long long fact = factorial(i);
        // Вычисляем сумму цифр полученного числа
        int sum = sumOfDigits(fact);
        // Проверяем, является ли сумма цифр простым числом
        if (isPrime(sum))
        {
            // Если да, то увеличиваем счетчик "ЛЮБИТ"
            loveCount++;
        }
    }

    printf("love_num =  %d раз(а).\n", loveCount);

    return 0;
}
