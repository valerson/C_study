// #include <stdio.h>
// int fact(int x)
// {
//     if (x == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         x = x * fact(x - 1);
//     }
//     return x;
// }

// int main(void)
// {
//     int x, depth=4;
//     scanf("%d", &x);
//     printf("%d", fact(x));
//     return 0;
// }

// half Делим конфеты пополам
// #include <stdio.h>
// #include <math.h>

<<<<<<< HEAD
// int delim_konfety(int n, int count){
//     if (n==1){
//         count+=1;
=======

// int delim_konfety(int n, int count){
//     if (n==1){
//         count+=1; 
>>>>>>> 67db39cbb34cec1c5e7ac461c5b2d869dd7cf56b
//         return count;
//     }
//     else {
//         count+=1;
//         return delim_konfety(n-floor(n/2), count);
//     }
// }

// int main(void){
//     int n, count=0;
//     scanf("%d", &n);
//     printf("%d", delim_konfety(n, count));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

<<<<<<< HEAD
=======

>>>>>>> 67db39cbb34cec1c5e7ac461c5b2d869dd7cf56b
// int delim_konfety(int n){
//     static int count=0;
//     count+=1;
//     if (n==0){
//         return 0;
//     }
//     else if (n==1){
//         return 1;
//     }
//     delim_konfety(n-floor(n/2));
//     return count;
// }

// int main(void){
//     int n, count=0;
//     scanf("%d", &n);
//     printf("%d", delim_konfety(n));
//     return 0;
// }

<<<<<<< HEAD
// nod Алгоритм Евклида
//  #include <stdio.h>
=======

//nod Алгоритм Евклида
// #include <stdio.h>
>>>>>>> 67db39cbb34cec1c5e7ac461c5b2d869dd7cf56b

// int nod(int a,int b){
//     if (a%b==0){return b;}
//     else {
//         nod(b,a%b);
//     }
// }

// int main(void){
//     int a, b;
//     scanf("%d%d", &a,&b);
//     printf("%d", nod(a,b));
//     return 0;
// }

// ipow Возведение в степень
<<<<<<< HEAD
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

// deliteli Делители числа
// #include <stdio.h>

// void printFactor(unsigned int last, unsigned int n)
// {
//     if (n == 0)
//         return;
//     if (n == 1)
//         printf("%u ", last);
//     else
//         printf("%u^%u ", last, n);
// }

// void simpleFactors(unsigned int a, unsigned int last, unsigned int n)
// {
//     if (a == 1)
//     {
//         printFactor(last, n);
//         return;
//     }

//     if (a % last == 0)
//     {
//         n += 1;
//         simpleFactors(a / last, last, n);
//     }

//     if (a % last != 0)
//     {
//         simpleFactors(a, last + 1, 0);
//         printFactor(last, n);
//     }
// }

// int main(void)
// {
//     unsigned int a = 207025, last = 2, n = 0;
//     // scanf("%u", &a);
//     simpleFactors(a, last, n);

//     return 0;
// }

// // if (n > 1)
// // {
// //     printf("a=%d %d^%d\n", a, last, n);
// // }

// // if (n == 1)
// // {
// //     printf("a=%d %d, n=%d\n", a, last, n);
// // }

// rusMult Русский крестьянский способ умножения
// #include <stdio.h>

// int rusMult(int a, int b)
// {
//     int res = 0;
//     if (b == 1)
//     {
//         printf("%d %d\n", a, b);
//         res += a;
//         printf("%d\n", a);
//         printf("%d ", a);
//         return res;
//     }

//     if (b % 2 == 1 && b > 1)
//     {
//         printf("%d %d\n", a, b);
//         res += a + rusMult(a * 2, b / 2);
//         printf("%d %d %d\n", a, b % 2, res);
//         printf("%d ", res);
//         return res;
//     }

//     if (b % 2 == 0)
//     {
//         printf("%d %d\n", a, b);
//         res += rusMult(a * 2, b / 2);
//         printf("%d %d %d\n", a, b % 2, res);
//         printf("%d ", res);
//         return res;
//     }
// }

// int main(void)
// {
//     int a, b;
//     scanf("%d%d", &a, &b);
//     int result = rusMult(a, b);
//     return 0;
// }

// rusDel Русский крестьянский способ деления (без остатка)
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
=======
#include <stdio.h>

int ipow(int a, int n, int d){
    if (n==0){
        printf("plus 1\n");
        d+=1;
        return 1;}
    if (n==1){
        printf("plus 1\n");
        d+=1;
        return a;}
    if (n!=0 && n%2==0){
        printf("plus 1\n");
        d+=1;
        return ipow(a,n/2,d)*ipow(a,n/2,d);}
    if (n!=1 && n%2!=0){
        printf("plus 1\n");
        d+=1;
        return a*ipow(a,n-1,d);}
}

int main(void){
    int d=0, res;
    int a;
    int n;
    scanf("%d%d",&a,&n);
    res=ipow(a,n,d);
    printf("%d\n", res);
    printf("%d\n", d);

>>>>>>> 67db39cbb34cec1c5e7ac461c5b2d869dd7cf56b
    return 0;
}
