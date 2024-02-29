#include <stdio.h>

// с ретерн
int funk_primer_1(int x, int y);

// с указателем
void funk_primer_2(int *x, int *y);

int main(void)
{
    int x = 5, y = 10;
    int *px = &x;
    int *py = &y;

    // обыденность
    int res = funk_primer_1(x, y);
    printf("simple function:\nres= %d\n", res); // res= 15

    funk_primer_2(px, py);
    printf("simple function:\nx= %d y= %d\n", x, y); // x= 15 y= 5

    // бахнем указатели на функции
    int (*name_primer_1)(int, int);      // подойдет для funk_primer_1
    void (*name_primer_2)(int *, int *); // подойдет для funk_primer_2

    name_primer_1 = funk_primer_1;
    int res_2 = name_primer_1(100, 200);
    printf("indicator function:\nres_2= %d\n", res_2); // res2= 300

    x = 100;
    y = 200;
    name_primer_2 = funk_primer_2;
    printf("* funk_2 = %p\n", funk_primer_2);
    printf("* name_2 = %p\n", name_primer_2);

    name_primer_2(px, py);
    printf("indicator function:\nx= %d y= %d\n", x, y); // x= 110 y= 195

    return 0;
}

// с ретерн
int funk_primer_1(int x, int y)
{
    return x + y;
}

// с указателями
void funk_primer_2(int *x, int *y)
{
    *x += 10;
    *y -= 5;
}