// #include <stdio.h>

// typedef struct
// {
//     int h;   // ����
//     int min; // ������ (�� 0 �� 59)
// } TicTac;

// // �������� ��������� ����� a � ���������� ��������� ���� �����
// // ����� min �����, .
// TicTac after(TicTac a, int min);

// // �������� ��������� ���� ����� � ������� hh:mm\n
// void printTic(TicTac a);

// // "���������" ������ ������� ���� ����� (me)
// // �� a.h ����� � a.min �����
// void forward(TicTac *me, TicTac a);

// // "���������" ����� ������� ���� ����� (me)
// // �� a.h ����� � a.min �����
// void backward(TicTac *me, TicTac a);

// // ��������� ��������� �� ��������� ����� a � b
// // ���� ���������, ���������� 1, ���� ��� - 0
// int isEqualTime(TicTac a, TicTac b);

// int main(void)
// {
//     int h = 12, m = 30;
//     int min = 35;
//     //
//     TicTac temp = {h, m};
//     TicTac temp_2 = {2, 55};
//     //
//     printf("after = ");
//     printTic(after(temp, min));
//     //
//     // forward(&temp, temp_2);
//     // printf("forward = ");
//     // printTic(temp);
//     //
//     backward(&temp, temp_2);
//     printf("backward = ");
//     printTic(temp);
//     //
//     // printf("equal = ");
//     // printf("%d\n", isEqualTime(temp, temp_2));
//     return 0;
// }

// // �������� ��������� ���� ����� � ������� hh:mm\n
// void printTic(TicTac a)
// {
//     printf("%02d:%02d\n", a.h, a.min);
// }

// // �������� ��������� ����� a � ���������� ��������� ���� �����
// // ����� min �����, .
// TicTac after(TicTac a, int min)
// {
//     a.h = (a.h + (a.min + min) / 60) % 12;
//     a.min = (a.min + min) % 60;
//     return a;
// }

// // "���������" ������ ������� ���� ����� (me)
// // �� a.h ����� � a.min �����
// void forward(TicTac *me, TicTac a)
// {
//     me->h = (me->h + a.h) % 12;
//     me->h = (me->h + (me->min + a.min) / 60) % 12;
//     me->min = (me->min + a.min) % 60;
// }

// // "���������" ����� ������� ���� ����� (me)
// // �� a.h ����� � a.min �����
// void backward(TicTac *me, TicTac a)
// {
//     int hour = me->h - a.h, minute = me->min - a.min;
//     if (hour < 0)
//     {
//         me->h = 12 + hour;
//     }
//     else
//     {
//         me->h = hour;
//     }

//     if (minute < 0)
//     {
//         me->min = 60 + minute;
//         if (hour - 1 < 0)
//         {
//             me->h = 12 - 1;
//         }
//         else
//         {
//             me->h = hour - 1;
//         }
//     }
//     else
//     {
//         me->min = minute;
//     }
// }

// // ��������� ��������� �� ��������� ����� a � b
// // ���� ���������, ���������� 1, ���� ��� - 0
// int isEqualTime(TicTac a, TicTac b)
// {
//     if (a.h == b.h && a.min == b.min)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// struct_line_0rotR �������
// #include <stdio.h>
// #include <math.h>
// #define GRADE(x) ((x) * (x))

// typedef struct
// {
//     int x;
//     int y;
// } Point;

// typedef struct
// {
//     Point a;   // ������ �������
//     Point b;   // ����� �������
//     float len; // ����� �������
// } Line;

// float distance(Point a, Point b); // ���������� ����� �������
// void scanLine(Line *t);
// void printLine(Line t);
// void rotRLine(Line *t);

// int main()
// {
//     Line t;

//     scanLine(&t);
//     // ��� ������ ���� ����� ������� rotRLine
//     rotRLine(&t);
//     printLine(t);
//     printf("%.3f", distance(t.a, t.b));

//     return 0;
// }

// // ���� ��������� � ��������� �� � ������ �����
// void scanLine(Line *t)
// {
//     int x1, y1, x2, y2;
//     scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//     t->a.x = x1;
//     t->a.y = y1;
//     t->b.x = x2;
//     t->b.y = y2;
// }

// // ������ ��������� ����� �����
// void printLine(Line t)
// {
//     printf("%d %d %d %d ", t.a.x, t.a.y, t.b.x, t.b.y);
// }

// // ���������� ����� ������� (����� �����)
// float distance(Point a, Point b)
// {
//     float len = sqrt((GRADE(a.x - b.x) + GRADE(a.y - b.y)));
//     return len;
// }

// // ��������������� �����
// void rotRLine(Line *t)
// {
//     int temp;
//     temp = t->a.x;
//     t->a.x = t->a.y;
//     t->a.y = -temp;

//     temp = t->b.x;
//     t->b.x = t->b.y;
//     t->b.y = -temp;
// }

// struct_colors ����� RGB
#include <stdio.h>

// ������ ��� ���. ��� ��� ��� ��� �� ����� ������.
typedef struct
{
    unsigned int red;
    unsigned int green;
    unsigned int blue;
} Color;

// ������� RGB-������ � �������
Color getColor();

// ������� �� RGB-������� � �����
unsigned long long convertToHTML(Color);

// �������������� ����� ����� � RGB-������
Color convertToRGB(unsigned long long);

// ������ ����� � RGB-������� (������ �������� � ���������� ���� ����� ������)
// red green blue:
// 255 128 222
// �������� ������ ����� ����� ������ � \n � �����!!!
void printRGB(Color a);

// ������ ����� � HTML-������� � \n � �����.
// �������: FFA902 0AA3FF
void printHTML(Color);

// �������� ���������
int main(void)
{
    Color a;
    unsigned long long html;
    //
    a = getColor();
    printRGB(a);
    //
    html = convertToHTML(a);
    printf("%llu\n", html);
    printHTML(a);
    //
    a = convertToRGB(html);
    printRGB(a);

    return 0;
}

// ������� RGB-������ � �������
Color getColor()
{
    int a, b, c;
    Color temp;
    scanf("%d%d%d", &temp.red, &temp.green, &temp.blue);
    return temp;
}

// ������ �����
// � �� ����� ������ � ������� ����� ����� ��� ������ �����-���� ���������. �������.
void printRGB(Color a)
{
    printf("%d %d %d\n", a.red, a.green, a.blue);
}

// ������� �� RGB-������� � �����
unsigned long long convertToHTML(Color a)
{
    Color temp;
    unsigned long long html;
    html = temp.red * 256 * 256 + temp.green * 256 + temp.blue;
    return html;
}

// ������ ����� � HTML-������� � \n � �����.
void printHTML(Color a)
{
    printf("%02X%02X%02X\n", a.red, a.green, a.blue);
}

// �������������� ����� ����� � RGB-������
Color convertToRGB(unsigned long long html)
{
    Color temp;
    temp.blue = html % 256;
    temp.green = html / 256 % 256;
    temp.red = html / 256 / 256 % 256;
    return temp;
}