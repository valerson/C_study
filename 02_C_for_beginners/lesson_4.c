// #include <stdio.h>
// #include <math.h>
// #define G 9.81          //ускорение свободного падения
// #define PI 3.1415926    // число пи
// int main(void){
//     double
//         a,      //угол, под которым бросили тело
//         v_0,    //начальная скоростьтела
//         h;      //высота - трбуется определить
//     scanf("%lf%lf", &a, &v_0);
//     double alpha=a*PI/180;
//     h=v_0*v_0*sin(alpha)*sin(alpha)/2/G;
//     printf("%lf", h);

//     return 0;
// }

// #include <stdio.h>

// double temperture(double c){
//     return 32+c*9/5;
// }

// float celsius(int fahr){
//     return (float)(fahr-32)*5/9;
// }

// int main(void){
//     double f;
//     scanf("%lf", &f);
//     // printf("%.3lf", temperture(f));
//     printf("%.3lf", celsius(f));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// #include <assert.h>

// float dist(int x_1, int y_1, int x_2, int y_2)
// {
//     return sqrt((x_2-x_1)*(x_2-x_1)+(y_2-y_1)*(y_2-y_1));
// }

// int main(void){
//     int x_1, x_2, y_1, y_2;
//     scanf("%d%d",&x_1, &y_1);
//     scanf("%d%d",&x_2, &y_2);

//     // assert(5.0==dist(3,0,0,4));
//     // assert(5.0==dist(0,4,3,0));
//     // assert(2.828==dist(1,2,3,4));
//     // assert(5.0==dist(3,0,0,4));
//     printf("all is good!");

//     printf("%f", dist(x_1,y_1,x_2,y_2));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// #include <assert.h>

// float dist(int x_1, int y_1, int x_2, int y_2){
//     return sqrt((x_2-x_1)*(x_2-x_1)+(y_2-y_1)*(y_2-y_1));
// }

// float area(int x_1, int y_1, int x_2, int y_2, int x_3, int y_3){
//     double side_a, side_b, side_c, p;
//     side_a=dist(x_1,y_1,x_2,y_2);
//     side_b=dist(x_2,y_2, x_3,y_3);
//     side_c=dist(x_1,y_1,x_3,y_3);
//     p=(side_a+side_b+side_c)/2;
//     return sqrt(p*(p-side_a)*(p-side_b)*(p-side_c));

// }

// int main(void){
//     int x_1, y_1, x_2, y_2, x_3, y_3;
//     scanf("%d%d%d%d%d%d", &x_1, &y_1, &x_2, &y_2, &x_3, &y_3);

//     // assert(6.000==area(3,0,0,4,0,0));
//     // assert(6.000==area(0,4,3,0,0,0));
//     // assert(20.000==area(0,1,0,5,10,2));
//     // assert(4.500==area(3,0,0,4,0,1));
//     // assert(6.000==area(3,0,0,4,0,0));
//     // printf("all is good!");

//     printf("%.3f",area(x_1,y_1,x_2,y_2,x_3,y_3));
//     return 0;
// }

// #include <stdio.h>

// void print_revers(int x)
// {
//     printf("%d%d%d%d%d%d", x % 10, x / 10 % 10, x / 100 % 10, x / 1000 % 10, x / 10000 % 10, x / 100000 % 10);
// }

// int main(void)
// {
//     int x;
//     scanf("%d", &x);
//     print_revers(x);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     // int x;
//     char x;
//     printf("%zd\n", sizeof x);      // 4 в моей системе и на repl.it
//     printf("%zd\n", sizeof(1 + 2)); // 4 в моей системе и на repl.it
//     printf("%zd\n", sizeof 3.5);    // 8 в моей системе и на repl.it
//     printf("%zd\n", sizeof(char));  // 1 всегда
//     printf("%zd\n", sizeof(&x));

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int x;
//     int * px = &x;
//     scanf("%d", px);    // тут & не нужен, в px указывает на переменную типа int
//     printf("%d\n", x+1);
//     return 0;
// }

// #include <stdio.h>

// int x = 5;

// void foo()
// {
//     x = x + 1;
// }

// int main()
// {
//     foo();
//     foo();
//     printf("%d\n", x);
//     return 0;
// }

// #include <stdio.h>

// void foo()
// {
//     static int x; // неявная инициализация
//     x = x + 1;
//     printf("%d ", x);
// }

// int main()
// {
//     foo();
//     foo();
//     return 0;
// }

// #include <stdio.h>
// #define time2min(h, m) ((h) * 60 + (m))

// int main(void)
// {
//     int h, m, mm;
//     scanf("%d:%d", &h, &m);

//     mm = time2min(h, m);
//     printf("%d\n", mm);

//     mm = time2min(h, m) * 2;
//     printf("%d\n", mm);

//     mm = time2min(h + 1, m + 5);
//     printf("%d\n", mm);
//     return 0;
// }

// #include <stdio.h>
// #define min2time(mm, h, m) ((h) = (mm) / 60 % 24, (m) = (mm) % 60)

// int main(void)
// {
//     int h, m, mm;
//     scanf("%d", &mm);

//     min2time(mm, h, m);
//     printf("%02d:%02d\n", h, m);

//     min2time(mm + 65, h, m);
//     printf("%02d:%02d\n", h, m);
//     return 0;
// }