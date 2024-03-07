#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    char pg[SIZE][SIZE] = {0};
    int temp_mine = 0;
    int mines = 12;
    int mine_mass[SIZE] = {0};

    // генерация количества случайного количества бомб в каждом ряду
    while (mines != 0)
    {
        for (int i = 0; i < SIZE; i += 1)
        {
            srand(time(NULL));
            mines -= temp_mine;
            do
            {
                if (i == 0)
                    temp_mine = rand() % (SIZE / 2 - temp_mine);
                else
                    temp_mine = rand() % (SIZE / 2 - mine_mass[i - 1]);
            } while (mines - temp_mine < 0);
            mines -= temp_mine;
            mine_mass[i] = temp_mine;
            temp_mine = 0;
            if (mines == 0)
                break;
        }
    }

    // for (int i = 0; i < SIZE; i += 1)
    // {
    //     for (int j = 0; j < SIZE; j += 1)
    //     {
    //         pg[i][j] = 0;
    //     }
    // }

    for (int i = 0; i < SIZE; i += 1)
    {

        for (int j = 0; j < SIZE; j += 1)
        {
            if (mine_mass[i] == 0)
                break;
            if (i == 0) // первая строка
            {
                if (j > 0 && j < SIZE - 1)
                {
                    if (pg[i][j - 1] == 0)
                    {
                        pg[i][j] = '*';
                        mine_mass[i] -= 1;
                    }
                }

                if (j == 0)
                {
                    pg[i][j] = '*';
                    mine_mass[i] -= 1;
                }

                if (j == SIZE - 1)
                {
                    if (pg[i][j - 1] == 0)
                    {
                        pg[i][j] = '*';
                        mine_mass[i] -= 1;
                    }
                }
            }

            if (i == SIZE - 1) // последняя строка
            {
                if (j > 0 && j < SIZE - 1)
                {
                    if (pg[i][j + 1] == 0 && pg[i][j - 1] == 0 && pg[i - 1][j + 1] == 0 && pg[i - 1][j - 1] == 0 && pg[i - 1][j] == 0)
                    {
                        pg[i][j] = '*';
                        mine_mass[i] -= 1;
                    }
                }

                if (j == 0)
                {
                    if (pg[i][j + 1] == 0 && pg[i - 1][j + 1] == 0 && pg[i - 1][j] == 0)
                    {
                        pg[i][j] = '*';
                        mine_mass[i] -= 1;
                    }
                }

                if (j == SIZE - 1)
                {
                    if (pg[i][j - 1] == 0 && pg[i - 1][j - 1] == 0 && pg[i - 1][j] == 0)
                    {
                        pg[i][j] = '*';
                        mine_mass[i] -= 1;
                    }
                }
            }

            if (i > 0 && i < SIZE - 1) // середина таблицы
            {
                if (j > 0 && j < SIZE - 1)
                {
                    if (pg[i][j + 1] == 0 && pg[i][j - 1] == 0 && pg[i - 1][j + 1] == 0 && pg[i - 1][j - 1] == 0 && pg[i - 1][j] == 0)
                    {
                        pg[i][j] = '*';
                        mine_mass[i] -= 1;
                    }
                }

                if (j == 0)
                {
                    if (pg[i - 1][j + 1] == 0 && pg[i - 1][j] == 0)
                    {
                        pg[i][j] = '*';
                        mine_mass[i] -= 1;
                    }
                }

                if (j == SIZE - 1)
                {
                    if (pg[i][j - 1] == 0 && pg[i - 1][j - 1] == 0 && pg[i - 1][j] == 0)
                    {
                        pg[i][j] = '*';
                        mine_mass[i] -= 1;
                    }
                }
            }
        }
    }

    // printf("table result = \n");
    // for (int i = 0; i < SIZE; i += 1)
    // {
    //     for (int j = 0; j < SIZE; j += 1)
    //     {
    //         printf("%c", pg[i][j]);
    //     }
    //     printf("\n");
    // }

    __assert_verify_pg(pg); // для тестирования (не убирать и должна идти непосредственно перед return 0)
    return 0;
}
