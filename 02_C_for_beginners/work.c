// #include <stdio.h>

// void func(int *temp)
// {
//     printf("v=%d before func\n", *temp);
//     *temp += 10;
//     printf("v=%d after func\n", *temp);
// }

// int main(void)
// {
//     int v = 10;
//     int *temp = &v;
//     // for (int i=1; i<10; i+=1){
//     //     v=v+1;}
//     func(&v);
//     printf("%d", v);

//     return 0;
// }

// #include <stdio.h>

// long long int ipow(long long int a, unsigned int n, unsigned int *d)
// {
//     static int count = 0;
//     static long long int res;
//     if (n == 0)
//     {
//         count += 1;
//         *d = count;
//         count = 0;
//         return 1;
//     }
//     if (n == 1)
//     {
//         count += 1;
//         *d = count;
//         count = 0;
//         return a;
//     }
//     if (n != 0 && n % 2 == 0)
//     {
//         count += 1;
//         res = ipow(a, n / 2, d);
//         return res * res;
//     }

//     if (n != 1 && n % 2 != 0)
//     {
//         count += 1;
//         return a * ipow(a, n - 1, d);
//     }
// }

// int main(void)
// {
//     unsigned int d = 0;
//     long long int res;
//     long long int a;
//     unsigned int n;

//     scanf("%lld%u", &a, &n);
//     res = ipow(a, n, &d);
//     printf("%lld %u\n", res, d);

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", 5 % 5);
//     //     *temp += 10;
//     //     printf("v=%d after func\n", *temp);
//     return 0;
// }

// // deliteli Делители числа
// #include <stdio.h>

// void simpleFactors(unsigned int a, unsigned int last, unsigned int n)
// {

//     if (a % last == 0)
//     {
//         n += 1;
//         simpleFactors(a / last, last, n);
//     }

//     if (a % last != 0)
//     {
//         if (n > 1)
//         {
//             printf("a=%d %d^%d\n", a, last, n);
//         }
//         else
//         {
//             printf("a=%d %d\n", a, last);
//         }
//     }
// }

// void printFactor(unsigned int last, unsigned int n)
// {
// }

// int main(void)
// {
//     unsigned int a = 8, last = 2, n = 0;
//     // scanf("%u", &a);
//     simpleFactors(a, last, n);

//     return 0;
// }

#include <stdio.h>

// void simpleFactors(unsigned int a, unsigned int last, unsigned int n)
// {
//     if (a % last == 0)
//     {
//         n += 1;
//         simpleFactors(a / last, last, n);
//     }
//     if (a % last != 0 && last <= 15)
//     {
//         simpleFactors(a, last + 1, 0);

//         if (n == 1)
//             printf("%u ", last);
//         if (n != 0 && n != 1)
//             printf("%u^%u ", last, n);
//     }
// }

// int main(void)
// {
//     int a = 100, b = 37, n = 0;
//     // scanf("%u", &a);
//     // simpleFactors(a, last, n);
//     printf("%d\n", a % b);
//     printf("%d\n", 9 % 2);

//     return 0;
// }

// rusMult Русский крестьянский способ умножения
// #include <stdio.h>

// int rusMult(int a, int b)
// {

//     if (b == 1)
//     {
//         printf("%d %d\n", a, b);
//         return a;
//         printf("URAA\n");
//     }

//     if (b % 2 == 1 && b > 1)
//     {
//         printf("%d %d\n", a, b);
//         return a + rusMult(a * 2, b / 2);
//         printf("URAA\n");
//     }

//     if (b % 2 == 0)
//     {
//         printf("%d %d\n", a, b);
//         return rusMult(a * 2, b / 2);
//         printf("URAA\n");
//     }
// }

// int main(void)
// {
//     int a = 100, b = 37;
//     // int result = 0;
//     int result = rusMult(a, b);

//     printf("result=%d\n", result);
//     return 0;
// }

#include <stdio.h>
int rusDelete(int a, int b)
{
    int multi = 0, rem = 0;
    static int part = 0;

    if (a % 2 == 0 && a != 0)
    {
        multi = 2;
        rem = 0;
        if (a / 2 != 0)
        {
            printf("%d %d %d\n", a / 2, multi, rem);
        }
        else
        {
            printf("%d", 1);
        }
        rusDelete(a / 2, b);

        if (part != 0)
        {
            printf("%d * %d + %d = %d\n", part, multi, rem, (part * multi + rem));
        }
        part = part * multi + rem;
        return part;
    }

    if (a % 2 == 1)
    {
        multi = 1;
        rem = 1;
        if (a - b != 0)
        {
            printf("%d %d %d\n", a - b, multi, rem);
        }
        else
        {
            printf("%d\n", 1);
        }

        rusDelete(a - b, b);

        if (part != 0)
        {
            printf("%d * %d + %d = %d\n", part, multi, rem, (part * multi + rem));
        }
        part = part * multi + rem;
        return part;
    }

    if (a == 0)
    {
        part = 0;
        return part;
    }
}

int main(void)
{
    int a, b, res;
    scanf("%d%d", &a, &b);
    res = rusDelete(a, b);
    printf("%d", res);
    return 0;
}