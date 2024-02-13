#include <stdio.h>

typedef struct
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Color;

Color getColor();
void printRGB(Color);

int main(void)
{
    Color z;

    z = getColor();
    printRGB(z);
    return 0;
}

// считать RGB-формат с консоли
Color getColor()
{
    Color res;
    int r, g, b;
    scanf("%d%d%d", &r, &g, &b);
    res.red = r;
    res.green = g;
    res.blue = b;
    return res;
}

// ѕечатать только числа!!
void printRGB(Color rgb)
{
    printf("%u %u %u\n", rgb.red, rgb.green, rgb.blue);
}