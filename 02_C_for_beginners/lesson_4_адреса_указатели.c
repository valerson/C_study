// int x;      // �������� ���������� � ���� int
// x = 7;      // �������� � ���������� � �������� 7
// int * px;   // �������� ���������� px ���� int *
// px = &x;    // ��������� �������� ������ ���������� �, ��� 100; �������� ����� � ���������� px.

// �������� �����!!!!!!!! ����� - ������ ����

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");
    int x;
    int *px;
    scanf("%d", &x);
    px = &x;
    printf("���������� x= %d\n", x);
    printf("����� &x= %p\n", &x);
    printf("����� px= %p\n", px);
    printf("���������� *px= %d\n", *px);
    printf("����� &px= %p, � ��� � ����� int **\n", &px);
    return 0;
}

// https://stepik.org/lesson/780365/step/1?unit=782938

// #include <stdio.h>
// #include <stdlib.h>

// int main(void){
//     int a = 5;
//     int * pa;
//     int * pb;
//     pa = &a;
//     pb = pa;

//     pa++;
//     a = *pb;
//     printf("%d",a);

//     return 0;
// }

// #include <stdio.h>

// void swap(int * px, int * py){
//     int temp;
//     temp=*px;
//     *px=*py;
//     *py=temp;
// }

// int main()
// {
//     int x, y;
//     scanf("%d%d", &x, &y);      // ���� ����� 2 3

//     swap(&x,&y);

//     printf("%d %d\n", x, y);    // �� ���������� 3 2

//     return 0;
// }

// #include <stdio.h>

// void min2time(int mm, int *ph, int *pm)
// {
//     *ph = mm / 60 % 24;
//     *pm = mm % 60;
// }

// int main()
// {
//     int mm, h, m;
//     scanf("%d", &mm);

//     min2time(mm, &h, &m);

//     printf("%02d:%02d\n", h, m);

//     return 0;
// }