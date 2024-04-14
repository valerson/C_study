// #include <stdio.h>

// #define N 8
// typedef int Data;

// typedef struct
// {
//     Data a[N];      // место для данных
//     unsigned int n; // сколько данных хранится
// } Stack;

// void stack_init(Stack *s);
// void stack_push(Stack *s, Data x);
// Data stack_pop(Stack *s);
// Data stack_get(Stack *s);
// void stack_clear(Stack *s);
// void stack_print(Stack *s);
// int stack_size(Stack *s);
// int stack_is_empty(Stack *s);
// int stack_is_full(Stack *s);

// int main()
// {
//     Stack stack;        // создаем стек
//     Stack *st = &stack; // указатель на созданный стек

//     stack_init(st);
//     printf("empty: %s\n", stack_is_empty(st) ? "YES" : "NO"); // YES
//     printf("full: %s\n", stack_is_full(st) ? "YES" : "NO");   // NO
//     stack_print(st);                                          // ничего не печатается

//     Data test[] = {5, 17, -3, 0, 1, 2, 3, 4};

//     Data d;
//     // тесты для push
//     for (int i = 0; i < N; i++)
//     {
//         d = test[i];
//         printf("push %d :", d);
//         stack_push(st, d);
//         stack_print(st);
//         printf("empty: %s\n", stack_is_empty(st) ? "YES" : "NO"); // NO
//     }

//     printf("full: %s\n", stack_is_full(st) ? "YES" : "NO"); // YES

//     // тесты для pop
//     for (int i = 0; i < N; i++)
//     {
//         d = stack_pop(st);
//         printf("pop %d :", d);
//         stack_print(st); // pop -3: 5 17
//     }
//     printf("empty: %s\n", stack_is_empty(st) ? "YES" : "NO"); // YES
//     printf("full: %s\n", stack_is_full(st) ? "YES" : "NO");   // NO

//     return 0;
// }

// void stack_init(Stack *s)
// {
//     s->n = 0;
// }

// void stack_push(Stack *s, Data x)
// {
//     s->a[s->n] = x;
//     s->n++;
// }

// Data stack_pop(Stack *s)
// {
//     Data result;
//     result = s->a[s->n - 1];
//     s->n--;
//     return result;
// }

// Data stack_get(Stack *s)
// {
//     Data result;
//     result = s->a[s->n - 1];
//     return result;
// }

// void stack_clear(Stack *s)
// {
//     s->n = 0;
// }

// void stack_print(Stack *s)
// {
//     for (unsigned int i = 0; i < s->n; i++)
//     {
//         printf("%d", s->a[i]);
//         if (i < N - 1)
//         {
//             printf(" ");
//         }
//     }
//     printf("\n");
// }

// int stack_size(Stack *s)
// {
//     return s->n - 1;
// }

// int stack_is_empty(Stack *s)
// {
//     int flag = 1;
//     if (s->n != 0)
//     {
//         flag = 0;
//     }
//     return flag;
// }

// int stack_is_full(Stack *s)
// {
//     int flag = 1;
//     if (s->n != N)
//     {
//         flag = 0;
//     }
//     return flag;
// }

#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct
{
    int n;
    int size;
    Data *a;
} Stack;

Stack *stack_create(int size);
void stack_push(Stack *s, Data x);
Data stack_pop(Stack *s);
Data stack_get(Stack *s);
void stack_print(Stack *s);
int stack_size(Stack *s);
int stack_is_empty(Stack *s);
void stack_clear(Stack *s);
Stack *stack_destroy(Stack *s);
Stack *stack_create(int size);

int main()
{
    Stack *sp = stack_create(3);

    printf("is_empty=%d\n", stack_is_empty(sp)); // is_empty=1
    printf("size=%d\n", stack_size(sp));         // size=0

    stack_push(sp, 5);
    stack_push(sp, 19);
    stack_push(sp, -2);
    stack_print(sp); // 5 19 -2

    stack_push(sp, 27);
    stack_print(sp); // 5 19 -2 27

    printf("is_empty=%d\n", stack_is_empty(sp)); // is_empty=0
    printf("size=%d\n", stack_size(sp));         // size=4

    Data x = stack_pop(sp);
    printf("x=%d\n", x); // x=27

    x = stack_pop(sp);
    printf("x=%d\n", x); // x=-2

    stack_print(sp); // 5 19

    while (!stack_is_empty(sp))
    {
        x = stack_pop(sp);
        printf("x=%d\n", x);
        stack_print(sp);
    }
    // x=19
    // 5
    // x=5
    // пустая строка

    if (NULL == stack_destroy(sp))
    {
        printf("end\n");
        // end
    }

    return 0;
}

Stack *stack_create(int size)
{
    Stack *st = malloc(size * sizeof(Stack));
    st->size = 0;
    st->n = 0;
    st->a = NULL;
}

void stack_push(Stack *s, Data x)
{
    if (s->size == s->n)
    {
        s->size += 1;
        s->a = realloc(s->a, s->size * sizeof(Data));
    }
    s->a[s->n] = x;
    s->n++;
}

Data stack_pop(Stack *s)
{
    Data res = s->a[s->n - 1];
    s->n--;
    s->size--;
    return res;
}

Data stack_get(Stack *s)
{
    return s->a[s->n - 1];
}

void stack_print(Stack *s)
{
    for (int i = 0; i < s->n; i++)
    {
        printf("%d", s->a[i]);
        if (i < s->n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
}

int stack_size(Stack *s)
{
    return s->size;
}

int stack_is_empty(Stack *s)
{
    int flag = 0;
    if (s->n == 0)
    {
        flag = 1;
    }
    return flag;
}

void stack_clear(Stack *s)
{
    if (s->a != NULL)
    {
        free(s->a);
        s->a = NULL; // Установка указателя в NULL после освобождения памяти
    }
    s->n = 0;
    s->size = 0;
}

Stack *stack_destroy(Stack *s)
{
    if (s->a != NULL)
    {
        stack_clear(s);
    }
    free(s);
    return NULL;
}
