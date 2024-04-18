#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
};

struct Node *add_tree(struct Node *tree, int x);
void destroy_tree(struct Node *tree);
void tree_height(struct Node *tree, int *count, int *max);

int main()
{
    int number = 0, count = 1, max = 1;
    struct Node *tree = NULL;
    while (scanf("%d", &number) == 1 && number != 0)
    {
        tree = add_tree(tree, number);
    }

    tree_height(tree, &count, &max);
    printf("%d", max);
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

void tree_height(struct Node *tree, int *count, int *max)
{
    if (tree == NULL)
    {
        return;
    }
    if (tree->left != NULL)
    {
        *count += 1;
        tree_height(tree->left, count, max);
    }
    if (tree->right != NULL)
    {
        *count += 1;
        tree_height(tree->right, count, max);
    }

    if (tree->left == NULL && tree->right == NULL)
    {
        if (*max < *count)
        {
            *max = *count;
        }
        }
    *count -= 1;
}