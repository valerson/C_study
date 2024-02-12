// struct Student {
//     long id;
//     int birth_year;         // год рождения
//     float weight;           // вес, кг
//     float height;           // рост, м
//     float run100;           // время забега на 100м, сек
//     unsigned char pushup;   // отжиманий
//     unsigned char pullup;   // подтягиваний
// };  // <---- Не забудь про ;

// int x;                  // объявили переменную `x` типа `int`
// struct Student gusev;    // объявили переменную `gusev` типа `struct Student`

// int x = 7;              // объявили переменную `x` типа `int`, значение 7
// struct Student ivanov = {315101, 2000, 70.4, 1.86, 17.6, 14, 5};

// struct Student zotov;
// zotov.height = 1.72;
// zotov.pullup = 9;

// #include <stdio.h>
// struct Time
// {
//     int h;  //часы
//     int m;  //минуты
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
//     int x;      //коорд х
//     int y;      //коорд у
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
//     int x;      // х координата левой верхней вершины
//     int y;      // y координата левой верхней вершины
//     int width;  // ширина
//     int height; // высота
// };
// int area(struct Rect a){
//     return a.height*a.width;
// }

// int main(void){
//     struct Rect a={-7,5,12,8};
//     printf("%d", area(a));
//     return 0;
// }

#include <stdio.h>
struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt;    // координаты левой верхней вершины
    struct Point rb;    // координаты правой нижней вершины
};
int area(struct Rect a){
    int weight=a.rb.x-a.lt.x;
    int height=a.lt.y-a.rb.y;
    return weight*height;
}

int main(void){
    struct Rect a={{-7,5},{5,-3}};
    printf("%d", area(a));
    return 0;
}
