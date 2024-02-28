// str_bomb5 Заменим все бомбы
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replace(char *finish, const char *start);

int main(void)
{
    char s[1000];
    char result[1000];
    char c;
    while (2 == scanf("%s%c", s, &c))
    {
        replace(result, s);
        printf("%s%c", result, c);
    }

    return 0;
}

void replace(char *finish, const char *start)
{
    size_t lenbomb = strlen("bomb");
    size_t lenwater = strlen("watermelon");

    char *s; // src: указатель на начало подстроки, где ищем bomb
    char *p; // src: указатель на начало bomb
    char *d; // dst: указатель на конец уже скопированной части

    // сначала
    s = (char *)start; // ищем во всей строке src
    // p = NULL;   // про бомбу ничего не известно
    d = finish; // еще ничего не скопировали

    // ищем бомбу начиная с адреса s
    p = strstr(s, "bomb");

    // обезвредим бомбу
    if (p != NULL)
    {                            // бомба есть
        size_t n = p - s;        // количество символов перед бомбой
        strncpy(d, s, n);        // скопируем символы перед бомбой в dst
        d = d + n;               // передвинем d в конце строки
        strcpy(d, "watermelon"); // допишем в конец строки арбуз
        d = d + lenwater;        // передвинем конец строки за арбуз

        s = p + lenbomb; // указатель на остаток строки поставим за бомбой
    }
    // оставшаяся строка
    strcpy(d, s);
}