// #include <stdio.h>

// typedef struct
// {
//     int h;   // часы
//     int min; // минуты (от 0 до 59)
// } TicTac;

// // получает показание часов a и возвращает показание этих часов
// // через min минут, .
// TicTac after(TicTac a, int min);

// // печатает показания этих часов в формате hh:mm\n
// void printTic(TicTac a);

// // "переводит" вперед стрелки этих часов (me)
// // на a.h часов и a.min минут
// void forward(TicTac *me, TicTac a);

// // "переводит" назад стрелки этих часов (me)
// // на a.h часов и a.min минут
// void backward(TicTac *me, TicTac a);

// // проверяет совпадают ли показания часов a и b
// // если совпадают, возвращает 1, если нет - 0
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

// // печатает показания этих часов в формате hh:mm\n
// void printTic(TicTac a)
// {
//     printf("%02d:%02d\n", a.h, a.min);
// }

// // получает показание часов a и возвращает показание этих часов
// // через min минут, .
// TicTac after(TicTac a, int min)
// {
//     a.h = (a.h + (a.min + min) / 60) % 12;
//     a.min = (a.min + min) % 60;
//     return a;
// }

// // "переводит" вперед стрелки этих часов (me)
// // на a.h часов и a.min минут
// void forward(TicTac *me, TicTac a)
// {
//     me->h = (me->h + a.h) % 12;
//     me->h = (me->h + (me->min + a.min) / 60) % 12;
//     me->min = (me->min + a.min) % 60;
// }

// // "переводит" назад стрелки этих часов (me)
// // на a.h часов и a.min минут
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

// // проверяет совпадают ли показания часов a и b
// // если совпадают, возвращает 1, если нет - 0
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

// struct_line_0rotR Поворот
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
//     Point a;   // начало отрезка
//     Point b;   // конец отрезка
//     float len; // длина отрезка
// } Line;

// float distance(Point a, Point b); // расстояние между точками
// void scanLine(Line *t);
// void printLine(Line t);
// void rotRLine(Line *t);

// int main()
// {
//     Line t;

//     scanLine(&t);
//     // тут должен быть вызов функции rotRLine
//     rotRLine(&t);
//     printLine(t);
//     printf("%.3f", distance(t.a, t.b));

//     return 0;
// }

// // ввод координат и отнесение их к точкам линии
// void scanLine(Line *t)
// {
//     int x1, y1, x2, y2;
//     scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
//     t->a.x = x1;
//     t->a.y = y1;
//     t->b.x = x2;
//     t->b.y = y2;
// }

// // печать координат точек линии
// void printLine(Line t)
// {
//     printf("%d %d %d %d ", t.a.x, t.a.y, t.b.x, t.b.y);
// }

// // расстояние между точками (длина линии)
// float distance(Point a, Point b)
// {
//     float len = sqrt((GRADE(a.x - b.x) + GRADE(a.y - b.y)));
//     return len;
// }

// // переворачивание линии
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

// struct_colors Цвета RGB
#include <stdio.h>

// сделал тут инт. для тут был чар не понял вообще.
typedef struct
{
    unsigned int red;
    unsigned int green;
    unsigned int blue;
} Color;

// считать RGB-формат с консоли
Color getColor();

// перевод из RGB-формата в число
unsigned long long convertToHTML(Color);

// преобразование числа цвета в RGB-формат
Color convertToRGB(unsigned long long);

// печать цвета в RGB-формате (печать значений в десятичном виде через пробел)
// red green blue:
// 255 128 222
// Печатать только числа через пробел и \n в конце!!!
void printRGB(Color a);

// печать цвета в HTML-формате и \n в конце.
// Примеры: FFA902 0AA3FF
void printHTML(Color);

// ОСНОВНАЯ ПРОГРАММА
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

// считать RGB-формат с консоли
Color getColor()
{
    int a, b, c;
    Color temp;
    scanf("%d%d%d", &temp.red, &temp.green, &temp.blue);
    return temp;
}

// печать цвета
// я не понял почеум в условии после колор нет литеры какой-либо структуры. добавил.
void printRGB(Color a)
{
    printf("%d %d %d\n", a.red, a.green, a.blue);
}

// перевод из RGB-формата в число
unsigned long long convertToHTML(Color a)
{
    Color temp;
    unsigned long long html;
    html = temp.red * 256 * 256 + temp.green * 256 + temp.blue;
    return html;
}

// печать цвета в HTML-формате и \n в конце.
void printHTML(Color a)
{
    printf("%02X%02X%02X\n", a.red, a.green, a.blue);
}

// преобразование числа цвета в RGB-формат
Color convertToRGB(unsigned long long html)
{
    Color temp;
    temp.blue = html % 256;
    temp.green = html / 256 % 256;
    temp.red = html / 256 / 256 % 256;
    return temp;
}