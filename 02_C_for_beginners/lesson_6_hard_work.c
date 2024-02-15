// // Zif_11palochek 11 палочек
// #include <stdio.h>
// int main(void){
//     int n;
//     scanf("%d", &n);
//     int m=n/8;
//     switch (n-m*8)
//     {
//     case 2: {printf("%d", 1); break;}
//     case 3: {printf("%d", 2); break;}
//     case 4: {printf("%d", 3); break;}
//     default: {printf("-1");break;}
//     }
//     return 0;
// }

//if_boat Переправа
#include <stdio.h>

int maximum(int a, int b, int c){
    if (a>=b && a>=c) return a;
    if (b>=a && b>=c) return b;
    if (c>=a && c>=b) return c;
    return a;
}

int result(int a, int b, int c, int k){
    int summ=a+b+c;
    if (maximum(a,b,c) > k)return 0;
    if (summ - maximum(a,b,c) > k) return 0;
    return 1;
}

int main(void){
    int k, p1,p2,p3;
    scanf("%d%d%d%d",&k,&p1,&p2,&p3);
    printf(result(p1,p2,p3,k)==0? "NO":"YES");
    return 0;
}