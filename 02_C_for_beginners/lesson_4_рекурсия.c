#include <stdio.h>
int fact(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        x = x * fact(x - 1);
    }
    return x;
}

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d", fact(x));
    return 0;
}