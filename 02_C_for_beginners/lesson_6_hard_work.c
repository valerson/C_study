// // Zif_11palochek 11 палочек
// #include <stdio.h>
// int main(void){
//     int n;
//     scanf("%d", &n);
//     int m=n/8;
//     switch (n-m*8)
//     {
//     case 2: {printf("%d", 1); break;}
//     case 3: {printf("%d", 2); break;}
//     case 4: {printf("%d", 3); break;}
//     default: {printf("-1");break;}
//     }
//     return 0;
// }

// if_boat Переправа
//  #include <stdio.h>

// int maximum(int a, int b, int c){
//     if (a>=b && a>=c) return a;
//     if (b>=a && b>=c) return b;
//     if (c>=a && c>=b) return c;
//     return a;
// }

// int result(int a, int b, int c, int k){
//     int summ=a+b+c;
//     if (maximum(a,b,c) > k)return 0;
//     if (summ - maximum(a,b,c) > k) return 0;
//     return 1;
// }

// int main(void){
//     int k, p1,p2,p3;
//     scanf("%d%d%d%d",&k,&p1,&p2,&p3);
//     printf(result(p1,p2,p3,k)==0? "NO":"YES");
//     return 0;
// }

// Rif_buses Автобусы
// #include <stdio.h>
// #include <math.h>
// // определение текущих минут
// #define MINUTE_NOW(h, m) ((h) * 60 + (m))

// // определение номера уикла прибытия автобуса на остановку
// int count(int m_now, int h, int m, int t);

// int main(void)
// {
//     int h1_start = 6, m1_start = 0, h2_start = 5, m2_start = 45;
//     int h, m, t1, t2;
//     scanf("%d%d%d%d", &h, &m, &t1, &t2);
//     int minut_now = MINUTE_NOW(h, m);

//     // определение номера цикла автобуса а и в
//     int count_a = count(MINUTE_NOW(h, m), h1_start, m1_start, t1);
//     int count_b = count(MINUTE_NOW(h, m), h2_start, m2_start, t2);
//     if (count_a < 0)
//         count_a = 0;
//     if (count_b < 0)
//         count_b = 0;

//     // время, через которое прибудет автобус а и в
//     int bus_a = (t1 * count_a + h1_start * 60 + m1_start) - minut_now;
//     int bus_b = (t2 * count_b + h2_start * 60 + m2_start) - minut_now;
//     printf("%d\n%d\n%s\n", bus_a, bus_b, bus_a <= bus_b ? "A" : "B");
//     return 0;
// }

// // определение номера уикла прибытия автобуса на остановку
// int count(int m_now, int h, int m, int t)
// {
//     return ceil((m_now - (double)(h * 60 + m)) / t);
// }

// Zif_romashka: Любит - не любит
#include <stdio.h>

// сумма чисел лепествок угорелой математически девушки
int summ(int n, int res);

// факториал числа
int fact(int n);

// определение число простое или нет
int is_simple_number(int n, int x, int count);

// количество встетившейся любви
int love(int n, int x);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", love(n, 1));
    return 0;
}

// сумма чисел лепествок угорелой математически девушки
int summ(int n, int res)
{
    if (n / 10 == 0)
    {
        res = res + n % 10;
        return res;
    }
    else
    {
        res = res + n % 10;
        return summ(n / 10, res);
    }
}

// факториал числа
int fact(int n)
{
    if (n == 1 || n == 0)
        return n;
    else
        n = n * fact(n - 1);
    return n;
}

// определение число простое или нет
int is_simple_number(int n, int x, int count)
{
    if (x == n)
    {
        count += 1;
        return count;
    }
    else
    {
        if (n % x == 0)
            count += 1;
        return is_simple_number(n, x + 1, count);
    }
}

// количество встетившейся любви
int love(int n, int x)
{
    static int count = 0;
    // если n>5 то не важное, какое число. сумма цифр факториала этого числа - составное
    if (n <= 5)
    {
        if (x > n)
            return count;
        if (is_simple_number(summ(fact(x), 0), 1, 0) == 2)
        {
            // printf("COUNT\n");
            count += 1;
        }
    }
    else
        return 2;
    love(n, x + 1);
}