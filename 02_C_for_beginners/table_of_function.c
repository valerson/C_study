#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

double func1(double i);
double func2(double i);
double func3(double i);

int main()
{
    double step = 2 * M_PI / 41;
    double y1, y2, y3;

    for (double i = -M_PI; i <= M_PI; i += step)
    {
        printf("%.7lf|", i);
        y1 = func1(i);
        printf("%.7lf|", y1);
        y2 = func2(i);
        if (y2 <= 0)
            printf("-|");
        else
            printf("%.7lf|", sqrt(y2));
        y3 = func3(i);
        printf("%.7lf", y3);
        printf("\n");
    }

    return 0;
}

double func1(double i)
{
    return (1 * 1 * 1) / (1 * 1 + i * i);
}
double func2(double i)
{
    return -(i * i) - 1 + sqrt(2 * (i * i + 1));
}
double func3(double i)
{
    return 1 / (i * i);
}