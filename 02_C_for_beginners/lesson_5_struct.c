// struct Student {
//     long id;
//     int birth_year;         // ��� ��������
//     float weight;           // ���, ��
//     float height;           // ����, �
//     float run100;           // ����� ������ �� 100�, ���
//     unsigned char pushup;   // ���������
//     unsigned char pullup;   // ������������
// };  // <---- �� ������ ��� ;

// int x;                  // �������� ���������� `x` ���� `int`
// struct Student gusev;    // �������� ���������� `gusev` ���� `struct Student`

// int x = 7;              // �������� ���������� `x` ���� `int`, �������� 7
// struct Student ivanov = {315101, 2000, 70.4, 1.86, 17.6, 14, 5};

// struct Student zotov;
// zotov.height = 1.72;
// zotov.pullup = 9;

// #include <stdio.h>
// struct Time
// {
//     int h;  //����
//     int m;  //������
// };

// int main(void){
//     struct Time t;
//     scanf("%d:%d", &t.h, &t.m);
//     printf("%02d:%02d\n", t.h, t.m);
//     return 0;
// }

// #include <stdio.h>
// struct Point
// {
//     int x;      //����� �
//     int y;      //����� �
// };
// struct Rect1
// {
//     struct Point lt;
//     struct Point rb;
// };

// int main(void){
//     struct Rect1 b={{-7, 5}, {5, -3}};

//     printf("%d %d %d %d", b.lt.x, b.lt.y, b.rb.x, b.rb.y);
//     return 0;
// }

// #include <stdio.h>
// struct Rect {
//     int x;      // � ���������� ����� ������� �������
//     int y;      // y ���������� ����� ������� �������
//     int width;  // ������
//     int height; // ������
// };
// int area(struct Rect a){
//     return a.height*a.width;
// }

// int main(void){
//     struct Rect a={-7,5,12,8};
//     printf("%d", area(a));
//     return 0;
// }

// #include <stdio.h>
// struct Point {
//     int x;
//     int y;
// };
// struct Rect {
//     struct Point lt;    // ���������� ����� ������� �������
//     struct Point rb;    // ���������� ������ ������ �������
// };
// int area(struct Rect a){
//     int weight=a.rb.x-a.lt.x;
//     int height=a.lt.y-a.rb.y;
//     return weight*height;
// }

// int main(void){
//     struct Rect a={{-7,5},{5,-3}};
//     printf("%d", area(a));
//     return 0;
// }

// rect_move1 ����� �������������� �� dx
// #include <stdio.h>

// struct Rect
// {
//     int x;      // � ���������� ����� ������� �������
//     int y;      // y ���������� ����� ������� �������
//     int width;  // ������
//     int height; // ������
// };

// void move(struct Rect *p, int dx)
// {
//     p->x = p->x + dx;
// }

// int main(void)
// {
//     int x, y, width, height, dx;
//     scanf("%d%d%d%d%d", &x, &y, &width, &height, &dx);
//     struct Rect temp = {x, y, width, height};
//     printf("%d %d %d %d + %d =", temp.x, temp.y, temp.width, temp.height, dx);
//     move(&temp, dx);
//     printf(" %d %d %d %d", temp.x, temp.y, temp.width, temp.height);

//     return 0;
// }

// rect_area1 ������� �������������� - 2
#include <stdio.h>

struct Point
{
    int x;
    int y;
};

struct Rect
{
    struct Point lt; // ���������� ����� ������� �������
    struct Point rb; // ���������� ������ ������ �������
};

void move(struct Rect *p, int dx)
{
    p->lt.x = p->lt.x + dx;
    p->rb.x = p->rb.x + dx;
}

int main(void)
{
    struct Rect temp = {{-7, 5}, {12, 8}};
    int dx = -6;
    printf("%d %d %d %d + %d = ", temp.lt.x, temp.lt.y, temp.rb.x, temp.rb.y, dx);
    move(&temp, dx);
    printf(" %d %d %d %d", temp.lt.x, temp.lt.y, temp.rb.x, temp.rb.y);
    return 0;
}