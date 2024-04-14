#include <stdio.h>

void codind();
void de_coding();

int main()
{
    int n;
    char c;
    printf("enter number:\n0 - coding\n1 - de codiing\n");
    scanf("%d%c", &n, &c); // тут с - enter
    switch (n)
    {
    case 0:
        // кодирование
        printf("enter text for coding: ");
        codind();
        break;

    case 1:
        printf("enter symvols for decoding: ");
        de_coding();
        break;

    default:
        printf("n/a\n");
        break;
    }

    return 0;
}

void codind()
{
    char c;
    while ((c = getchar()) != '\n')
    {
        printf("%x ", c);
    }
}

void de_coding()
{
    char c;
    while (scanf("%x", &c) == 1)
    {
        printf("%c ", c);
    }
}