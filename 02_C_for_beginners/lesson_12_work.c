//qsort_1: cmp_int
// #include <stdio.h>

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

//qsort_2: �� �����������
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
//     return (x > y) - (x < y); // ���� ��������� ��������� ����� 0, �� ����� �����, < 0: x < y; > 0: x > y
// }

//qsort_3: �� �����������
#include <stdio.h>
#include <stdlib.h>

int sortirovka(const void *a, const void *b);

int main(void)
{
    int n;
    scanf("%d",&n);
    int *m=malloc(n*sizeof(int));
    
    for (int i=0; i<n; i+=1)
    {
        scanf("%d", &m[i]);
    }
    
    qsort(m, n, sizeof(int), sortirovka);

    for (int i=0; i<n; i+=1)
    {
        printf("%d ", m[i]);
    }
    free(m);
    return 0;
}

int sortirovka(const void *a, const void *b)
{
    int x = *(int *) a;
    int y = *(int *) b;
    return (x<y)-(x>y);
}