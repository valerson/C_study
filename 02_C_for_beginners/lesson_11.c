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

// elong_set «адаем большие числа
//  #include <stdio.h>
//  #define N 100

// typedef struct {
//     char a[N];       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
//     unsigned int n;  // наибольша€ степень дес€ти
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

// // flint «адача про капитана ‘линта
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
//     char *s = NULL;                 // указатель, в него будет записыватьс€ адрес выдел€емой пам€ти

//     while(1 == scanf("%ms", &s)) {  // заметим, что &s
//         printf("<%s>\n", s);        // используем прочитанное слово

//         free(s);                    // освобождаем пам€ть после использовани€, чтобы не было утечек
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

// str_len —амое длинное слово
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

// // str_bomb1 —лово bomb
// #include <stdio.h>
// int main(void)
// {
//     char s[1000];
//     int flag = 0;
//     while (fgets(s, 1000, stdin) != NULL)
//     {
//         if (strstr(tolower(s), "BOMB") != 0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     printf("%s", flag == 0 ? "NO" : "YES");
//     return 0;
// }

// // str_bomb1 —лово bomb
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

#include <stdio.h>
int main(void)
{
    char s[1000];
    int count = 0;
    while (1 == scanf("%s", s))
    {
        while (strstr(s, "bomb") != NULL)
        {
            count += 1;
            printf("%s \n ", s);
            // изменить строку
            int n = strlen(s);
            for (int i = n - 1; i >= n - 4; i -= 1)
            {

                s[i - 4] = s[i];
                if (i == n - 4)
                    s[i] = '\0';
            }
        }
    }
    printf("%d", count);
    return 0;
}