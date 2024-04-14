#include <stdio.h>
#include <math.h>
int main(void)
{
    int n = 0, number = 0, result = 1;
    scanf("%d", &number);
    int temp = number;

    // определяем n - разрядность числа
    while (temp > 0)
    {
        temp /= 10;
        n += 1;
    }

    for (int i = 0, m = n - 1; i < n; i += 1, m -= 2, n -= 1, number /= 10)
    {
        if ((int)(number / (pow(10, m))) % 10 != number % 10)
        {
            result = 0;
            break;
        }
    }
    printf("%s", result == 1 ? "YES" : "NO");
    return 0;
}