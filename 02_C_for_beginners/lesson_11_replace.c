// str_bomb5 Заменим все бомбы
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replace(char *result, const char *start);

int main(void)
{
    char s[1000];
    char result[1000]={};
    char c;
    while (2 == scanf("%s%c", s, &c))
    {
        // printf("%s\n", s);

        replace(result, s);
        printf("%s%c", result, c);
        memset(result, 0, sizeof(result)); //очищаем массив резалт
    }
    replace(result, s);
    printf("%s", result);

    return 0;
}

void replace(char *result, const char *start)
{
    // strcpy(result, start);
    
    char start_copy[1000]; //чтобы не менять изначальную строку, на входе которая
    strcpy(start_copy, start);

    int len_bomba=strlen("bomba");
    // int len_watermelon=strlen("watermelon");

    char * s; //указатель текущий. сначала будет на начало строки для копирования в резалт
    char * b; //указатель будет на начало слова бомб
    
    s=start_copy; //делаем на начало строки
    b=strstr(start_copy, "bomb"); //указатель на начало слова в строке, если есть

    //printf("adress start = %p\n", s);
    //printf("adress bomb %p\n", b);

    //int res = b-s; //количесво символов до нахождения слова бомба
    //printf("symvolov vsego = %d\n", res);

    //s=b+len_bomba; //сдвинули указатель на адрес конца бомбы
    //printf("new adress = %p\n", s);
    //printf("result = %s\n", result);
    
    while (b != NULL)
    {
        strncat(result, s, b-s); //слепили строку резалт и часть строки с указателя на начало нужное количество букв
        strcat(result,"watermelon");
        s=b+len_bomba-1; //сдвинули указатель на адрес конца бомбы
        b[0]='-'; //портим слово бомба. символ - любой
        b=strstr(start_copy, "bomb"); //ищем еще одно слово бомба
        //printf("result = %s\n", result);
    }
    strcat(result,s); //слепили строку резалт и часть строки с указателя на начало 
    //printf("result = %s\n", result);
}

