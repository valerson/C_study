#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int x = 15;
    // scanf("%d", &x);
    int *px = &x;
    int **ppx = &px;

    // printf("���������� x= %d\n", x);
    // printf("����� &x= %p\n", &x);
    // printf("����� px= %p\n", px);
    // printf("���������� *px= %d\n", *px);
    // printf("����� &px= %p, � ��� � ����� int **\n", &px);
    // printf("����� &ppx= %p\n", &ppx);
    // printf("�������� **ppx= %d\n", **ppx);

    printf("x=%d *px=%d **ppx=%d\n", x, *px, **ppx); // x=15 *px=15 **ppx=15
    printf("&x=%p px=%p *ppx=%p\n", &x, px, *ppx);   // &x=100 px=100 *ppx=100
    printf("&px=%p ppx=%p\n", &px, ppx);             // &px=240 ppx=240

    return 0;
}
