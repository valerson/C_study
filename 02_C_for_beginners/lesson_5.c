// #include <stdio.h>

// int code(int letter, int shift)
// {
//     printf("%d\n", letter+shift);
//     if (letter+shift>=123){return 97+(letter+shift)%123;}
//     else return letter+shift;
// }


// int main()
// {
//     // читаем по символу
//     char c1, c2, c3, c4;    // ASCII-коды символов
//     int shift;              // сдвиг шифра Цезаря

//     scanf("%c%c%c%c", &c1, &c2, &c3, &c4);
//     scanf("%d", &shift);

//     c1 = code(c1, shift);
//     c2 = code(c2, shift);
//     c3 = code(c3, shift);
//     c4 = code(c4, shift);

//     printf("%c%c%c%c\n", c1, c2, c3, c4);


//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     char letter;
//     scanf("%c",&letter);
//     printf("%c", letter+32);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     char letter;
//     int num;
//     scanf("%c%d",&letter,&num);
//     printf("%c%d", letter, 1+(num)%(8-1+1));
//     return 0;
// }


#include <stdio.h>
int main(void){
    char letter;
    int num;
    scanf("%c%d",&letter,&num);
    if (letter==74 && num>1 &&num<10){printf("%c%d %c%d %c%d", letter-1, num, letter, num+1, letter, num-1);}
    if (letter==65 && num>1 &&num<10){printf("%c%d %c%d %c%d", letter, num+1, letter+1, num, letter, num-1);}
    if (letter==74 && num==1){printf("%c%d %c%d", letter-1, num, letter, num+1);}
    if (letter==74 && num==10){printf("%c%d %c%d", letter-1, num, letter, num-1);}
    if (letter==65 && num==1){printf("%c%d %c%d", letter, num+1, letter+1, num);}
    if (letter==65 && num==10){printf("%c%d %c%d", letter+1, num, letter, num-1);}
    if (letter>65 && letter<74&&num>1&&num<10){printf("%c%d %c%d %c%d %c%d", letter-1, num, letter, num+1, letter+1, num, letter, num-1);}
    return 0;
}