// #include <stdio.h>
// int main(void){
//     char * a2 = "hello";
//     // a2[1]='H';
//     int i=0;
//     while (a2[i]!='\0')
//     {
//         printf("%c ", a2[i]);
//         i+=1;
//     }
//     return 0;
// }

//elong_set «адаем большие числа
#include <stdio.h>
#define N 100

typedef struct {
    char a[N];       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;  // наибольша€ степень дес€ти
}Decimal;

void elong_set (Decimal * res, const char str[ ]);
void elong_print(Decimal x);

int main(void)
{
    Decimal res;
    elong_set(&res, "12345678901234567890");  // res = 12345678901234567890
    elong_print(res);  
    return 0;
}

void elong_set (Decimal * res, const char str[ ])
{
    int n=0;
    while (str[n]!='\0')
    {
        res->a[n]=str[n]-'0';
        // printf("%d", res->a[n]);
        n+=1;
    }
    res->n=n-1;
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