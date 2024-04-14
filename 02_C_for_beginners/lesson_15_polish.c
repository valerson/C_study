// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>

// typedef struct
// {
//     int size;
//     int n;
//     int *m;
// } Stack;

// Stack *create();
// void push(Stack *s, char x);
// char pop(Stack *s);

// void destroy(Stack *s);
// void switch_case(char text, Stack *s);

// int main()
// {
//     Stack *s = create();

//     char text[2048];
//     while (scanf("%s", text) == 1 && text[0] != '=')
//     {
//         if (strlen(text) == 1 && (text[0] >= '0' && text[0] <= '9'))
//         {
//             push(s, text[0] - '0');
//         }
//         else if (strlen(text) != 1)
//         {
//             int n = strlen(text);
//             int res = 0;
//             for (int i = n - 1, j = 0; i >= 0; i--, j++)
//             {
//                 res += (text[j] - '0') * pow(10, i);
//             }
//             push(s, res);
//         }
//         else if (strlen(text) == 1 && text[0] < '0')
//         {
//             switch_case(text[0], s);
//         }
//     }

//     int x = 0;
//     x = pop(s);
//     printf("%d\n", x);

//     destroy(s);
//     return 0;
// }

// Stack *create()
// {
//     Stack *s = malloc(sizeof(Stack));
//     if (s == NULL)
//     {
//         printf("allocation memmory fail\n");
//         return NULL;
//     }
//     s->size = 1000;
//     s->n = 0;
//     s->m = malloc(sizeof(int) * s->size);
//     if (s->m == NULL)
//     {
//         printf("allocation memmory fail\n");
//         return NULL;
//     }
//     return s;
// }

// void push(Stack *s, char x)
// {
//     s->m[s->n] = x;
//     s->n++;
//     if (s->n == s->size)
//     {
//         s->size += 1000;
//         s->m = realloc(s->m, sizeof(int) * s->size);
//     }
// }

// char pop(Stack *s)
// {
//     char res;
//     res = s->m[s->n - 1];
//     s->n--;
//     return res;
// }

// void destroy(Stack *s)
// {
//     free(s->m);
//     free(s);
// }

// void switch_case(char text, Stack *s)
// {
//     switch (text)
//     {
//     case '+':
//     {
//         int a = pop(s);
//         int b = pop(s);
//         push(s, a + b);
//         break;
//     }
//     case '-':
//     {
//         int a = pop(s);
//         int b = pop(s);
//         push(s, b - a);
//         break;
//     }
//     case '*':
//     {
//         int a = pop(s);
//         int b = pop(s);
//         push(s, a * b);
//         break;
//     }

//     default:
//         break;
//     }
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct
{
    int size;
    int n;
    int *m;
} Stack;

Stack *create();
void push(Stack *s, char x);
char pop(Stack *s);

void destroy(Stack *s);
void switch_case(char text, Stack *s);

int main()
{
    Stack *s = create();

    char text;
    do
    {
        text = getchar();
        if (text >= '0' && text <= '1')
        {
            push(s, text - '0');
        }
        else
        {
            switch_case(text, s);
        }
    } while (text != '=');

    int x = 0;
    x = pop(s);
    printf("%d\n", x);

    destroy(s);
    return 0;
}

Stack *create()
{
    Stack *s = malloc(sizeof(Stack));
    if (s == NULL)
    {
        printf("allocation memmory fail\n");
        return NULL;
    }
    s->size = 1000;
    s->n = 0;
    s->m = malloc(sizeof(int) * s->size);
    if (s->m == NULL)
    {
        printf("allocation memmory fail\n");
        return NULL;
    }
    return s;
}

void push(Stack *s, char x)
{
    s->m[s->n] = x;
    s->n++;
    if (s->n == s->size)
    {
        s->size += 1000;
        s->m = realloc(s->m, sizeof(int) * s->size);
    }
}

char pop(Stack *s)
{
    char res;
    res = s->m[s->n - 1];
    s->n--;
    return res;
}

void destroy(Stack *s)
{
    free(s->m);
    free(s);
}

void switch_case(char text, Stack *s)
{
    switch (text)
    {
    case '&':
    {
        int a = pop(s);
        int b = pop(s);
        push(s, a & b);
        break;
    }
    case '!':
    {
        int a = pop(s);
        push(s, !a);
        break;
    }
    case '|':
    {
        int a = pop(s);
        int b = pop(s);
        push(s, a | b);
        break;
    }

    default:
        break;
    }
}