#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
void div(int a, int b);

int main()
{
    float num1, num2;
    scanf("%f%f", &num1, &num2);
    if ((int)num1 == num1 && (int)num2 == num2)
    {
        printf("%d %d %d ", sum(num1, num2), sub(num1, num2), mult(num1, num2));
        div(num1, num2);
    }
    else
        printf("n/a\n");
    return 0;
}

int sum(int a, int b) { return (a + b); }

int sub(int a, int b) { return a - b; }

int mult(int a, int b) { return a * b; }

void div(int a, int b)
{
    if (b == 0)
        printf("n/a\n");
    else
        printf("%d", (int)(float)a / b);
}
