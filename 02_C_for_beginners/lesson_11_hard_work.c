// // BreadsPandS ������
// #include <stdio.h>
// #include <string.h>

// // �������� �� ������������ ���� � ������
// int check_one(char s[]);

// // �������� �� ������� ������������ ������������� ���� � ������
// int check_repeat(char s[], int pmax);

// // ���������� ������������ ����� ������������� ���������
// int find_pmax(char s[]);

// // �������� �� ��������������
// int check_symmetry(char s[], int len);

// int main(void)
// {
//     char s[1000];
//     fgets(s, 1000, stdin);
//     int n = strlen(s);
//     //printf("%s\n", s);
//     //printf("%d\n", n);

//     int pmax = find_pmax(s);
//     //printf("pmax = %d\n", pmax);
//     // res == ����������� ���������� ������������� ����. ���� n, �� ��� ��������.
//     int res = check_repeat(s, pmax);
    
//     //printf("res = %d\n", res+1);
//     //printf("simmetry = %d\n", check_symmetry(s, res+1));
//     if (res == n || check_symmetry(s, res+1)==0)
//         printf("NO");
//     else
//     {
//         for (int i = 0; i <= res; i += 1)
//             printf("%c", s[i]);
//     }

//     return 0;
// }

// int check_one(char s[])
// {
//     int n = strlen(s);
//     for (int i = 0; i < n; i += 1)
//     {
//         if (s[0] != s[i])
//             return 0;
//     }
//     return 1;
// }

// int find_pmax(char s[])
// {
//     int n = strlen(s);
//     for (int i = n / 2; i > 0; i -= 1)
//     {
//         if (n % i == 0)
//             return i;
//     }
// }

// int check_repeat(char s[], int pmax)
// {
//     int count = 0;
//     int result = strlen(s);
//     for (int j = pmax; j >= 0; j -= 1)
//     {
//         // printf("count = %d", count);
//         for (int i = 0; i < pmax; i += 1)
//         {
//             if (s[i] == s[j + 1 + i])
//             {
//                 // printf("find!!! i = %d, j = %d\n", i, j);
//                 count += 1;
//             }
//             else
//                 break;
//         }
//         if (count == pmax && result > j)
//         {
//             result = j;
//         }
//         count = 0;
//     }
//     if (result != strlen(s))
//         return result;
//     else
//         return strlen(s);
//     // printf("-------------------------------------!!! j = %d\n", result);
// }

// int check_symmetry(char s[], int len)
// {
//     int n=strlen(s);
//     if (n%2==0)
//     {
//         //printf("chetnoe!\n");
//         //printf("len= %d\n", n);
//         //������
//         for (int i=0; i<n/2; i+=1)
//         {
//             if (s[i]!=s[n/2+i]) return 0; //0-�� ������������
//         }
//         return 1; //1 - ������������
//     }
//     else
//     {
//         //��������
//         //printf("NEchetnoe!\n");
//         //������� �������� (��������������� ��������) ������� ����� ���������� ���������
//         // �.�. ��� 9 ���� �=9/3/2=1.���������� 123 - �������� - 123.
//         int c=n/len/2;
//         for (int i=0; i<c*len; i+=1)
//         {
//             if (s[i]!=s[n-c*len+i]) return 0; //0-�� ������������
//         }
//         return 1; //1 - ������������
//     }
// }
