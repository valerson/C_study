#include <stdio.h>
int main(void)
{
    int h, count_all = 0, count_170 = 0;
    char end;
    do
    {
        scanf("%d%c", &h, &end);
        count_all += 1;
        if (h > 170)
            count_170 += 1;
    } while (end != '\n');
    printf("%d %d", count_all, count_170);
    return 0;
}