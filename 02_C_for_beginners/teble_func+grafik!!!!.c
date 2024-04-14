#include <stdio.h>
#include <math.h>
#define H 21
#define W 42
#define M_PI 3.14159265358979323846

double func1(double i);
double func2(double i);
double func3(double i);
void print(double (*func)(double i));

int main(void)
{
    double step = 2 * M_PI / 41;
    double pos_y, pos_x;
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

    // for (int y = H - 1; y >= 0; y -= 1)
    // {
    //     pos_y = y * step;
    //     printf("pos_y= %lf\n", pos_y);
    // }

    // for (int x = 0; x <= W - 1; x += 1)
    // {
    //     pos_x = -M_PI + x * step;
    //     printf("pos_x= %lf\n", pos_x);
    // }

    printf("func_1\n");
    print(func1);
    printf("func_2\n");
    print(func2);
    printf("func_3\n");
    print(func3);
    // for (int y = H - 1; y >= 0; y -= 1)
    // {
    //     pos_y = y * step;
    //     for (int x = 0; x <= W - 1; x += 1)
    //     {
    //         pos_x = -M_PI + x * step;
    //         // printf("%lf\n", func1(pos_x));
    //         if (fabs(func3(pos_x) - pos_y) < step / 2)
    //             printf("*");
    //         else if (x == W / 2 && y != 0)
    //             printf("|");
    //         else if (y == 0 && x != W / 2)
    //             printf("-");
    //         else if (y == 0 && x == W / 2)
    //             printf("+");
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

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

void print(double (*func)(double i))
{
    double pos_y, pos_x;
    double step = 2 * M_PI / 41;

    for (int y = H - 1; y >= 0; y -= 1)
    {
        pos_y = y * step;
        for (int x = 0; x <= W - 1; x += 1)
        {
            pos_x = -M_PI + x * step;
            if (fabs(func(pos_x) - pos_y) < step / 2)
                printf("*");
            else if (x == W / 2 && y != 0)
                printf("|");
            else if (y == 0 && x != W / 2)
                printf("-");
            else if (y == 0 && x == W / 2)
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }
}