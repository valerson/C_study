// #include <stdio.h>
// int main(void){
//     char * a2 = "hello";
//     // a2[1]='H';
//     int i=0;
//     while (a2[i]!='\0')
//     {
//         printf("%c ", a2[i]);
//         i+=1;
//     }
//     return 0;
// }

// elong_set Задаем большие числа
//  #include <stdio.h>
//  #define N 100

// typedef struct {
//     char a[N];       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
//     unsigned int n;  // наибольшая степень десяти
// }Decimal;

// void elong_set (Decimal * res, const char str[ ]);
// void elong_print(Decimal x);

// int main(void)
// {
//     Decimal res;
//     elong_set(&res, "12345678901234567890");  // res = 12345678901234567890
//     elong_print(res);
//     return 0;
// }

// void elong_set (Decimal * res, const char str[ ])
// {
//     int n=0;
//     while (str[n]!='\0')
//     {
//         //res->a[n]=str[n]-'0';
//         n+=1;
//     }
//     int i=0;
//     while (str[i]!='\0')
//     {
//         res->a[n-1-i]=str[i]-'0';
//         i+=1;
//     }

//     res->n=n-1;
// }

// void elong_print(Decimal x)
// {
//     int n = x.n;

//     for (int i = n; i >= 0; i -= 1)
//     {
//         printf("%d", x.a[i]);
//     }
//     printf("\n");
// }

// #include <stdio.h>
// int main()
// {
//     char s[1001];
//     while (1 == scanf("%1000s", s))
//     {
//         printf("%s\n", s);
//     }
// }

// // flint Задача про капитана Флинта
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char s[10];
//     int number;
//     int x = 0, y = 0;
//     do
//     {
//         scanf("%s %d", s, &number);
//         if (strcmp(s, "North") == 0)
//             y += number;
//         if (strcmp(s, "East") == 0)
//             x += number;
//         if (strcmp(s, "South") == 0)
//             y -= number;
//         if (strcmp(s, "West") == 0)
//             x -= number;
//         if (strcmp(s, "North") != 0 && strcmp(s, "East") != 0 && strcmp(s, "South") != 0 && strcmp(s, "West") != 0)
//             break;
//         break;
//     } while (strcmp(s, "Treasure!") != 0);

//     printf("%d %d\n", x, y);
//     // printf("%s", s); // должно быть Treasure!

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char *s = NULL;                 // указатель, в него будет записываться адрес выделяемой памяти

//     while(1 == scanf("%ms", &s)) {  // заметим, что &s
//         printf("<%s>\n", s);        // используем прочитанное слово

//         free(s);                    // освобождаем память после использования, чтобы не было утечек
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s[10] = "abcd";
//     char *ps = &s[0];

//     printf("strlen(s) - %d\n", strlen(s));
//     printf("strlen(\"abc\") - %d\n", strlen("abc"));
//     printf("strlen(ps) - %d\n", strlen(ps));
//     return 0;
// }

// str_4 strcat
// #include <stdio.h>
// #include <string.h>

// char *my_strcat(char *dest, const char *src);

// int main(void)
// {
//     char d[1001] = "[Hel]";
//     char s[1001] = "[lo]";

//     // fgets(d, 1000, stdin);
//     // fgets(s, 1000, stdin);

//     my_strcat(d, s);

//     return 0;
// }

// char *my_strcat(char *dest, const char *src)
// {
//     int n = strlen(dest);
//     int m = strlen(src);

//     strcpy(dest + n, src);
//     strncpy(src - n, dest, n);
// }

// str_len Самое длинное слово
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char s[1000], result[100];
//     int len_max = 0;
//     // FILE *file_in = fopen("tests.txt", "r");
//     while (1 == scanf("%s", s))
//     {
//         printf("%s\n", s);
//         if (len_max < strlen(s))
//         {
//             len_max = strlen(s);
//             strcpy(result, s);
//         }
//     }
//     printf("%s %d", result, len_max);
//     return 0;
// }

// str_bomb1 Слово bomb
// #include <stdio.h>
// int main(void)
// {
//     char *s[1000];
//     int flag = 0;
//     while (1 == scanf("%s", s))
//     {
//         if (strcmp(s, "bomb") == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     printf("%s", flag == 0 ? "NO" : "YES");
//     return 0;
// }

// // str_bomb2 Часть слова bomb
// #include <stdio.h>
// int main(void)
// {
//     char s[1000];
//     int flag = 0;
//     while (fgets(s, 1000, stdin) != NULL)
//     {
//         if (strstr(s, "bomb") != 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     printf("%s", flag == 0 ? "NO" : "YES");
//     return 0;
// }

// // str_bomb3 Часть слова bomb без учета регистра
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(void)
// {
//     char s[1000];
//     int flag = 0;
//     while (fgets(s, 1000, stdin) != NULL)
//     {
//         for (int i=0; i<strlen(s); i+=1) s[i]=tolower(s[i]);

//         if (strstr(s, "bomb") != NULL)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     printf("%s", flag == 0 ? "NO" : "YES");
//     return 0;
// }

// str_bomb4 Сколько бомб?
// #include <stdio.h>
// int main(void)
// {
//     char s[1000];
//     int count = 0;
//     while (1 == scanf("%s", s))
//     {
//         while (strstr(s, "bomb") != NULL)
//         {
//             count += 1;
//             // изменить строку
//             int n = strlen(s);
//             for (int i = n - 1; i >= n - 4; i -= 1)
//             {
//                 s[i - 4] = s[i];
//                 if (i == n - 4)
//                     s[i] = '\0';
//             }
//         }
//     }
//     printf("%d", count);
//     return 0;
// }

// // str_bomb5 Заменим все бомбы
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// void replace(char *finish, const char *start);

// int main(void)
// {
//     char s[1000];
//     char result[1000];
//     char c;
//     while (2 == scanf("%s%c", s, &c))
//     {
//         replace(result, s);
//         printf("%s%c", result, c);
//     }
//     replace(result, s);
//     printf("%s%c", result, c);

//     return 0;
// }

// void replace(char *finish, const char *start)
// {
//     size_t lenbomb = strlen("bomb");
//     size_t lenwater = strlen("watermelon");

//     char *s; // src: указатель на начало подстроки, где ищем bomb
//     char *p; // src: указатель на начало bomb
//     char *d; // dst: указатель на конец уже скопированной части

//     // сначала
//     s = (char *)start; // ищем во всей строке src
//     // p = NULL;   // про бомбу ничего не известно
//     d = finish; // еще ничего не скопировали

//     // ищем бомбу начиная с адреса s
//     p = strstr(s, "bomb");

//     // обезвредим бомбу
//     if (p != NULL)
//     {                            // бомба есть
//         size_t n = p - s;        // количество символов перед бомбой
//         strncpy(d, s, n);        // скопируем символы перед бомбой в dst
//         d = d + n;               // передвинем d в конце строки
//         strcpy(d, "watermelon"); // допишем в конец строки арбуз
//         d = d + lenwater;        // передвинем конец строки за арбуз

//         s = p + lenbomb; // указатель на остаток строки поставим за бомбой
//     }
//     // оставшаяся строка
//     strcpy(d, s);
// }

// void replace(char *dst, const char *src_original)
// {
//     // сделаем копию строки src_original, выделив память динамически
//     char *src = strdup(src_original);

//     size_t lenbomb = strlen("bomb");

//     char *s; // src: указатель на начало подстроки, где ищем bomb
//     char *p; // src: указатель на начало bomb

//     // сначала
//     s = src;       // ищем во всей строке src
//     dst[0] = '\0'; // без этого strcat работать не будет

//     // ищем бомбу начиная с адреса s
//     p = strstr(s, "bomb"); // p указывает на начало бомбы или NULL

//     // обезвредим бомбу
//     if (p != NULL)
//     {                              // бомба есть
//         *p = '\0';                 // вместо 'b' ставим '\0'
//         strcat(dst, s);            // скопируем символы перед бомбой в dst
//         strcat(dst, "watermelon"); // допишем в конец строки арбуз

//         s = p + lenbomb; // указатель на остаток строки поставим за бомбой
//     }

//     // оставшаяся строка
//     strcat(dst, s);

//     // в конце нужно освободить память, в которой лежит копия строки
//     free(src);
// }
