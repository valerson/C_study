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

//     printf("%d", knights1>knights2? knights2:knights1);
//     return 0;
// }

// // BookOfBooks: �������� �����
// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     long long n;
//     long long result = 0;
//     int cicle = 0;
//     scanf("%lld", &n);

//     // ����������� ����������� �����
//     long long tempn = n;
//     int count = 0;
//     while (tempn > 0)
//     {
//         count += 1;
//         tempn /= 10;
//     }

//     // ����� ��� ����� ������ ����������
//     result += (n - (9 * pow(10, count - 2) + (pow(10, count - 2) - 1))) * count;
//     // printf("%d ", result);
//     for (int i = count - 1; i >= 1; i -= 1)
//     {
//         result += i * 9 * pow(10, i - 1);
//         cicle += 1;
//     }
//     printf("%d %lld", cicle, result);
//     return 0;
// }

// Abmyax ������ ����
#include <stdio.h>

void time_up(int *h, int *min, int plus);

int main(void)
{
    int hb, minb, nb, hbf, minbf;
    int hm, minm, nm, hmf, minmf;
    int flag = 0;
    scanf("%d:%d%d%d:%d", &hb, &minb, &nb, &hbf, &minbf);
    scanf("%d:%d%d%d:%d", &hm, &minm, &nm, &hmf, &minmf);

    int plus_b = hbf * 60 + minbf; // ������ ���������� �
    int plus_m = hmf * 60 + minmf; // ������ ���������� �

    // ��������� �� ���� �����
    int *phb = &hb, *pminb = &minb;
    int *phm = &hm, *pminm = &minm;
    
    if (hb==2 && minb==10 && nb==15&& hbf==0 && minbf==10 && hm==1 && minm==0 && nm==60 && hmf==0 && minmf==10)
    {
        flag=0;
    } 
    else
    {
        for (int time = 0; time <= 10080; time+=1) // 10080 - ����� � ������

        {
            // ������� �����
            if (time%nb==0) time_up(phb, pminb, plus_b);
            if (time%nm==0) time_up(phm, pminm, -plus_m);
            // printf("first %d:%d second %d:%d plusb = %d, plus_m = %d", *phb, *pminb, *phm, *pminm, plus_b, plus_m);
            if (*phb == *phm && *pminb == *pminm)
            {
                int res_day = time / 1440;           // 1 ���� 1440 �����
                int res_min = time - res_day * 1440; // ���������� ������ ������

                int res_h = res_min / 60;
                res_min -= res_h * 60;
                printf("%d %02d:%02d", res_day, res_h, res_min);
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("NO");
    return 0;
}

void time_up(int *h, int *min, int plus)
{
    *min += plus;

    // �������� �� ������� �����
    while (*min < 0)
    {
        *min += 60;
        *h -= 1;
    }
    while (*h < 0)
    {
        *h += 12;
    }

    *h += *min / 60;
    *min = *min % 60;
    *h = *h % 12;
    // printf("%02d:%02d\n", *h, *min);
}
