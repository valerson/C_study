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

// elong_set ������ ������� �����
//  #include <stdio.h>
//  #define N 100

// typedef struct {
//     char a[N];       // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
//     unsigned int n;  // ���������� ������� ������
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

// // flint ������ ��� �������� ������
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
//     // printf("%s", s); // ������ ���� Treasure!

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char *s = NULL;                 // ���������, � ���� ����� ������������ ����� ���������� ������

//     while(1 == scanf("%ms", &s)) {  // �������, ��� &s
//         printf("<%s>\n", s);        // ���������� ����������� �����

//         free(s);                    // ����������� ������ ����� �������������, ����� �� ���� ������
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

// str_len ����� ������� �����
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

// str_bomb1 ����� bomb
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

// // str_bomb2 ����� ����� bomb
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

// // str_bomb3 ����� ����� bomb ��� ����� ��������
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

// str_bomb4 ������� ����?
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
//             // �������� ������
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

// // str_bomb5 ������� ��� �����
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

//     char *s; // src: ��������� �� ������ ���������, ��� ���� bomb
//     char *p; // src: ��������� �� ������ bomb
//     char *d; // dst: ��������� �� ����� ��� ������������� �����

//     // �������
//     s = (char *)start; // ���� �� ���� ������ src
//     // p = NULL;   // ��� ����� ������ �� ��������
//     d = finish; // ��� ������ �� �����������

//     // ���� ����� ������� � ������ s
//     p = strstr(s, "bomb");

//     // ���������� �����
//     if (p != NULL)
//     {                            // ����� ����
//         size_t n = p - s;        // ���������� �������� ����� ������
//         strncpy(d, s, n);        // ��������� ������� ����� ������ � dst
//         d = d + n;               // ���������� d � ����� ������
//         strcpy(d, "watermelon"); // ������� � ����� ������ �����
//         d = d + lenwater;        // ���������� ����� ������ �� �����

//         s = p + lenbomb; // ��������� �� ������� ������ �������� �� ������
//     }
//     // ���������� ������
//     strcpy(d, s);
// }

// void replace(char *dst, const char *src_original)
// {
//     // ������� ����� ������ src_original, ������� ������ �����������
//     char *src = strdup(src_original);

//     size_t lenbomb = strlen("bomb");

//     char *s; // src: ��������� �� ������ ���������, ��� ���� bomb
//     char *p; // src: ��������� �� ������ bomb

//     // �������
//     s = src;       // ���� �� ���� ������ src
//     dst[0] = '\0'; // ��� ����� strcat �������� �� �����

//     // ���� ����� ������� � ������ s
//     p = strstr(s, "bomb"); // p ��������� �� ������ ����� ��� NULL

//     // ���������� �����
//     if (p != NULL)
//     {                              // ����� ����
//         *p = '\0';                 // ������ 'b' ������ '\0'
//         strcat(dst, s);            // ��������� ������� ����� ������ � dst
//         strcat(dst, "watermelon"); // ������� � ����� ������ �����

//         s = p + lenbomb; // ��������� �� ������� ������ �������� �� ������
//     }

//     // ���������� ������
//     strcat(dst, s);

//     // � ����� ����� ���������� ������, � ������� ����� ����� ������
//     free(src);
// }
