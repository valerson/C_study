#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
    double step = 2 * M_PI / 41;
    double y1, y2, y3;

    for (double i = -M_PI; i <= M_PI; i += step)
    {
        printf("%.7lf|", i);
        y1 = (1 * 1 * 1) / (1 * 1 + i * i);
        printf("%.7lf|", y1);
        y2 = -(i * i) - 1 + sqrt(2 * (i * i + 1));
        if (y <= 0)
            printf("-|");
        else
            printf("%.7lf|", sqrt(y2));
        y3 = 1 / (i * i);
        printf("%.7lf", y3);
        printf("\n");
    }

    return 0;
}
