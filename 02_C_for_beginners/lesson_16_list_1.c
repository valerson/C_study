#include <stdio.h>
#include <stdlib.h>

typedef int Data;

struct Node
{
    Data val;          // данные, которые хранятся в одном элементе
    struct Node *next; // указатель на следующий элемент списка
};

typedef struct Node *List;

List list_create();
void list_push(List *plist, Data x);
Data list_pop(List *plist);
Data list_get(List list);
void list_print(List list);
int list_size(List list);
int list_is_empty(List list);
void list_clear(List *plist);

int main()
{
    List list = list_create();
    list_print(list); // пустая строка

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

    return 0;
}

List list_create()
{
    List temp = malloc(sizeof(struct Node));
    temp->next = NULL;
    // temp->val = 0;
    return temp;
}

void list_print(List list)
{
    if (list == NULL)
    {
        printf("\n");
    }
    else
    {
        List p = list;
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

int list_is_empty(List list)
{
    int flag = 1, count = 0;
    List p = list;
    if (p != NULL)
    {
        while (p->next != NULL)
        {
            count++;
            p = p->next;
        }
        if (count != 0)
        {
            flag = 0;
        }
    }
    return flag;
}

int list_size(List list)
{
    int count = 0;
    List p = list;
    if (p != NULL)
    {
        while (p->next != NULL)
        {
            count++;
            p = p->next;
        }
    }
    return count;
}

void list_push(List *plist, Data x)
{
    List p = list_create();
    p->val = x;
    p->next = *plist;
    *plist = p;
}

Data list_pop(List *plist)
{
    List p = *plist;   // Сохраняем указатель на текущий узел
    Data res = p->val; // Сохраняем значение узла

    *plist = p->next; // Обновляем указатель на следующий узел
    free(p);

    return res;
}

Data list_get(List list)
{
    Data res;
    res = list->val;
    return res;
}

void list_clear(List *plist)
{
    List p = *plist;
    while (p != NULL)
    {
        List next = p->next;
        free(p);
        p = next;
    }

    *plist = NULL;
}