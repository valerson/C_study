#include <stdio.h>
#include <stdlib.h>

typedef int Data;
struct Node
{
    Data val;          // данные, которые хранятся в одном элементе
    struct Node *next; // указатель на следующий элемент списка
};

struct Node *list_create();
void list_push(struct Node **plist, Data x);
Data list_pop(struct Node **plist);
Data list_get(struct Node *list);
void list_print(struct Node *list);
int list_size(struct Node *list);
void list_clear(struct Node **plist);
int list_is_empty(struct Node *list);

int main()
{
    struct Node *list = list_create();
    list_print(list);                               // пустая строка
    printf("is_empty = %d\n", list_is_empty(list)); // is_empty = 1
    printf("size = %d\n", list_size(list));         // size = 0

    list_push(&list, 21);
    list_print(list); // 21
    list_push(&list, 17);
    list_print(list); // 17 21
    list_push(&list, 3);
    list_print(list);                               // 3 17 21
    printf("is_empty = %d\n", list_is_empty(list)); // is_empty = 0
    printf("size = %d\n", list_size(list));         // size = 3

    Data x = list_pop(&list);
    printf("pop %d\n", x);                  // pop 3
    list_print(list);                       // 17 21
    printf("size = %d\n", list_size(list)); // size = 2

    list_clear(&list);
    list_print(list);                               // пустая строка
    printf("is_empty = %d\n", list_is_empty(list)); // is_empty = 1
    printf("size = %d\n", list_size(list));         // size = 0

    // free(list);
    return 0;
}

struct Node *list_create()
{
    struct Node *p = malloc(sizeof(struct Node));
    p->next = NULL;
    return p;
}

void list_push(struct Node **plist, Data x)
{
    struct Node *p = list_create();
    p->val = x;
    p->next = *plist;
    *plist = p;
}

Data list_pop(struct Node **plist)
{
    struct Node *p = *plist;
    Data res = p->val;

    *plist = p->next;
    free(p);

    return res;
}

Data list_get(struct Node *list)
{
    struct Node *p = list;
    return p->val;
}

void list_print(struct Node *list)
{
    struct Node *p = list;
    if (p == NULL)
    {
        printf("\n");
    }
    else
    {
        while (p->next != NULL)
        {
            printf("%d", p->val);
            p = p->next;
            if (p->next != NULL)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int list_size(struct Node *list)
{
    int count = 0;
    struct Node *p = list;
    if (p == NULL)
    {
        return 0;
    }
    else
    {
        while (p->next != NULL)
        {
            count++;
            p = p->next;
        }
    }
    return count;
}

void list_clear(struct Node **plist)
{
    struct Node *p = *plist;
    while (p != NULL)
    {
        struct Node *next = p->next;
        free(p);
        p = next;
    }
    *plist = NULL;
}

int list_is_empty(struct Node *list)
{
    if (list == NULL)
    {
        return 1;
    }
    else
    {
        return list->next == NULL;
    }
}