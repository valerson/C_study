// // Aknights ������ � �����
#include <stdio.h>
int funk(int next, int status);

int main(void)
{
    int n;
    int knights1 = 0, knights2 = 0;
    int status1, status2; // ����������� ������ 1 ��� ���� 0
    int next;             // ������ � ������
    scanf("%d", &n);

    status1 = 1; // ������ - ��� ������
    status2 = 0; // ������ - ��� ����

    // // 1 ����� - ������- ��� ������
    for (int i = 0; i < n; i += 1)
    {
        scanf("%d", &next);
        // ������ ������
        if (status1 == 1) // ������ ������, ���..
        {
            if (next == 1) //..��������� ������
            {
                knights1 += 1;
                status1 = 1;
            }
            else //..��������� ����
                status1 = 0;
        }

        else // status==0 ���� ������, ���..
        {
            if (next == 0) //..���� - ����
            {
                knights1 += 1;
                status1 = 1;
            }
            else
                status1 = 0; //..��������� ������
        }

        // ������ ����
        if (status2 == 1) // ������ ������, ���..
        {
            if (next == 1) //..��������� ������
            {
                knights2 += 1;
                status2 = 1;
            }
            else //..��������� ����
                status2 = 0;
        }

        else // status==0 ���� ������, ���..
        {
            if (next == 0) //..���� - ����
            {
                knights2 += 1;
                status2 = 1;
            }
            else
                status2 = 0; //..��������� ������
        }
    }

    // printf("knights 1 = %d knights 2 = %d\n", knights1, knights2);

    printf("%d", knights1 > knights2 ? knights2 : knights1);
    return 0;
}