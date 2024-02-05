// #include <stdio.h>

// int main(void)
// {
//     int x;
//     scanf("%d",&x);
//     printf("%d %d %d", x*x, x*x*6, x*x*x);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     double r, h, pi=3.14159265358979323846;
//     scanf("%lf %lf", &r, &h);
//     printf("%.2lf %.2lf", pi*r*r*h, h*pi*r*r/3);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int sec;
//     scanf("%d", &sec);
//     printf("%d %d", sec/3600, sec/60%60);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     double r_i, r_o;
//     double result_km, result_gtair, pi = 3.14159265358979323846,S;
//     scanf("%lf %lf", &r_i, &r_o);
//     S=((pow(r_o,2))-pow(r_i,2))*pi*100;
//     printf("%.0lf %.2lf", r_o-r_i, S);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int N; //количтсве стаканов
//     double m=3e-23, M=0.05, gr=249.5;
//     scanf("%d", &N);
//     printf("%.0lf %.3e", N*gr/M, N*gr/m);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int M,N;
//     scanf("%d %d", &M, &N);
//     printf("%d %d", (M/N)%10, (int)trunc((double)M*10/N)%10);

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int K;
//     scanf("%d", &K);
//     printf("%d%d%d",K%10,K/10%10,K/100%10);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int A = 3421;
//     double x, y;
//     // scanf("%d", &A);
//     x = (A / 1000 % 10) * (A / 10 % 10);
//     y = (A / 100 % 10) * (A % 10);
//     // printf("%.2lf", (double)x / y);

//     printf("%d\n", A / 1000 % 10); // 3
//     printf("%d\n", A / 10 % 10);   // 2

//     printf("%d\n", A / 100 % 10); // 4
//     printf("%d\n", A % 10);       // 1

//     printf("x=%lf\ty=%lf", x, y);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int K;
//     scanf("%d", &K);
//     printf("%.lf", K * (pow(1024, 3) - pow(1000, 3)));

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int K;
//     scanf("%d",&K);
//     printf("%d", (1+K)%2);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int N = 10;
//     printf("1! =%8d\n", 1);
//     printf("2! =%8d\n", 1*2);
//     printf("3! =%8d\n", 1*2*3);
//     printf("4! =%8d\n", 1*2*3*4);
//     printf("5! =%8d\n", 1*2*3*4*5);
//     printf("6! =%8d\n", 1*2*3*4*5*6);
//     printf("7! =%8d\n", 1*2*3*4*5*6*7);
//     printf("8! =%8d\n", 1*2*3*4*5*6*7*8);
//     printf("9! =%8d\n", 1*2*3*4*5*6*7*8*9);
//     printf("10!=%8d\n", 1*2*3*4*5*6*7*8*9*10);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int f = 1;

//     printf("1! =%8d\n", f *= 1);
//     printf("2! =%8d\n", f *= 2);
//     printf("3! =%8d\n", f *= 3);
//     printf("4! =%8d\n", f *= 4);
//     printf("5! =%8d\n", f *= 5);
//     printf("6! =%8d\n", f *= 6);
//     printf("7! =%8d\n", f *= 7);
//     printf("8! =%8d\n", f *= 8);
//     printf("9! =%8d\n", f *= 9);
//     printf("10!=%8d\n", f *= 10);

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     double a,b=2,c=3;
//     a=1+1/1+(double)1/(1*2)+(double)1/(1*2*3);
//     b=1+1/1+(double)1/(1*2)+(double)1/(1*2*3)+(double)1/(1*2*3*4);
//     c=1+1/1+(double)1/(1*2)+(double)1/(1*2*3)+(double)1/(1*2*3*4)+(double)1/(1*2*3*4*5);
//     printf("%.5lf\n%.5lf\n%.5lf\n", a,b,c);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int a1=1, a2=1*2, a3=1*2*3, a4=1*2*3*4, a5=1*2*3*4*5;
//     double x;
//     scanf("%lf",&x);
//     double result_math=exp(x), result_formula=1+pow(x,1)/a1+pow(x,2)/a2+pow(x,3)/a3+pow(x,4)/a4+pow(x,5)/a5;
//     printf("%.6lf\n",result_math);
//     printf("%.6lf", result_formula);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int r;
//     scanf("%d",&r);
//     printf("%d %d", r*2, r*4/900);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int k;
//     scanf("%d",&k);
//     printf("%.lf", 2*((k+1)%2)-pow(1,k%2));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int k;
//     scanf("%d",&k);
//     k=fabs(k); //самое простое и правильное
//     printf("%.lf", 2*((k+1)%2)-pow(1,k%2));
//     // printf("%.lf", 2*(((int)(double)fabs(k)+1)%2)-pow(1,(int)(double)fabs(k)%2));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int x_1, x_2, x_3, x_4, x_5, result;
//     scanf("%d %d %d %d %d", &x_1, &x_2, &x_3, &x_4, &x_5);
//     x_1 = fabs(x_1);
//     x_2 = fabs(x_2);
//     x_3 = fabs(x_3);
//     x_4 = fabs(x_4);
//     x_5 = fabs(x_5);
//     result=2 * ((x_1 + 1) % 2) - pow(1, x_1 % 2)+2 * ((x_2 + 1) % 2) - pow(1, x_2 % 2)+2 * ((x_3 + 1) % 2) - pow(1, x_3 % 2)+2 * ((x_4 + 1) % 2) - pow(1, x_4 % 2)+2 * ((x_5 + 1) % 2) - pow(1, x_5 % 2);
//     printf("%d", -result);

//     return 0;
// }

/*НЕ РЕШИЛ СХОДУ*/
// #include <stdio.h>
// int main(void)
// {
//     int k = 12345;
//     printf("%lf",0/0);
//     // printf("%d\n", k /10000 % 10); // 1
//     // printf("%d\n", k /1000 % 10); // 2
//     // printf("%d\n", k /100 % 10); // 3
//     // printf("%d\n", k /10 % 10); // 4
//     // printf("%d\n", k % 10); // 5
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int k;
//     scanf("%d",&k);
//     printf("%d", k/10);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int k;
//     scanf("%d",&k);
//     printf("%d", k*10);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int k, res;
//     scanf("%d", &k);
//     res = 100 * (k % 10) + 10 * (k / 100 % 10) + 1 * (k / 10 % 10);
//     printf("%d", res);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int k, res, x_0, x_1, x_2;
//     scanf("%d", &k);
//     x_0 = k / 100 % 10;
//     x_1 = k / 10 % 10;
//     x_2 = k % 10;
//     res = 100 * x_1 + 10 * x_2 + 1 * x_0;
//     printf("%d", res);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int sec, h,m,s;
//     scanf("%d", &sec);
//     h=sec/3600;
//     m=sec/60%60;
//     s=sec%60;
//     // printf("%d\n",h);
//     // printf("%d\n",m);
//     printf("%d\n",s+m*60);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int k;
//     scanf("%d", &k);
//     printf("%.lf", ceil((double)k/7));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int k;
//     scanf("%d", &k);
//     printf("%.lf", ceil((double)(4+k)/7));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int k;
//     double week, day;
//     scanf("%d", &k);
//     week=ceil((double)(0+k)/7); //какая неделя идет
//     day=k-(double)7*(week-1); //какой день недели по счету воск - 7

//     printf("%.lf", (k-(double)7*(week-1)-7*trunc(day/7)));
//     return 0;
// }

// // ХОРОШЕЕ РЕШЕНИЕ
// #include <stdio.h>

// int main()
// {
//     int k;
//     scanf("%i", &k);
//     printf("%i", k % 7);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int k;
//     double week, day;
//     scanf("%d", &k);
//     week=ceil((double)(2+k)/7); //какая неделя идет
//     day=2+k-(double)7*(week-1); //какой день недели по счету воск - 7
//     printf("%.lf", (2+k-(double)7*(week-1)-7*trunc(day/7)));
//     return 0;
// }

// /*НЕ РЕШИЛ СХОДУ*/
// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int x_1, x_2, x_3, x_4, x_5;
//     scanf("%d %d %d %d %d", &x_1, &x_2, &x_3, &x_4, &x_5);
//     printf("%.lf", (double)x_1*x_1+x_2*x_2+x_3*x_3+x_4*x_4+x_5*x_5);

//     // printf("%d\n", k /10000 % 10); // 1
//     // printf("%d\n", k /1000 % 10); // 2
//     // printf("%d\n", k /100 % 10); // 3
//     // printf("%d\n", k /10 % 10); // 4
//     // printf("%d\n", k % 10); // 5
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int k;
//     scanf("%d", &k);
//     printf("%.lf", (double)2*pow(2,k/3-1));
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int f, d;
//     scanf("%d %d", &f, &d);
//     double result = (double)f * 0.3048 + (double)d * 0.0254;
//     printf("%d\'%d\" = %.2lf m", f, d, result);

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int m;
//     scanf("%d", &m);
//     printf("%.2lf", (double)m*2.27/5);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int f;
//     scanf("%d", &f);
//     printf("%.2lf", (double)(f-32)/1.8);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int b;
//     double x_1, x_2, x_3, x_4;
//     scanf("%d", &b);
//     x_1 = b / 1000 % 10;
//     x_2 = b / 100 % 10;
//     x_3 = b / 10 % 10;
//     x_4 = b / 1 % 10;
//     // printf("%lf %lf %lf %lf", x_1, x_2, x_3, x_4);
//     printf("%.lf", x_4 * pow(2, 0) + x_3 * pow(2, 1) + x_2 * pow(2, 2) + x_1 * pow(2, 3));

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int k, number;
//     scanf("%d %d", &k, &number);
//     double x_1, x_2, x_3, x_4;
//     x_1 = number / 1000 % 10;
//     x_2 = number / 100 % 10;
//     x_3 = number / 10 % 10;
//     x_4 = number / 1 % 10;
//     printf("%.lf", x_4 * pow(k, 0) + x_3 * pow(k, 1) + x_2 * pow(k, 2) + x_1 * pow(k, 3));

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     printf("%d", n%m);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int k, num_1, num_2;
//     scanf("%d %d %d", &k, &num_1, &num_2);
//     printf("%d %d", num_1%k, num_2%k);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n,k,x;
//     scanf("%d %d %d", &n, &k, &x);
//     printf("%d", (x+k)%n);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {

//     int k, x_1, x_2, x_3, x_4, n = (25+1); //n=25 букв плюс 0
//     scanf("%d %d %d %d %d", &k, &x_1, &x_2, &x_3, &x_4);
//     printf("%d %d %d %d", (k + x_1) % n, (k + x_2) % n, (k + x_3) % n, (k + x_4) % n);

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {

//     int x, x_1, x_2, x_3, x_4;
//     scanf("%d", &x);

//     x_1 = ((x / 1000 % 10) + 7) % 10;
//     x_2 = ((x / 100 % 10) + 7) % 10;
//     x_3 = ((x / 10 % 10) + 7) % 10;
//     x_4 = ((x / 1 % 10) + 7) % 10;
//     printf("%d%d%d%d", x_3, x_4, x_1, x_2);

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {

//     int x, x_1, x_2, x_3, x_4;
//     scanf("%d", &x);

//     x_1 = ((x / 1000 % 10) + 3) % 10;
//     x_2 = ((x / 100 % 10) + 3) % 10;
//     x_3 = ((x / 10 % 10) + 3) % 10;
//     x_4 = ((x / 1 % 10) + 3) % 10;
//     printf("%d%d%d%d", x_3, x_4, x_1, x_2);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {

//     unsigned int h;
//     double p_0=1.29;
//     scanf("%d", &h);
//     printf("%.2lf", (double)p_0*exp(-1.25e-4 * h));

//     return 0;
// }


#include <stdio.h>
#include <math.h>
int main(void)
{

    unsigned int k=4;
    // scanf("%d", &k);
    double lambda=log(2)/5570, n_0=7.5*pow(10,10);

    printf("а как тут будут отражены ру буквы? %.2lf", n_0*exp(-lambda*(double)k)/pow(10,9));

    return 0;
}