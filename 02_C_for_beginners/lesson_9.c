// #include <stdio.h>
// #define n 3
// int sum_row(int a[3][3], int irow);
// int sum_col(int a[3][3], int icol);
// int sum_diag(int a[3][3]);
// int sum_diag2(int a[3][3]);
// int main(void)
// {
//     int m[n][n];

//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             scanf("%d", &m[i][j]);
//         }
//     }

//     printf("%d", sum_diag2(m));

//     return 0;
// }
// int sum_row(int a[3][3], int irow)
// {
//     int result = 0;
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             if (i == irow)
//                 result += a[i][j];
//         }
//     }
//     return result;
// }

// int sum_col(int a[3][3], int icol)
// {
//     int result = 0;
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             if (j == icol)
//                 result += a[i][j];
//         }
//     }
//     return result;
// }

// int sum_diag(int a[3][3])
// {
//     int result = 0;
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             if (i == j)
//                 result += a[i][j];
//         }
//     }
//     return result;
// }

// int sum_diag2(int a[3][3])
// {
//     int result = 0;
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             if (i + j == 2)
//                 result += a[i][j];
//         }
//     }
//     return result;
// }

// #include <stdio.h>
// #define n 3
// int main(void)
// {
//     int m[n][n];
//     int summ_roe_1 = 0, summ_roe_2 = 0; // строка
//     int summ_standart = 0;              // эталон - 0 строка

//     int summ_col_0 = 0, summ_col_1 = 0, summ_col_2 = 0; // столбец
//     int summ_main_diag = 0, summ_side_diag = 0;         // главная диагональ, побочная диагональ
//     for (int i = 0; i < n; i += 1)
//     { // строка,
//         for (int j = 0; j < n; j += 1)
//         {
//             scanf("%d", &m[i][j]);
//             switch (i)
//             {
//             case 0:
//                 summ_standart += m[i][j];
//                 break;
//             case 1:
//                 summ_roe_1 += m[i][j];
//                 break;
//             case 2:
//                 summ_roe_2 += m[i][j];
//                 break;
//             default:
//                 break;
//             }
//             switch (j)
//             {
//             case 0:
//                 summ_col_0 += m[i][j];
//                 break;
//             case 1:
//                 summ_col_1 += m[i][j];
//                 break;
//             case 2:
//                 summ_col_2 += m[i][j];
//                 break;
//             default:
//                 break;
//             }
//             if (i == j)
//                 summ_main_diag += m[i][j];
//             if (i + j == n - 1)
//                 summ_side_diag += m[i][j];
//         }
//     }
//     // printf("summ_standart= %d \nsumm_roe_1= %d \nsumm_roe_2= %d \nsumm_col_0= %d \nsumm_col_1= %d \nsumm_col_2= %d \nsumm_main_diag= %d \nsumm_side_diag= %d\n", summ_standart, summ_roe_1, summ_roe_2, summ_col_0, summ_col_1, summ_col_2, summ_main_diag, summ_side_diag);

//     if (summ_standart != summ_roe_1 || summ_standart != summ_roe_2 || summ_standart != summ_col_0 || summ_standart != summ_col_1 || summ_standart != summ_col_2 || summ_standart != summ_main_diag || summ_standart != summ_side_diag)
//         printf("NO");
//     else
//         printf("MAGIC");
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n, m;
//     scanf("%d%d", &n, &m);
//     int a[n][m];
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < m; j += 1)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     int k;
//     scanf("%d", &k);
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < m; j += 1)
//         {
//             a[i][j] *= k;
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// void input_matrix(int matrix[10][10], int n, int m);
// void print_matrix(int matrix[10][10], int n, int m);
// void sum(int rows, int cols, int a[10][10], int b[10][10], int c[10][10]);

// int main(void)
// {
//     int n, m;
//     scanf("%d%d", &n, &m);
//     int a[10][10], b[10][10], c[10][10];

//     input_matrix(a, n, m);
//     input_matrix(b, n, m);

//     sum(n, m, a, b, c);
//     print_matrix(c, n, m);

//     return 0;
// }

// void input_matrix(int matrix[10][10], int n, int m)
// {
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < m; j += 1)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// }

// void print_matrix(int matrix[10][10], int n, int m)
// {
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < m; j += 1)
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// void sum(int n, int m, int a[10][10], int b[10][10], int c[10][10])
// {
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < m; j += 1)
//         {
//             c[i][j] = a[i][j] + b[i][j];
//         }
//     }
// }

// #include <stdio.h>
// #define n 9
// #define m 3

// // бахнул структуру маленьких квадратиков
// struct matrix_3x3
// {
//     int start_i;
//     int end_i;
//     int start_j;
//     int end_j;
// };

// void input_decision(int pole[n][n]);
// int chek_row(int pole[n][n], int row);
// int chek_col(int pole[n][n], int col);
// int chek_matrix_3x3(int pole[n][n], int start_i, int end_i, int start_j, int end_j);

// int main(void)
// {
//     int sudoku[n][n];
//     int flag = 0; // если флаг 1 в результате любой из проверок - не правильное решение

//     // задаем координаты вех квадратиков
//     struct matrix_3x3 matrix_1[] = {{0, 3, 0, 3}, {0, 3, 3, 6}, {0, 3, 6, 9}};
//     struct matrix_3x3 *pmatrix_1 = matrix_1;
//     // средние три
//     struct matrix_3x3 matrix_2[] = {{3, 6, 0, 3}, {3, 6, 3, 6}, {3, 6, 6, 9}};
//     struct matrix_3x3 *pmatrix_2 = matrix_2;
//     // нижние три
//     struct matrix_3x3 matrix_3[] = {{6, 9, 0, 3}, {6, 9, 3, 6}, {6, 9, 6, 9}};
//     struct matrix_3x3 *pmatrix_3 = matrix_3;

//     // вводим решение
//     input_decision(sudoku);
//     // проверяем все строки
//     for (int i = 0; i < n; i += 1)
//     {
//         if (flag == 1)
//             break;
//         flag = chek_row(sudoku, i);
//         // printf("stroka %d result - %d\n", i + 1, chek_row(sudoku, i));
//     }

//     // проверяем все столбцы
//     for (int j = 0; j < n; j += 1)
//     {
//         if (flag == 1)
//             break;
//         flag = chek_col(sudoku, j);
//         // printf("stolbec %d result - %d\n", j + 1, chek_col(sudoku, j));
//     }

//     // пробегаем все квадратиики
//     for (pmatrix_3 + 5; pmatrix_3 != &matrix_3[9]; pmatrix_3 += 1)
//     {
//         if (flag == 1)
//             break;
//         flag = chek_matrix_3x3(sudoku, pmatrix_3->start_i, pmatrix_3->end_i, pmatrix_3->start_j, pmatrix_3->end_j);
//         // printf("matrix result - %d\n", chek_matrix_3x3(sudoku, pmatrix_3->start_i, pmatrix_3->end_i, pmatrix_3->start_j, pmatrix_3->end_j));
//     }
//     printf("%s", flag == 0 ? "YES" : "NO");

//     return 0;
// }

// void input_decision(int pole[n][n])
// {
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             scanf("%d", &pole[i][j]);
//         }
//     }
// }

// // проверка строк
// int chek_row(int pole[n][n], int row)
// {
//     int ideal_row[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int flag = 0;
//     int count = 0; // решил сделать счетчиком. если все хорошо, то он будет 9
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             if (i == row)
//             {
//                 // пробегаем по идеальной строке
//                 for (int k = 0; k < n; k += 1)
//                 {
//                     if (pole[i][j] == ideal_row[k])
//                     {
//                         count += 1;
//                         ideal_row[k] = 0; // чтобы не сработал счетчик на две одинаковые цифры в строке
//                     }
//                 }
//             }
//         }
//     }
//     if (count == 9)
//         flag = 0;
//     else
//         flag = 1;
//     return flag;
// }

// // проверка столбцов
// int chek_col(int pole[n][n], int col)
// {
//     int ideal_col[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int flag = 0;
//     int count = 0; // счетчик. если все хорошо, то он будет 9
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             if (j == col)
//             {
//                 // пробегаем по идеальной строке
//                 for (int k = 0; k < n; k += 1)
//                 {
//                     if (pole[i][j] == ideal_col[k])
//                     {
//                         count += 1;
//                         ideal_col[k] = 0; // чтобы не сработал счетчик на две одинаковые цифры в столбце
//                     }
//                 }
//             }
//         }
//     }
//     if (count == 9)
//         flag = 0;
//     else
//         flag = 1;
//     return flag;
// }

// int chek_matrix_3x3(int pole[n][n], int start_i, int end_i, int start_j, int end_j)
// {
//     int ideal_matrix[m][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int flag = 0;
//     int count = 0; // счетчик. если все хорошо, то он будет 9
//     for (int i = start_i; i < end_i; i += 1)
//     {
//         for (int j = start_j; j < end_j; j += 1)
//         {
//             // printf("%d ", pole[i][j]);
//             // пробегаем по идеальной матрице
//             for (int i_1 = 0; i_1 < m; i_1 += 1)
//             {
//                 for (int j_1 = 0; j_1 < m; j_1 += 1)
//                 {
//                     // printf("%d ", ideal_matrix[i_1][j_1]);
//                     if (pole[i][j] == ideal_matrix[i_1][j_1])
//                     {
//                         count += 1;
//                         ideal_matrix[i_1][j_1] = 0; // чтобы не сработал счетчик на две одинаковые цифры в матричке
//                     }
//                 }
//             }
//         }
//     }
//     if (count == 9)
//         flag = 0;
//     else
//         flag = 1;
//     return flag;
// }

// // void print_matrix(int matrix[n][n])
// {
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main(void)
// {
//     int n, count = 0, j;
//     char massive[101];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%101s", massive);
//         j = 0;
//         while (massive[j] != '\0')
//         {
//             if (massive[j] == '*')
//                 count += 1;
//             j += 1;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }

// #include <stdio.h>
// int funk_area_line(int area_temp, char m[101][101], int i, int j, int n);

// int main(void)
// {
//     int n, area_temp = 0, area_max = 0;
//     char m[101][101];
//     scanf("%d", &n);
//     // итали массив
//     for (int i = 0; i < n; i += 1)
//     {
//         scanf("%101s", m[i]);
//     }

//     // // распечататли массив
//     // for (int i = 0; i < n; i += 1)
//     // {
//     //     for (int j = 0; j < n; j += 1)
//     //     {
//     //         printf("%c", m[i][j]);
//     //     }
//     //     printf("\n");
//     // }

//     // проанализировали массив
//     for (int i = 0; i < n; i += 1)
//     {
//         for (int j = 0; j < n; j += 1)
//         {
//             // нашли *
//             if (m[i][j] == '*')
//             {
//                 // проверяем наличие * ниже и правее

//                 // правее до конца
//                 area_temp += funk_area_line(0, m, i, j, n);

//                 // ниже
//                 int k = 1;
//                 while (i + k < n)
//                 {
//                     if (m[i + k][j] == '*') // если ниже тоже *
//                     {
//                         // правее до конца
//                         area_temp += funk_area_line(0, m, i + k, j, n);
//                         k += 1;
//                     }
//                     else
//                         break;
//                 }
//             }
//             if (area_temp > area_max)
//                 area_max = area_temp;
//             area_temp = 0;
//         }
//     }

//     printf("%d", area_max);
//     return 0;
// }

// // площадь * в строке
// int funk_area_line(int area_temp, char m[101][101], int i, int j, int n)
// {
//     // правее до конца
//     area_temp += 1;
//     m[i][j] = '.'; // посчитали и убрали. нафиг не нужна уже.
//     int k = 1;
//     while (j + k < n)
//     {
//         if (m[i][j + k] == '*')
//         {
//             area_temp += 1;
//             m[i][j + k] = '.';
//             k += 1;
//         }
//         else
//             break;
//     }
//     return area_temp;
// }

// Произвольные фигуры
#include <stdio.h>

int paint(char m[101][101], int i, int j, int n, char color);

int main(void)
{
    int n;
    scanf("%d", &n);
    char m[101][101];
    // записали масив
    for (int i = 0; i < n; i += 1)
    {
        scanf("%101s", m[i]);
    }

    // разукрашка
    char color = '1';
    for (int i = 0; i < n; i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            if (m[i][j] == '*')
            {
                paint(m, i, j, n, color);
                color += 1; // следующий цвет взяли
            }
        }
    }

    printf("%c", color - 1);
    return 0;
}

// функции

int paint(char m[101][101], int i, int j, int n, char color)
{
    if (m[i][j] == '*')
    {
        m[i][j] = color;
        if (i + 1 < n)
            paint(m, i + 1, j, n, color);
        if (i - 1 >= 0)
            paint(m, i - 1, j, n, color);
        if (j + 1 < n)
            paint(m, i, j + 1, n, color);
        if (j - 1 >= 0)
            paint(m, i, j - 1, n, color);
    }
    else
        return 0;
}
