#include <stdio.h>

int main()
{
    float n;
    int max = 1;
    printf("enter number:  ");
    scanf("%f", &n);
    int temp = n;
    if ((float)(int)n == n)
    {
        for (int i = 2; i <= n; i += 1)
        {
            if (is_simple_number(i))
            {
                // printf("%d is simple\n", i);

                do
                {
                    temp -= i;
                } while (temp > 0);

                if (temp == 0)
                {
                    if (i > max)
                        max = i;
                }
                temp = n;
            }
            // else
            //     printf("%d is NOT simple\n", i);
        }
        printf("%d", max);
    }
    else
        printf("n/a\n");

    return 0;
}

int is_simple_number(int a)
{
    int temp = a;
    for (int i = 2, j = 0; i * i <= a; i += 1)
    {
        do
        {
            temp -= i;
        } while (temp > 0);

        if (temp == 0)
        {
            j = 1;
            return 0;
        }
        temp = a;
    }
    return 1;
}
