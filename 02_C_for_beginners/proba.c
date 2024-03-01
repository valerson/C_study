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

#include <stdio.h>

int cmp_int(const void * p1);

int main()
{
    int x;
    scanf("%d", &x);
    cmp_int(&x);

    return 0;
}

int cmp_int(const void * p1)
{
    const int * pp1 = (const int *)p1;

    printf("%d\n", *pp1);
}