#include <stdio.h>
int main(void){
    int g_1, s_1, k_1, g_2, s_2, k_2;
    double total, g_res, s_res, k_res;
    scanf("%d %d %d", &g_1, &s_1, &k_1);
    scanf("%d %d %d", &g_2, &s_2, &k_2);
    total=g_1*17*29 + s_1*29 + k_1 + g_2*17*29 + s_2*29 + k_2;
    g_res = total/17/29;
    s_res = (total-(int)g_res*17*29)/29;
    k_res = total-(int)g_res*17*29-(int)s_res*29;
    printf("%.lf %.lf %.lf", g_res, s_res, k_res);
    return 0;
}