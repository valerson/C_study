// // Aknights Рыцари и лжецы
#include <stdio.h>
int funk(int next, int status);

int main(void)
{
    int n;
    int knights1 = 0, knights2 = 0;
    int status1, status2; // действующий рыцарь 1 или лжец 0
    int next;             // мнение о соседе
    scanf("%d", &n);

    status1 = 1; // первый - это рыцарь
    status2 = 0; // первый - это лжец

    // // 1 ветка - первый- это рыцарь
    for (int i = 0; i < n; i += 1)
    {
        scanf("%d", &next);
        // первый рыцарь
        if (status1 == 1) // рыцарь сказал, что..
        {
            if (next == 1) //..следующий рыцарь
            {
                knights1 += 1;
                status1 = 1;
            }
            else //..следующий лжец
                status1 = 0;
        }

        else // status==0 лжец сказал, что..
        {
            if (next == 0) //..след - лжец
            {
                knights1 += 1;
                status1 = 1;
            }
            else
                status1 = 0; //..следующий рыцарь
        }

        // первый лжец
        if (status2 == 1) // рыцарь сказал, что..
        {
            if (next == 1) //..следующий рыцарь
            {
                knights2 += 1;
                status2 = 1;
            }
            else //..следующий лжец
                status2 = 0;
        }

        else // status==0 лжец сказал, что..
        {
            if (next == 0) //..след - лжец
            {
                knights2 += 1;
                status2 = 1;
            }
            else
                status2 = 0; //..следующий рыцарь
        }
    }

    // printf("knights 1 = %d knights 2 = %d\n", knights1, knights2);

    printf("%d", knights1 > knights2 ? knights2 : knights1);
    return 0;
}