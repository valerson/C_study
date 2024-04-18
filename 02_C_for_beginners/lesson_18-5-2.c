#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};

struct Node *add_tree(struct Node *tree, int x);
void print_tree(struct Node *tree);
void destroy_tree(struct Node *tree);

int main()
{
    struct Node *tree = NULL;
    int number = 0;
    while (scanf("%d", &number) == 1 && number != 0)
    {
        tree = add_tree(tree, number);
    }
    print_tree(tree);
    destroy_tree(tree);
    return 0;
}

struct Node *add_tree(struct Node *tree, int x)
{
    if (tree == NULL)
    {
        struct Node *temp = malloc(sizeof(struct Node));
        temp->val = x;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    if (x > tree->val)
    {
        tree->right = add_tree(tree->right, x);
    }
    if (x < tree->val)
    {
        tree->left = add_tree(tree->left, x);
    }
    return tree;
}

void print_tree(struct Node *tree)
{
    // пустой
    if (tree == NULL)
    {
        return;
    }
    // не пустой
    print_tree(tree->left);
    printf("%d ", tree->val);
    print_tree(tree->right);
}

void destroy_tree(struct Node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    destroy_tree(tree->left);
    destroy_tree(tree->right);
    free(tree);
}