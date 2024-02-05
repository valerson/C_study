// #include <stdio.h>

// int main(void){
//     int n;
//     scanf("%d", &n);
//     printf("%d", n/4);

//     return 0;
// }

#include <stdio.h>

int main(void){
    int round, total;
    scanf("%d %d", &round, &total);
    printf("%d %d", total/round, total - round*(total/round));
    return 0;
}
