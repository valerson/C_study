// // // Aknights ������ � �����
// #include <stdio.h>
// int funk(int next, int status);

// int main(void)
// {
//     int n;
//     int knights1 = 0, knights2 = 0;
//     int status1, status2; // ����������� ������ 1 ��� ���� 0
//     int next;             // ������ � ������
//     scanf("%d", &n);

//     status1 = 1; // ������ - ��� ������
//     status2 = 0; // ������ - ��� ����

//     // // 1 ����� - ������- ��� ������
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%d", &next);
//         // ������ ������
//         if (status1 == 1) // ������ ������, ���..
//         {
//             if (next == 1) //..��������� ������
//             {
//                 knights1 += 1;
//                 status1 = 1;
//             }
//             else //..��������� ����
//                 status1 = 0;
//         }

//         else // status==0 ���� ������, ���..
//         {
//             if (next == 0) //..���� - ����
//             {
//                 knights1 += 1;
//                 status1 = 1;
//             }
//             else
//                 status1 = 0; //..��������� ������
//         }

//         // ������ ����
//         if (status2 == 1) // ������ ������, ���..
//         {
//             if (next == 1) //..��������� ������
//             {
//                 knights2 += 1;
//                 status2 = 1;
//             }
//             else //..��������� ����
//                 status2 = 0;
//         }

//         else // status==0 ���� ������, ���..
//         {
//             if (next == 0) //..���� - ����
//             {
//                 knights2 += 1;
//                 status2 = 1;
//             }
//             else
//                 status2 = 0; //..��������� ������
//         }
//     }

//     // printf("knights 1 = %d knights 2 = %d\n", knights1, knights2);

//     printf("%d", knights1 > knights2 ? knights2 : knights1);
//     return 0;
// }

// #include <stdio.h>
// #define N 14 // ����� ������� ����� � ����� ������������ ������, �� �� ����

// int main()
// {
//     int m[N] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 99, 11, 12, 13};
//     int *pm = m;

//     for (pm; pm != &m[N]; pm += 1) // ��� *pm!==99 - ���� �� ����� ��������
//         printf("%d ", *pm);
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// struct primer
// {
//     int one;
//     int two;
// };

// int main()
// {
//     struct primer example[] = {{1, 1}, {2, 2}, {3, 2}, {4, 5}, {5, 9}, {8, 0}};
//     struct primer *pexample = example;

//     for (pexample; pexample->one != 5; pexample += 1)
//         printf("%d %d ", pexample->one, pexample->two);
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// struct primer
// {
//     char one;
//     char two;
// };

// int main()
// {
//     // struct primer massive[10] = {{'1', '1'}, {'2', '2'}, {'3', '2'}, {'4', '5'}, {'5', '9'}, {'8', '0'}}; // �������������� ������ �������� 10 � ��������� ������� �����������
//     struct primer massive[10] = {}; // �������������� ������ �������� 10 � ��������� ������� �����������

//     struct primer *ukaz = massive; // ��������� �� ������ ���������
//     // �������� ��� ����� ���� ��������
//     // for (int i = 0; i < 10; i += 1)
//     // {
//     //     scanf("%c%c", &massive[i].one, &massive[i].two);
//     // }

//     while (2 == scanf("%c%c", &ukaz->one, &ukaz->two))
//     {
//         ukaz += 1; // ��������� �� ���� ������� �������
//     }

//     // for (int i = 0; 2 == scanf("%c%c", &massive[i].one, &massive[i].two); i += 1)
//     // {
//     //     ;
//     // }
//     // ukaz->one = ukaz->two = 0;

//     // for (int i = 0; 2 == scanf("%c%c", &ukaz[i].one, &ukaz[i].two); i += 1)
//     // {
//     //     ;
//     // }
//     //

//     for (ukaz; ukaz->one != '0'; ukaz += 1)
//         printf("one=%c two= %c \n", ukaz->one, ukaz->two);

//     // for (ukaz = massive; ukaz->one != 0; ukaz += 1)
//     //     printf("one=%c two= %c \n", ukaz->one, ukaz->two);
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// struct matrix_3x3
// {
//     int start_i;
//     int end_i;
//     int start_j;
//     int end_j;
// };

// int main(void)
// {
//     // ������� ���
//     struct matrix_3x3 matrix_1[] = {{0, 2, 0, 2}, {0, 2, 3, 5}, {0, 2, 6, 8}};
//     struct matrix_3x3 *pmatrix_1 = matrix_1;
//     // ������� ���
//     struct matrix_3x3 matrix_2[] = {{3, 5, 0, 2}, {3, 5, 3, 5}, {3, 5, 6, 8}};
//     struct matrix_3x3 *pmatrix_2 = matrix_2;
//     // ������ ���
//     struct matrix_3x3 matrix_3[] = {{6, 8, 0, 2}, {6, 8, 3, 5}, {6, 8, 6, 8}};
//     struct matrix_3x3 *pmatrix_3 = matrix_3;

//     // // ������� ���
//     // for (pmatrix_1; pmatrix_1 != &matrix_1[3]; pmatrix_1 += 1)
//     // {
//     //     printf("start_i = %d end_i = %d start_j = %d end_j = %d\n", pmatrix_1->start_i, pmatrix_1->end_i, pmatrix_1->start_j, pmatrix_1->end_j);
//     // }
//     // printf("\n");
//     // // ������� ���
//     // for (pmatrix_2 + 2; pmatrix_2 != &matrix_2[6]; pmatrix_2 += 1)
//     // {
//     //     printf("start_i = %d end_i = %d start_j = %d end_j = %d\n", pmatrix_2->start_i, pmatrix_2->end_i, pmatrix_2->start_j, pmatrix_2->end_j);
//     // }
//     // printf("\n");
//     // ������ ���
//     for (pmatrix_3 + 5; pmatrix_3 != &matrix_3[9]; pmatrix_3 += 1)
//     {
//         printf("start_i = %d end_i = %d start_j = %d end_j = %d\n", pmatrix_3->start_i, pmatrix_3->end_i, pmatrix_3->start_j, pmatrix_3->end_j);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     char line[11];
//     scanf("%101s", line);
//     for (int i = 0; i < 11; i += 1)
//     {
//         printf("%c ", line[i]);
//     }
//     return 0;
// }

// ������������ ������
#include <stdio.h>

int main(void)
{
    int n = 0;
    int k[] = {1, 2, 3, 4, 5};
    while (k[n] != '\0')
    {
        n += 1;
        printf("%d\n", n);
    }
    printf("%d", n);

    return 0;
}
