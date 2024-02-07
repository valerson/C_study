#include <stdio.h>  // чтобы работали scanf и printf
#include <assert.h> // чтобы работал assert

float fahr(int cel)
{
    return (cel * 1.8) + 32;
}
int main()
{
    int cel; // градусы Цельсия
    float f; // градусы Фаренгейта

    // тесты
    assert(32 == fahr(0)); // сравнение это ДВА ==
    assert(122 == fahr(50));
    assert(-40 == fahr(-40));
    assert(33.8 == fahr(1)); // тут ошибка

    // для произвольного числа
    scanf("%d", &cel);
    f = fahr(cel);
    printf("C = %d, F = %.2f\n", cel, f);

    return 0;
}
