#include <stdio.h>
#include <math.h>
#define G 9.81          //ускорение свободного падения
#define PI 3.1415926    // число пи
int main(void){
    double 
        a,      //угол, под которым бросили тело
        v_0,    //начальная скоростьтела
        h;      //высота - трбуется определить
    scanf("%lf%lf", &a, &v_0);
    double alpha=a*PI/180;
    h=v_0*v_0*sin(alpha)*sin(alpha)/2/G;
    printf("%lf", h);

    return 0;
}