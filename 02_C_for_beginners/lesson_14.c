// str_bomb5_mem ������ ��������� � ������

// // ������
// #include <stdio.h>
// #include <stdlib.h>
// #define N 1000

// char *replace(const char *src);
// int main(void)
// {
//     char s[N]; // ����� �������� ���������� - ����� ��� �������� ������
//     char *d;   // ��������� �� ������������ ������, ������ ��� �� ��������

//     while (NULL != fgets(s, N, stdin))
//     {                   // ���� ����� ��������� ������
//         d = replace(s); // ��� ������ ��������
//         printf("+++%s+++\n", s);
//         free(d); // ��� ������ �����������
//     }

//     return 0;
// }

// char *replace(const char *src)
// {
// }

// // ������
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

char *replace(const char *s);

int main(void)
{

    char s[N]; // ����� �������� ���������� - ����� ��� �������� ������
    char *d;   // ��������� �� ������������ ������, ������ ��� �� ��������

    while (NULL != fgets(s, N, stdin))
    {                   // ���� ����� ��������� ������
        d = replace(s); // ��� ������ ��������
        printf("+++%s+++\n", d);
        free(d); // ��� ������ �����������
    }

    return 0;
}

// ������� �������
char *replace(const char *s)
{
    int temp = strlen(s);
    char *result = malloc(temp * sizeof(char) + 1); // �������� ������ �� ��� ������ ������� + 1 ��� ������� '\0'
    result[0] = '\0';                               // ����� ����� ������ ��� ������. ����� ��� ����� �����-�� ��������

    char *b; // ��������� �� ����� � - ����� �����.

    while (strstr(s, "bomb") != NULL)
    {
        b = strstr(s, "bomb"); // ��������� �� ����� � � ����� ����

        // ������, ����� ������ �� 4 �����, ������ ������ ���
        // ������, ����� ��� ���������� ����� ����������� ������ �� 6
        temp += strlen("watermelon");
        result = realloc(result, temp * sizeof(char)); // ��������� ������ �� ���������� �������� �� ����� � + 10 �� ����������

        strncat(result, s, b - s); // ����������� � ������ ������ ����� � ���������� b-s
        strcat(result, "watermelon");

        s = b + 4; // �������� ��������� �� ����� �����
    }
    temp += strlen(s);
    result = realloc(result, temp * sizeof(char)); // ��������� ������ �� ���������� �������� �� ����� � + 10 �� ����������

    strcat(result, s); // ��� ������ ������!!!! �����������.

    //  printf("%s\n", result);
    return result;
}

//

// // // ������� ������� ��� ������
// char *replace(const char *s)
// {
//     char *result = strdup(s + 1); // �������� ������ �� ��� ������ ������� + '\0'

//     result[0] = '\0'; // ����� ����� ������ ��� ������. ����� ��� ����� �����-�� ��������

//     if (2 != 5)
//     {
//         printf("ALARM!!\n");
//     }

//     // printf("%s\n", result);

//     // char *b; // ��������� �� ����� � - ����� �����.

//     // while (strstr(s, "bomb") != NULL)
//     // {
//     //     b = strstr(s, "bomb");                                 // ��������� �� ����� � � ����� ����
//     //     result = realloc(result, (b - s + 10) * sizeof(char)); // ��������� ������ �� ���������� �������� �� ����� � + 10 �� ����������

//     //     memcpy(result, s, b - s);                           // ����������� � ��������� ������ ����� � ���������� b-s
//     //     memcpy(result, "watermelon", strlen("watermelon")); // ����������� � ��������� ������ watermalon

//     //     printf("%s\n", result);

//     //     s = b + 4; // �������� ��������� �� ����� �����
//     // }

//     // strcpy(result, s);
//     // // printf("%s\n", result);
//     return result;
// }

// // ������� �������
// char *replace(const char *s)
// {
//     char *result = malloc(strlen(s) * sizeof(char)); // �������� ������ �� ��� ������ �������
//     result[0] = '\0';                                // ����� ����� ������ ��� ������. ����� ��� ����� �����-�� ��������

//     // printf("sizeof s =  %zu\n", sizeof(s));
//     // printf("sizeof result =  %zu\n", sizeof(result));

//     char *b; // ��������� �� ����� � - ����� �����.

//     while (strstr(s, "bomb") != NULL)
//     {
//         b = strstr(s, "bomb");                                 // ��������� �� ����� � � ����� ����
//         result = realloc(result, (b - s + 10) * sizeof(char)); // ��������� ������ �� ���������� �������� �� ����� � + 10 �� ����������

//         // printf("sizeof result =  %zu\n", sizeof(result));

//         strncat(result, s, b - s); // ����������� � ������ ������ ����� � ���������� b-s
//         strcat(result, "watermalon");

//         s = b + 4; // �������� ��������� �� ����� �����
//     }

//     strcat(result, s);
//     // printf("%s\n", result);
//     return result;
// }

// // // ������� ������� ��� ������
// // char *replace(const char *s)
// // {
// //     char result[1000] = {};

// //     char *b; // ��������� �� ����� � - ����� �����.

// //     printf("%s\n", result);

// //     while (strstr(s, "bomb") != NULL)
// //     {
// //         b = strstr(s, "bomb"); // ��������� �� ����� � � ����� ����

// //         strncat(result, s, b - s); // ����������� � ������ ������ ����� � ���������� b-s
// //         strcat(result, "watermalon");

// //         s = b + 4; // �������� ��������� �� ����� �����
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