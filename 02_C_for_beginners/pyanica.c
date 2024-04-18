#include <stdio.h>
#include <stdlib.h>
#define COUNT_CARD 10
#define NUM 1000000

struct Node
{
    int card_value;
    struct Node *next_card;
    struct Node *prev_card;
};

struct Node *init_list();
void push_card(struct Node *list, int card);
void print_list(struct Node *list);
int pop_card(struct Node *list);
int is_empty(struct Node *list);
void main_game(struct Node *player_1, struct Node *player_2);

void card_draw(struct Node *player_1, struct Node *player_2);
void free_memory(struct Node *list);

int main()
{
    struct Node *player_1 = init_list();
    struct Node *player_2 = init_list();

    card_draw(player_1, player_2);
    main_game(player_1, player_2);

    free_memory(player_1);
    free_memory(player_2);
    return 0;
}

struct Node *init_list()
{
    struct Node *temp = malloc(sizeof(struct Node));
    temp->next_card = temp;
    temp->prev_card = temp;
    temp->card_value = 0;
    return temp;
}

void push_card(struct Node *list, int card)
{
    struct Node *temp = malloc(sizeof(struct Node));
    struct Node *p_prev = list->prev_card;

    p_prev->next_card = temp;
    temp->next_card = list;
    temp->prev_card = p_prev;
    list->prev_card = temp;

    temp->card_value = card;
}

int pop_card(struct Node *list)
{
    struct Node *p = list->next_card;
    struct Node *p_next = p->next_card;

    int res = p->card_value;
    list->next_card = p->next_card;
    p->next_card->prev_card = list;

    free(p);
    return res;
}

void print_list(struct Node *list)
{
    struct Node *p = list->next_card;
    while (p != list)
    {
        printf("%d", p->card_value);
        if (p->next_card != list)
        {
            printf(" ");
        }
        p = p->next_card;
    }
    printf("\n");
}

void free_memory(struct Node *list)
{
    // if (list->next_card == list && list->prev_card == list)
    // {
    //     free(list);
    //     return;
    // }

    struct Node *p = list->next_card;
    while (p != list)
    {
        struct Node *temp = p->next_card;
        free(p);
        p = temp;
    }
    free(list);
}

void card_draw(struct Node *player_1, struct Node *player_2)
{
    for (int i = 0; i < COUNT_CARD; i++)
    {
        int temp;
        if (i < COUNT_CARD / 2)
        {
            scanf("%d", &temp);
            push_card(player_1, temp);
        }
        else
        {
            scanf("%d", &temp);
            push_card(player_2, temp);
        }
    }
}

int is_empty(struct Node *list)
{
    return (list->next_card == list && list->prev_card == list);
}

void main_game(struct Node *player_1, struct Node *player_2)
{
    for (int i = 0, count = 1; i < NUM; i++, count++)
    {

        int card_player_1 = pop_card(player_1);
        int card_player_2 = pop_card(player_2);

        if (card_player_1 == 9 && card_player_2 == 0)
        {
            push_card(player_2, card_player_1);
            push_card(player_2, card_player_2);
        }
        else if (card_player_1 == 0 && card_player_2 == 9)
        {
            push_card(player_1, card_player_1);
            push_card(player_1, card_player_2);
        }
        else if ((card_player_1 > card_player_2))
        {
            push_card(player_1, card_player_1);
            push_card(player_1, card_player_2);
        }
        else if ((card_player_1 < card_player_2))
        {
            push_card(player_2, card_player_1);
            push_card(player_2, card_player_2);
        }

        // print_list(player_1);
        // print_list(player_2);
        // printf("---\n");

        if (is_empty(player_1) || is_empty(player_2))
        {
            printf("%s %d\n", is_empty(player_2) ? "first" : "second", count);
            break;
        }
        if (i == NUM - 1)
        {
            printf("botva\n");
        }
    }
}