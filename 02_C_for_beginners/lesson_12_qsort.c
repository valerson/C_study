// qsort_1: cmp_int
//  #include <stdio.h>

// int cmp_int(const void * p1, const void * p2);

// int main()
// {
//     int x, y, res;
//     scanf("%d%d", &x, &y);
//     res = cmp_int(&x, &y);

//     if (res < 0)
//         res = '<';
//     else if (res > 0)
//         res = '>';
//     else
//         res = '=';

//     printf("%c\n", res);

//     return 0;
// }

// int cmp_int(const void * p1, const void * p2)
// {
//     const int *pp1 = (const int *)p1;
//     const int *pp2 = (const int *)p2;

//     return (*pp1>*pp2) - (*pp1<*pp2);
// }

// qsort_2: по возрастанию
//  #include <stdio.h>
//  #include <stdlib.h>

// int sortirovka(const void *a, const void *b);

// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     int *m=malloc(n*sizeof(int));

//     for (int i=0; i<n; i+=1)
//     {
//         scanf("%d", &m[i]);
//     }

//     qsort(m, n, sizeof(int), sortirovka);

//     for (int i=0; i<n; i+=1)
//     {
//         printf("%d ", m[i]);
//     }
//     free(m);
//     return 0;
// }

// int sortirovka(const void *a, const void *b)
// {
//     int x = *(int *) a;
//     int y = *(int *) b;
//     return (x > y) - (x < y); // если результат вычитания равен 0, то числа равны, < 0: x < y; > 0: x > y
// }

// //qsort_3: по возрастанию
// #include <stdio.h>
// #include <stdlib.h>

// int sortirovka(const void *a, const void *b);

// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     int *m=malloc(n*sizeof(int));

//     for (int i=0; i<n; i+=1)
//     {
//         scanf("%d", &m[i]);
//     }

//     qsort(m, n, sizeof(int), sortirovka);

//     for (int i=0; i<n; i+=1)
//     {
//         printf("%d ", m[i]);
//     }
//     free(m);
//     return 0;
// }

// int sortirovka(const void *a, const void *b)
// {
//     int x = *(int *) a;
//     int y = *(int *) b;
//     return (x<y)-(x>y);
// }

// //qsort_4: float
// #include <stdio.h>
// #include <stdlib.h>

// int sortirovka(const void *a, const void *b);

// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     float *m=malloc(n*sizeof(float));

//     for (int i=0; i<n; i+=1)
//     {
//         scanf("%f", &m[i]);
//     }

//     qsort(m, n, sizeof(float), sortirovka);

//     for (int i=0; i<n; i+=1)
//     {
//         printf("%.2f ", m[i]);
//     }
//     free(m);
//     return 0;
// }
// int sortirovka(const void * a, const void * b)
// {
//     float x = * (float *) a;
//     float y = * (float *) b;
//     return (x>y)-(x<y);
// }

// // qsort_5: string
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int sortirovka(const void *a, const void *b);

// int main(void)
// {
//     char m[1001];

//     // считали и записали массив до точки
//     int i = 0;
//     do
//     {
//         scanf("%c", &m[i]);
//         i += 1;
//     } while (m[i - 1] != '.');
//     m[i - 1] = '\0';

//     // сортируем
//     qsort(m, strlen(m), sizeof(char), sortirovka);

//     printf("%s.", m);

//     return 0;
// }
// int sortirovka(const void *a, const void *b)
// {
//     char x = *(char *)a;
//     char y = *(char *)b;
//     return (x > y) - (x < y);
// }

// qsort_6:
// #include <stdio.h>
// #include <stdlib.h>

// int sortirovka(const void *a, const void *b);

// int main(void)
// {
//     int n;
//     int m[1001];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i += 1)
//         scanf("%d", &m[i]);

//     qsort(m, n, sizeof(int), sortirovka);

//     for (int i = 0; i < n; i += 1)
//         printf("%d ", m[i]);
//     return 0;
// }

// int sortirovka(const void *a, const void *b)
// {
//     int x = *(int *)a;
//     int y = *(int *)b;

//     while (x != 0 || y != 0)
//     {
//         if (x % 10 != y % 10)
//         {
//             return ((x % 10 > y % 10) - (x % 10 < y % 10));
//         }
//         else
//         {
//             x /= 10;
//             y /= 10;
//         }
//     }
// }

// qsort_7:
// #include <stdio.h>
// #include <stdlib.h>

// int sortirovka(const void *a, const void *b);

// int main(void)
// {
//     int n, j = 0;
//     scanf("%d", &n);
//     int m[n];
//     int m_even[n];

//     // делаем массив основной и массив четных чисел
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &m[i]);
//         if (m[i] % 2 == 0)
//         {
//             m_even[j] = m[i];
//             j += 1;
//         }
//     }
//     // сортируем массив четных чисел
//     qsort(m_even, j, sizeof(int), sortirovka);

//     // меняем основной массив меняя все четные на четные по возростанию и сразу печатаем
//     for (int i = 0, j = 0; i < n; i += 1)
//     {
//         if (m[i] % 2 == 0)
//         {
//             m[i] = m_even[j];
//             j += 1;
//         }
//         printf("%d ", m[i]);
//     }

//     return 0;
// }

// int sortirovka(const void *a, const void *b)
// {
//     int x = *(int *)a;
//     int y = *(int *)b;
//     return (x > y) - (x < y);
// }

// qsort_8: сравнение двух точек
// #include <stdio.h>
// #include <math.h>
// struct Point
// {
//     int x;
//     int y;
// };

// int cmp_Point(const void *p1, const void *p2);

// int main(void)
// {
//     struct Point a, b;
//     scanf("%d%d", &a.x, &a.y);
//     scanf("%d%d", &b.x, &b.y);

//     int res = cmp_Point(&a, &b);

//     if (res < 0)
//         printf("<\n");
//     else if (res > 0)
//         printf(">\n");
//     else
//         printf("=\n");

//     return 0;
// }

// int cmp_Point(const void *p1, const void *p2)
// {
//     struct Point a = *(struct Point *)p1;
//     struct Point b = *(struct Point *)p2;
//     double x = sqrt((double)a.x * a.x + (double)a.y * a.y);
//     double y = sqrt((double)b.x * b.x + (double)b.y * b.y);
//     printf("x= %lf, y= %lf\n", x, y);
//     return (x > y) - (x < y);
// }

// qsort_9: сортировка точек
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Point
{
    int x;
    int y;
    // double distance;
};

int sortirovka(const void *a, const void *b);

int main(void)
{
    int n;
    scanf("%d", &n);
    struct Point m[1001];
    double distance;

    // заполнили массив структурами x,y, дистанция до 0:0ю.
    for (int i = 0; i < n; i += 1)
    {
        scanf("%d%d", &m[i].x, &m[i].y);
        // m[i].distance = sqrt((double)m[i].x * m[i].x + (double)m[i].y * m[i].y);
    }

    // печатать до сортировки
    // for (int i = 0; i < n; i += 1)
    // {
    //     printf("%d %d ", m[i].x, m[i].y);
    //     distance = sqrt((double)m[i].x * m[i].x + (double)m[i].y * m[i].y);
    //     printf("%.2lf\n", distance);
    // }
    // printf("\n");

    // сортирнули массив
    qsort(m, n, sizeof(struct Point), sortirovka);

    // печатать
    for (int i = 0; i < n; i += 1)
    {
        printf("%d %d\n", m[i].x, m[i].y);
        distance = sqrt((double)m[i].x * m[i].x + (double)m[i].y * m[i].y);
        // printf("%.2lf\n", distance);
    }
    return 0;
}

int sortirovka(const void *a, const void *b)
{
    struct Point x = *(struct Point *)a;
    struct Point y = *(struct Point *)b;
    double distance_x = sqrt((double)x.x * x.x + (double)x.y * x.y);
    double distance_y = sqrt((double)y.x * y.x + (double)y.y * y.y);
    if (distance_x != distance_y)
    {
        // Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
        return (distance_x > distance_y) - (distance_x < distance_y);
    }
    else
    {
        // Если две точки находятся на одном расстоянии от начала координат, то сначала выведите точку с меньшим значением координаты х.
        if (x.x != y.x)
        {
            return (x.x > y.x) - (x.x < y.x);
        }
        // Если и совпали и расстояния, и значения х-координаты, сначала выведите точку с меньшим значением у-координаты.
        else
        {
            return (x.y > y.y) - (x.y < y.y);
        }
    }
}