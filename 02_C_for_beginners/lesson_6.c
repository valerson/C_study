// #include <stdio.h>

// int main()
// {
//     float x,y;
//     scanf("%f%f", &x,&y);
//     (y<=(3+x))&&(y<=3-x)&&(y>=-2)? printf("YES"):printf("NO");
    
    
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char a1,a2;
//     int b1,b2;
//     scanf("%c%d-%c%d", &a1,&b1,&a2,&b2);
//     printf("%c%d-%c%d\n", a1,b1,a2,b2);
//     (a1==a2)||(b1==b2)? printf("YES"):printf("NO");
//     return 0;
// }

// #include <stdio.h>

// void sort2(int * a, int * b);

// int main()
// {
//     int x, y;
//     scanf("%d%d", &x, &y);
//     sort2(&x, &y);
//     printf("%d %d\n", x, y);
//     return 0;
// }

// void sort2(int * a, int * b){
//     int temp;
//     if (*a>*b){
//         temp=*a;
//         *a=*b;
//         *b=temp;
//     }
// }

// #include <stdio.h>

// void sort2(int * a, int * b);
// void sort3(int * x, int * y, int * z);

// int main()
// {
//     int x, y, z;
//     scanf("%d%d%d", &x, &y, &z);
//     sort3(&x, &y, &z);
//     printf("%d %d %d\n", x, y, z);
//     return 0;
// }

// void sort2(int * a, int * b){
//     int temp;
//     if (*a>*b){
//         temp=*a;
//         *a=*b;
//         *b=temp;
//     }
// }
// void sort3(int * x, int * y, int * z){
//     if (*x<=*z && *z<*y){
//         sort2(y,z);
//         }
//     if (*y<*x && *y<=*z){
//         sort2(x,y);
//         sort2(y,z);
//     }
//     if (*z<*x && *z<*y){
//         sort2(x,z);
//         sort2(y,z);
//     }
// }

// #include <stdio.h>
// int main(void){
//     int w,h,a,b,c;
//     scanf("%d%d%d%d%d", &w,&h,&a,&b,&c);
//     (h>=b && w>=c)? printf("YES"):printf("NO");
//     return 0;
// }

// #include <stdio.h>
// int triangle_len_type(int a, int b, int c);
// int main(void){
//     int a,b,c;
//     scanf("%d%d%d", &a,&b,&c);
//     printf("%d", triangle_len_type(a,b,c));
//     return 0;
// }
// int triangle_len_type(int a, int b, int c){
//     if (a+b<=c || a+c <=b || b+c<=a) return -1;
//     else {
//         if (a==b & a==c) return 2;
//         if ((a==c && a!=b) || (a==b && a!=c) || (b==c && b!=1)) return 1;
//         if (a!=c && a!=b) return 0;
//     }
// }

// #include <stdio.h>
// int delete(int a){
//     if (a%15==0)return 0;
//     else{
//         if (a%3==0)return 1;
//         if (a%5==0)return 1;
//         return 0;
//     }
// }
// int main(void){
//     int a;
//     scanf("%d", &a);
//     delete(a)==1? printf("YES"):printf("NO");
//     return 0;
// }

// #include <stdio.h>

// struct Point {
//     int x;
//     int y;
// };

// struct Rect {
//     struct Point lt; // левая верхняя вершина
//     struct Point rb; // правая нижняя вершина
// };

// //опреедление площади прямоугольника
// int area(struct Rect temp);

// //печать результата
// void printResult(struct Rect temp, int area);

// int main(void){
//     int x1,y1,x2,y2;
//     int a,b;
//     scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
//     struct Rect box1={{x1,y1},{x2,y2}};
    
//     scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
//     struct Rect box2={{x1,y1},{x2,y2}};
//     a=area(box1);
//     b=area(box2);
//     printResult(box1,a);
//     printResult(box2,b);
//     a>=b? printf("%d",a):printf("%d",b);
//     return 0;
// }

// //опреедление площади прямоугольника
// int area(struct Rect temp){
//     int h=temp.lt.y-temp.rb.y;
//     int w=temp.rb.x-temp.lt.x;
//     return h*w;
// }

// //печать результата
// void printResult(struct Rect temp, int area){
//     printf("%d %d %d %d %d\n", temp.lt.x, temp.lt.y, temp.rb.x, temp.rb.y, area);
// }

// struct Rect * max(struct Rect * pa, struct Rect * pb){
//     int h_a=pa->lt.y-pa->rb.y;
//     int w_a=pa->rb.x-pa->lt.x;
//     int area_a=h_a*w_a;

//     int h_b=pb->lt.y-pb->rb.y;
//     int w_b=pb->rb.x-pb->lt.x;
//     int area_b=h_b*w_b;

//     if (area_a>=area_b) return pa;
//     else return pb;
// }

// struct Point {
//     int x;
//     int y;
// };
// struct Rect {
//     struct Point lt; // левая верхняя вершина
//     struct Point rb; // правая нижняя вершина
// };

// int is_crossed(struct Rect a, struct Rect b){
//     if (a.lt.x <= b.rb.x && a.rb.x >= b.lt.x && a.lt.y >= b.rb.y && a.rb.y <= b.lt.y) {
//         return 1; 
//     }
//     return 0; 
// }

// #include <stdio.h>
// #define MAXIMUM(a, b) a>=b? a:b
// #define MINIMUM(a, b) a<=b? a:b

// struct Point {
//     int x;
//     int y;
// };
// struct Rect {
//     struct Point lt; // левая верхняя вершина
//     struct Point rb; // правая нижняя вершина
// };

// int is_crossed(struct Rect a, struct Rect b){
//     if (a.lt.x <= b.rb.x && a.rb.x >= b.lt.x && a.lt.y >= b.rb.y && a.rb.y <= b.lt.y) {
//         return 1; 
//     }
//     return 0; 
// }

// struct Rect intersection(struct Rect a, struct Rect b){
//     struct Rect temp;
//     temp.lt.x=MAXIMUM(a.lt.x, b.lt.x);
//     temp.lt.y=MINIMUM(a.lt.y, b.lt.y);
//     temp.rb.x=MINIMUM(a.rb.x, b.rb.x);
//     temp.rb.y=MAXIMUM(a.rb.y, b.rb.y);
//     return temp;
// }

// int main(void){

//     int x1,y1,x2,y2;
//     scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
//     struct Rect box1={{x1,y1},{x2,y2}}, temp;
    
//     scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
//     struct Rect box2={{x1,y1},{x2,y2}};
//     if (is_crossed(box1, box2))
//         temp = intersection(box1,box2);
//     printf("%d %d %d %d\n", temp.lt.x,temp.lt.y, temp.rb.x, temp.rb.y);

//     return 0;
// }

#include <stdio.h>

typedef struct
{
    int yy; // год
    char mm; // месяц
    char dd; // день
}Data;

typedef struct
{
    int yy; // год
    char season; // время года (зима - 0, весна - 1, лето - 2, осень - 3)
    int day; // день от начала текущего времени года
}Season;

// получает параметры даты с консоли (три целых числа через тире:
// YYYY-MM-DD)
// Например, 2020-12-13
Data getData();

// Печатает дату в формате: YYYY-MM-DD завершая переносом строки (\n)
void printData(Data);

// конвертирует дату в формат Season и возвращает это значение
// зима с 1 декабря по конец февраля, весна - с 1 марта по 31 мая, лето - с 1 июня по 31 августа,
// осень - с 1 сентября по 30 ноября
Season convToSeas(Data);

//  печать времени года в формате: YYYY-SS-DD (SS - номер времени года,
// DD - день от начала времени года, завершая переносом строки
void printSeas(Season);

int main(void){
    Data a=getData();
    printData(a);
    Season b=convToSeas(a);
    printSeas(b);
    return 0;
}

// получает параметры даты с консоли (три целых числа через тире:
// YYYY-MM-DD)
// Например, 2020-12-13
Data getData(){
    Data temp;
    scanf("%d-%d-%d", &temp.yy, &temp.mm, &temp.dd);
    return temp;
}

// Печатает дату в формате: YYYY-MM-DD завершая переносом строки (\n)
void printData(Data a){
    printf("%04d-%02d-%02d\n", a.yy, a.mm, a.dd);
}

// конвертирует дату в формат Season и возвращает это значение
// зима с 1 декабря по конец февраля, весна - с 1 марта по 31 мая, лето - с 1 июня по 31 августа,
// осень - с 1 сентября по 30 ноября
Season convToSeas(Data a){
    Season temp;
    temp.yy=a.yy;

    switch (a.mm){
    case 1: {temp.season=0; temp.day=a.dd+31; break;}
    case 2: {temp.season=0; temp.day=a.dd+31+31; break;}
    case 3: {temp.season=1; temp.day=a.dd; break;}
    case 4: {temp.season=1; temp.day=a.dd+31; break;}
    case 5: {temp.season=1; temp.day=a.dd+31+30; break;}
    case 6: {temp.season=2; temp.day=a.dd; break;}
    case 7: {temp.season=2; temp.day=a.dd+30; break;}
    case 8: {temp.season=2; temp.day=a.dd+30+31; break;}
    case 9: {temp.season=3; temp.day=a.dd; break;}
    case 10: {temp.season=3; temp.day=a.dd+30; break;}
    case 11: {temp.season=3; temp.day=a.dd+30+31; break;}
    case 12: {temp.season=0; temp.day=a.dd; break;}
    default: break;}
    return temp;
}

//  печать времени года в формате: YYYY-SS-DD (SS - номер времени года,
// DD - день от начала времени года, завершая переносом строки
void printSeas(Season a){
    printf("%04d-%02d-%02d\n", a.yy, a.season, a.day);
}