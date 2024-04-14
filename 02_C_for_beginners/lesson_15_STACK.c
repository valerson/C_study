#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int n;
    int size;
    char *m;
} Stack;

Stack *create();
void push(Stack *s, char x);
char pop(Stack *s);
int is_empty(Stack *s);
void destroy(Stack *s);

int main()
{

    Stack *s = create();
    char c, temp;
    int flag = 0;

    while ((c = getchar()) != EOF)
    {
        if (strchr("({[<", c) != NULL)
        {
            push(s, c);
        }
        else if (strchr(")}]>", c) != NULL && (!is_empty(s)))
        {
            temp = pop(s);
            if (c - temp != 1 && c - temp != 2)
            {
                flag = 1;
                break;
            }
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if ((c == EOF && is_empty(s)) && (!flag))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    destroy(s);
    return 0;
}

Stack *create()
{
    Stack *s = malloc(sizeof(Stack));
    if (s == NULL)
    {
        printf("ALARM ellocated memory is not done\n");
        return NULL;
    }
    s->n = 0;
    s->size = 1000;
    s->m = malloc(sizeof(char) * (s->size));
    if (s->m == NULL)
    {
        printf("ALARM ellocated memory is not done\n");
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
        s->m = realloc(s->m, sizeof(char) * (s->size));
    }
}

char pop(Stack *s)
{
    char result = s->m[s->n - 1];
    s->n--;
    return result;
}

int is_empty(Stack *s)
{
    return s->n == 0;
}

void destroy(Stack *s)
{
    free(s->m);
    free(s);
}
