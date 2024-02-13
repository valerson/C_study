// typedef unsigned char Age;              // тип дл€ хранени€ возраста человека в годах
// typedef unsigned long long int llu;     // просто надоело писать длинные слова

// #include <stdio.h>

// typedef struct Circle
// {
//     int x;
//     int y;
//     double r;
// } Circle;

// Circle zoom(Circle c, int k)
// {
//     Circle res = c;
//     res.r *= k;
//     return res;
// }

// int main(void)
// {
//     Circle c = {1, 2, 3};
//     Circle z = zoom(c, 5);
//     printf("%.0lf\n", z.r);
//     return 0;
// }

// #include <stdio.h>

// // объ€вили новый тип данных struct Segment
// // 1D отрезок
// struct Segment {
//     int start;    // один конец отрезка
//     int finish;   // другой конец отрезка
// };

// int main()
// {
//     struct Segment a = {-4, 7}, b;
//     b.start = 6;
//     b.finish = 0;

//                             // распечатаем эти отрезки:
//     printf("a = [%d, %d]\n", a.start, a.finish);
//     printf("b = [%d, %d]\n", b.start, b.finish);

//     struct Segment m;
//     scanf("%d", &m.start);  // читаем
//     scanf("%d", &m.finish);
//                             // печатаем
//     printf("m = [%d, %d]\n", m.start, m.finish);

//     return 0;
// }

// #include <stdio.h>

// // ќбъ€вл€ем новый тип данных struct Time:
// struct Time
// {
//     int h; // часы
//     int m; // минуты
// };

// void print_time(struct Time t); // печать hh:mm

// int time2min(struct Time t);                     // h, m -> mm
// struct Time min2time(int mm);                    // mm -> h, m
// struct Time add(struct Time t1, struct Time t2); // t1 + t2

// int main()
// {
//     struct Time t1 = {22, 55};
//     struct Time dt = {2, 7};
//     struct Time t2,
//         expected_res = {1, 2};

//     print_time(t1);
//     print_time(dt);

//     t2 = add(t1, dt);
//     print_time(t2);

//     return 0;
// }

// // печать hh:mm
// void print_time(struct Time t)
// {
//     printf("%02d:%02d\n", t.h, t.m);
// }

// // h, m -> mm
// int time2min(struct Time t)
// {
//     int res;
//     res = t.h * 60 + t.m;
//     return res;
// }

// // mm -> h, m
// struct Time min2time(int mm)
// {
//     struct Time res;
//     res.m = mm % 60;
//     res.h = mm / 60 % 24;
//     return res;
// }

// // t1 + t2
// struct Time add(struct Time t1, struct Time t2)
// {
//     int mmres = time2min(t1) + time2min(t2);
//     struct Time res = min2time(mmres);
//     return res;
// }

// int read_int()
// {
//     int res;
//     scanf("%d", &res);
//     return res;
// }
// void scan_int(int *p)
// {
//     scanf("%d", p); // p уже указатель, не нужно &
// }
// int main()
// {
//     int x, y;
//     x = read_int();
//     scan_int(&y);
//     printf("x=%d y=%d\n", x, y);

//     return 0;
// }

// void printTime(struct Time t)
// {
//     printf("%02d:%02d\n", t.h, t.m);
// }
// struct Time read_Time()
// {
//     struct Time res;
//     scanf("%d:%d", &res.h, &res.m);
//     return res;
// }
// void scan_Time(struct Time * p)
// {
//     scanf("%d:%d", &p->h, &p->m);     // ” ј«ј“≈Ћ№ на поле h, нужно &
// }
// int main()
// {
//     struct Time t1, t2;
//     t1 = read_Time();
//     scan_Time(&t2);

//     printTime(t1);
//     printTime(t2);

//     return 0;
// }
