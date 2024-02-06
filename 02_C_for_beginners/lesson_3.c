// #include <stdio.h>

// int main(void){
//     int n;
//     scanf("%d", &n);
//     printf("%d", n/4);

//     return 0;
// }

// #include <stdio.h>

// int main(void){
//     int round, total;
//     scanf("%d %d", &round, &total);
//     printf("%d %d", total/round, total - round*(total/round));
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     double a, b;
//     scanf("%lf %lf", &a, &b);
//     printf("%.1lf", a*b);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     double s, w, ch;
//     scanf("%lf %lf %lf", &s, &w, &ch);
//     printf("%.lf",(s/w)/ch);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int rub, kop, n=0, rest;
//     scanf("%d %d", &rub, &kop);
//     while ((n*100+n*5+n*1)<=(rub*100+kop))
//     {
//         n+=1;
//     }
//     printf("%d %d", n-1, rub*100+kop - (n-1)*106);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int n, day;
//     scanf("%d %d", &n, &day);
//     printf("%d", 1+(n-day)/7);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n, res;
//     double k;
//     scanf("%d %lf", &n, &k);
//     res=n - k * n;
//     printf("%d", res);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int bell,nbell, n;
//     scanf("%d %d", &bell, &nbell);
//     n=nbell-bell+1;
//     printf("%d", (bell+nbell)*n/2);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int g_1, s_1, k_1, g_2, s_2, k_2;
//     double total, g_res, s_res, k_res;
//     scanf("%d %d %d", &g_1, &s_1, &k_1);
//     scanf("%d %d %d", &g_2, &s_2, &k_2);
//     total=g_1*17*29 + s_1*29 + k_1 + g_2*17*29 + s_2*29 + k_2;
//     g_res = total/17/29;
//     g_res=(int)g_res;
//     s_res = (total-(int)g_res*17*29)/29;
//     s_res=(int)s_res;
//     k_res = total-(int)g_res*17*29-(int)s_res*29;
//     printf("%.lf %.lf %.lf", g_res, s_res, k_res);
//     return 0;
// }