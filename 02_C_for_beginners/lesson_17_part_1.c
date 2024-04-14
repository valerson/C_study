#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int Data;
struct Node
{
    struct Node *next;
    struct Node *prev;
    Data data;
};

void list_init(struct Node *list);                          //- инициализация пустого списка.
void list_insert(struct Node *list, struct Node *t);        //- вставляет элемент t после элемента list
void list_insert_before(struct Node *list, struct Node *t); //- вставляет элемент t перед элементом list
void list_remove(struct Node *t);                           //- удаляет элемент t из списка
void list_print(struct Node *list);                         // распечатывает через пробел числа, лежащие в списке.
                                                            // С самого первого до последнего. В конце переводит строку.
                                                            // Полезна для отладки прочих функций.
int list_is_empty(struct Node *list);                       // проверяет пустой это список или нет
void test_non_alloc(int n);                                 // тестирование функций без выделения памяти

void test_alloc(int n);
struct Node *list_push_front(struct Node *list, Data d); // выделяет память под новый элемент, содержащий данные d, и вставляет его в голову списка.
                                                         // Возвращает указатель на этот новый элемент или NULL, если произошла ошибка.
struct Node *list_push_back(struct Node *list, Data d);  // выделяет память под новый элемент, содержащий данные d, и вставляет его в хвост списка.
                                                         // Возвращает указатель на этот новый элемент или NULL, если произошла ошибка.
Data list_pop_front(struct Node *list);                  // удаляет голову списка, возвращает данные из удаленного узла.
Data list_pop_back(struct Node *list);                   // удаляет хвост списка, возвращает данные из удаленного узла.
Data list_delete(struct Node *t);                        // удаляет узел t из списка, возвращает данные из удаленного узла.
void list_clear(struct Node *list);                      // опустошает список, освобождая память. После этого можно опять добавлять элементы в список.

int main()
{
    // test_non_alloc(5);
    test_alloc(9);

    return 0;
}

void test_non_alloc(int n)
{
    struct Node *x = malloc(11 * sizeof(struct Node));
    struct Node *a = x + 10;

    list_init(a);
    assert(list_is_empty(a));
    if (n == 1)
        goto END;

    for (int i = 0; i < 10; i++)
    {
        x[i].data = i;
        list_insert(a, &x[i]);
    }
    list_print(a); // 9 8 7 6 5 4 3 2 1 0
    assert(!list_is_empty(a));
    if (n == 2)
        goto END;

    list_remove(&x[5]);
    list_print(a); // 9 8 7 6 4 3 2 1 0
    list_remove(&x[0]);
    list_print(a); // 9 8 7 6 4 3 2 1
    list_remove(&x[9]);
    list_print(a); // 8 7 6 4 3 2 1
    if (n == 3)
        goto END;

    list_insert_before(a, &x[0]);
    list_print(a); // 8 7 6 4 3 2 1 0
    list_insert(a, &x[9]);
    list_print(a); // 9 8 7 6 4 3 2 1 0
    list_insert(&x[6], &x[5]);
    list_print(a); // 9 8 7 6 5 4 3 2 1 0
    if (n == 4)
        goto END;

    while (!list_is_empty(a))
        list_remove(a->next);
    if (n == 5)
        goto END;

END:
    free(x);
}

void test_alloc(int n)
{
    struct Node a0, b0;
    struct Node *a = &a0;
    struct Node *b = &b0;

    list_init(a);
    list_init(b);

    int i;
    for (i = 0; i < 10; i++)
        list_push_back(a, i);
    list_print(a); // 0 1 2 3 4 5 6 7 8 9
    assert(list_is_empty(b));
    if (n == 6)
        goto END;

    for (i = 0; i < 10; i++)
        list_push_front(b, list_pop_back(a));
    list_print(b); // 0 1 2 3 4 5 6 7 8 9
    assert(list_is_empty(a));

    if (n == 7)
        goto END;

    for (i = 0; i < 10; i++)
    {
        list_push_front(a, i);
        list_pop_front(b);
    }
    list_print(a); // 9 8 7 6 5 4 3 2 1 0
    assert(list_is_empty(b));
    if (n == 8)
        goto END;

    for (i = 0; i < 10; i++)
        list_push_back(b, list_pop_front(a));
    list_print(b); // 9 8 7 6 5 4 3 2 1 0
    assert(list_is_empty(a));
    if (n == 9)
        goto END;

END:
    list_clear(a);
    list_clear(b);
}

void list_init(struct Node *list)
{
    list->next = list;
    list->prev = list;
    list->data = 0;
}

void list_insert(struct Node *list, struct Node *t)
{
    struct Node *p = list->next;

    t->next = list->next;
    p->prev = t; // следующий за новым элементом элементы ссылется на него

    list->next = t;
    t->prev = list;
}

void list_insert_before(struct Node *list, struct Node *t)
{
    struct Node *p = list->prev;
    t->prev = list->prev;
    list->prev = t;

    p->next = t; // предыдущий перед новым элементом элемент ссылется на него
    t->next = list;
}

void list_remove(struct Node *t)
{
    struct Node *p_next = t->next;
    struct Node *p_prev = t->prev;

    p_prev->next = p_next;
    p_next->prev = p_prev;
}

void list_print(struct Node *list)
{
    struct Node *p = list->next;

    while (p != list)
    {
        printf("%d", p->data);
        if (p->next != list)
        {
            printf(" ");
        }
        p = p->next;
    }
    printf("\n");
}

int list_is_empty(struct Node *list)
{
    return (list->next == list && list->prev == list);
}

struct Node *list_push_front(struct Node *list, Data d)
{
    struct Node *temp = malloc(sizeof(struct Node));

    if (temp == NULL)
    {
        return NULL;
    }
    temp->data = d;

    if (list_is_empty(list))
    {
        list->next = temp;
        list->prev = temp;
        temp->next = list;
        temp->prev = list;
    }
    else
    {
        struct Node *p = list->next;
        p->prev = temp;
        list->next = temp;
        temp->prev = list;
        temp->next = p;
    }

    return temp;
}

struct Node *list_push_back(struct Node *list, Data d)
{
    struct Node *temp = malloc(sizeof(struct Node));

    if (temp == NULL)
    {
        return NULL;
    }
    temp->data = d;

    if (list_is_empty(list))
    {
        list->next = temp;
        list->prev = temp;
        temp->next = list;
        temp->prev = list;
    }
    else
    {
        struct Node *p = list->prev;
        p->next = temp;
        temp->next = list;
        list->prev = temp;
        temp->prev = p;
    }
    return temp;
}

Data list_pop_back(struct Node *list)
{
    struct Node *p = list->prev;
    struct Node *p_prev = p->prev;
    list->prev = p->prev;
    p_prev->next = list;
    Data res = p->data;
    free(p);
    return res;
}

Data list_pop_front(struct Node *list)
{
    struct Node *p_del = list->next;
    struct Node *p__del_next = p_del->next;

    list->next = p__del_next;
    p__del_next->prev = list;
    Data res = p_del->data;
    free(p_del);
    return res;
}

Data list_delete(struct Node *t)
{
    struct Node *next = t->next;
    struct Node *prev = t->next;

    next->prev = prev;
    prev->next = next;
    Data res = t->data;
    free(t);
    return res;
}

void list_clear(struct Node *list)
{
    struct Node *p = list->next;
    struct Node *temp;
    while (p != list)
    {
        temp = p->next;
        free(p);
        p = temp;
    }
}
