// // // Aknights ������ � �����
// #include <stdio.h>
// int main(void)
// {
//     int n, enter;
//     int knights_1 = 0, knights_2, temp, first;
//     scanf("%d", &n);
//     scanf("%d", &enter);
//     first = enter; // ��� ������ ������
//     // temp = enter;
//     // temp = 1; //-������ �����
//     temp = 0; //-������ �����

//     // // 1 ����� - ������- ��� ������
//     // for (int i = 1; i < n; i += 1)
//     // {
//     //     scanf("%d", &enter);
//     //     if (temp == 1) // ������ ������, ���..
//     //     {
//     //         if (enter == 1) //..��������� ������
//     //         {
//     //             knights_1 += 1;
//     //             temp = 1;
//     //         }
//     //         else //..��������� ����
//     //             temp = 0;
//     //     }
//     //     else // ���� ������, ���..
//     //     {
//     //         if (enter == 0) //..���� - ����
//     //         {
//     //             knights_1 += 1;
//     //             temp = 1;
//     //         }
//     //         else
//     //             temp = 0; //..��������� ������
//     //     }
//     // }
//     // if (temp == 1) // ������ ������, ���..
//     // {
//     //     if (first == 1) //..������ ������
//     //     {
//     //         knights_1 += 1;
//     //     }
//     // }
//     // else // ���� ������, ���..
//     // {
//     //     if (enter == 0) //..������ - ����
//     //     {
//     //         knights_1 += 1;
//     //     }
//     // }

//     // 2 ����� - ������- ��� ����
//     for (int i = 1; i < n; i += 1)
//     {
//         // scanf("%d", &enter);
//         if (temp == 0) // ���� ������, ���..
//         {
//             if (enter == 1) //..��������� ������
//                 temp = 0;
//             else //..��������� ����
//             {
//                 knights_1 += 1;
//                 temp = 1;
//             }
//         }

//         else // ������ ������, ���..
//         {
//             if (enter == 0) //..���� - ����
//                 temp = 0;
//             else //..��������� ������
//             {
//                 knights_1 += 1;
//                 temp = 1;
//             }
//         }
//         scanf("%d", &enter);
//     }
//     if (temp == 1) // ������ ������, ���..
//     {
//         if (first == 1) //..������ ������
//         {
//             knights_1 += 1;
//         }
//     }
//     else // ���� ������, ���..
//     {
//         if (enter == 0) //..������ - ����
//         {
//             knights_1 += 1;
//         }
//     }

//     printf("knights = %d\n", knights_1);
//     // printf("knights = %d\n", knights_2);
//     return 0;
// }

// // Aknights ������ � �����
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

// #include <stdio.h>

// struct Card
// {
//     char rank; // �����������
//     char suit; // �����
// };

// int main()
// {
//     struct Card hand[] = {{'Q', 's'}, {'A', 'h'}, {'9', 'd'}, {0, 0}};

//     // ���������� ����� �� ���������, ��������� �� ��������:
//     for (int i = 0; hand[i].rank != 0; i++)
//         printf("%c%c", hand[i].rank, hand[i].suit);
//     printf("\n");

//     // ���� �� � ���������� / �� ���� ��� ������� �� ��������� (���������� �����-�������) �������
//     struct Card *p;                      // ��������� �� ���� �����
//     for (p = hand; p->rank != 0; p += 1) // p.rank=p->rank p=hand = struct Card *
//         prinrtf("%c%c", p->rank, p->suit);
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// #define DECKSIZE 52
// struct Card
// {
//     char rank; // �����������
//     char suit; // �����
// };

// void read_cards(struct Card *hand)
// {
//     struct Card *p; // ��������� �� ���� �����
//     for (p = hand; 2 == scanf("%c%c", &p->rank, &p->suit); p++)
//         ;
//     // � ����� ������� ��������� �����
//     p->rank = p->suit = 0;
// }

// void print_cards(struct Card *hand)
// {
//     struct Card *p; // ��������� �� ���� �����
//     for (p = hand; p->rank != 0; p++)
//         printf("%c%c", p->rank, p->suit);
//     printf("\n");
// }

// int main()
// {
//     struct Card hand[DECKSIZE + 1];
//     read_cards(hand);
//     print_cards(hand);

//     return 0;
// }

// // BookOfBooks: �������� �����
// #include <stdio.h>

// int main(void)
// {
//     int min = 20, h = 11;
//     printf("%02d:%02d\n", h, min);
//     int plus = -60;
//     min += plus;

//     while (min < 0)
//     {
//         min += 60;
//         h -= 1;
//     }
//     while (h < 0)
//     {
//         h += 12;
//     }

//     h += min / 60;
//     min = min % 60;
//     h = h % 12;
//     printf("%02d:%02d\n", h, min);
//     return 0;
// }

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

    for (int day = 0; day < 7; day++)
    {
        for (int time_b = 0, time_m = 0; time_b <= 1440; time_b += nb, time_m += nm) // 1440 - ����� � ���
        {
            // ������� �����
            time_up(phb, pminb, plus_b);
            time_up(phm, pminm, -plus_m);
            if (*phb == *phm && *pminb == *pminm)
            {
                int res_day = day;
                int res_hour = *phb;
                int res_min = *pminb;
                printf("%d %02d:%02d\n", res_day, res_hour, res_min);
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
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