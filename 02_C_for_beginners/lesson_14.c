// str_bomb5_mem Замена подстроки в строке

// // первое
// #include <stdio.h>
// #include <stdlib.h>
// #define N 1000

// char *replace(const char *src);
// int main(void)
// {
//     char s[N]; // нужно объявить переменную - место для читаемой строки
//     char *d;   // указатель на динамический массив, память еще не выделена

//     while (NULL != fgets(s, N, stdin))
//     {                   // пока можем прочитать строку
//         d = replace(s); // тут память выделяем
//         printf("+++%s+++\n", s);
//         free(d); // тут память освобождаем
//     }

//     return 0;
// }

// char *replace(const char *src)
// {
// }

// // второе
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

char *replace(const char *s);

int main(void)
{

    char s[N]; // нужно объявить переменную - место для читаемой строки
    char *d;   // указатель на динамический массив, память еще не выделена

    while (NULL != fgets(s, N, stdin))
    {                   // пока можем прочитать строку
        d = replace(s); // тут память выделяем
        printf("+++%s+++\n", d);
        free(d); // тут память освобождаем
    }

    return 0;
}

// рабочий вариант
char *replace(const char *s)
{
    int temp = strlen(s);
    char *result = malloc(temp * sizeof(char) + 1); // выделили памяти на всю строку входную + 1 для символа '\0'
    result[0] = '\0';                               // делам чтобы массив был пустой. иначе там фигня какая-то хранится

    char *b; // указатель на букву б - бомба будет.

    while (strstr(s, "bomb") != NULL)
    {
        b = strstr(s, "bomb"); // указатель на букву б в слове бомб

        // короче, когда меняем на 4 буквы, ошибок памяти нет
        // значит, нужно при нахождении бомбы увеличивать пмсять на 6
        temp += strlen("watermelon");
        result = realloc(result, temp * sizeof(char)); // увеличили память на количество смиволов до буквы б + 10 на вотермелон

        strncat(result, s, b - s); // скопировали в массив резалт буквы в количестве b-s
        strcat(result, "watermelon");

        s = b + 4; // свдинули указатель на конец бомбы
    }
    temp += strlen(s);
    result = realloc(result, temp * sizeof(char)); // увеличили память на количество смиволов до буквы б + 10 на вотермелон

    strcat(result, s); // тут ошибка памяти!!!! разобраться.

    //  printf("%s\n", result);
    return result;
}

//

// // // рабочий вариант без маллок
// char *replace(const char *s)
// {
//     char *result = strdup(s + 1); // выделили памяти на всю строку входную + '\0'

//     result[0] = '\0'; // делам чтобы массив был пустой. иначе там фигня какая-то хранится

//     if (2 != 5)
//     {
//         printf("ALARM!!\n");
//     }

//     // printf("%s\n", result);

//     // char *b; // указатель на букву б - бомба будет.

//     // while (strstr(s, "bomb") != NULL)
//     // {
//     //     b = strstr(s, "bomb");                                 // указатель на букву б в слове бомб
//     //     result = realloc(result, (b - s + 10) * sizeof(char)); // увеличили память на количество смиволов до буквы б + 10 на вотермелон

//     //     memcpy(result, s, b - s);                           // скопировали в указатель резалт буквы в количестве b-s
//     //     memcpy(result, "watermelon", strlen("watermelon")); // скопировали в указатель резалт watermalon

//     //     printf("%s\n", result);

//     //     s = b + 4; // свдинули указатель на конец бомбы
//     // }

//     // strcpy(result, s);
//     // // printf("%s\n", result);
//     return result;
// }

// // рабочий вариант
// char *replace(const char *s)
// {
//     char *result = malloc(strlen(s) * sizeof(char)); // выделили памяти на всю строку входную
//     result[0] = '\0';                                // делам чтобы массив был пустой. иначе там фигня какая-то хранится

//     // printf("sizeof s =  %zu\n", sizeof(s));
//     // printf("sizeof result =  %zu\n", sizeof(result));

//     char *b; // указатель на букву б - бомба будет.

//     while (strstr(s, "bomb") != NULL)
//     {
//         b = strstr(s, "bomb");                                 // указатель на букву б в слове бомб
//         result = realloc(result, (b - s + 10) * sizeof(char)); // увеличили память на количество смиволов до буквы б + 10 на вотермелон

//         // printf("sizeof result =  %zu\n", sizeof(result));

//         strncat(result, s, b - s); // скопировали в массив резалт буквы в количестве b-s
//         strcat(result, "watermalon");

//         s = b + 4; // свдинули указатель на конец бомбы
//     }

//     strcat(result, s);
//     // printf("%s\n", result);
//     return result;
// }

// // // рабочий вариант без маллок
// // char *replace(const char *s)
// // {
// //     char result[1000] = {};

// //     char *b; // указатель на букву б - бомба будет.

// //     printf("%s\n", result);

// //     while (strstr(s, "bomb") != NULL)
// //     {
// //         b = strstr(s, "bomb"); // указатель на букву б в слове бомб

// //         strncat(result, s, b - s); // скопировали в массив резалт буквы в количестве b-s
// //         strcat(result, "watermalon");

// //         s = b + 4; // свдинули указатель на конец бомбы
// //     }
// //     strncat(result, s, b - s);
// //     printf("%s\n", result);
// // }

// #include <stdio.h>
// int main(void)
// {
//     char s[1000];
//     fgets(s, 1000, stdin);
//     printf("%s", s);
//     return 0;
// }