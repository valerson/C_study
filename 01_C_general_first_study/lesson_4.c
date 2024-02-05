// #include <stdio.h>
// int main(void){
//   int a=7, b=2;
//   double res;

//   res = a+b;
//   printf("%d + %d = %d\n",a,b,res);
//   res = a-b;
//   printf("%d - %d = %d\n",a,b,res);
//   res = a*b;
//   printf("%d * %d = %d\n",a,b,res);
//   res = a%b;
//   printf("%d %% %d = %.1lf\n",a,b,res);

//   return 0;
// }

// #include <stdio.h>
// int main(void){
//   int a=7, b=2;
//   double res;

// //   res = a/b;//результатом будет целое число 3
//   res = (double)a/b;//результатом будет вещественное число 3,5
//   printf("%d / %d = %lf\n",a,b,res);

//   return 0;
// }

// int a=7, b;
// float g= 9.81,v;

// b = (int) g; //приводим значение 9.81 к типу int, получим 9
// v= (float)a; // приводим значение 7 к типу float, получим 7.0

// #include <stdio.h>
// int main(void){
//   int diameter=113, length=355;
//   float pi=0;
//   pi = (float)length/diameter;
//   printf("pi = %.5f\n",pi);

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   // put your code here
//   int a, b;
//   scanf("%d",&a);
//   scanf("%d",&b);
// //   scanf("%d %d", &a, &b);
//   printf("%d", 2*(a+b));
//   return 0;
// }

// #include <stdio.h>

// int main()
// {
//     // put your code here
//     int a;
//     scanf("%d", &a);
//     printf("%d", a/100+a/10%10+a%10);//1+2+3
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     // put your code here
//     double tarif, result;
//     int start, end;
//     scanf("%d %d %lf", &start, &end, &tarif);
//     result=(end-start)*tarif;
//     printf("%.2lf", result);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     // put your code here
//     int a;
//     double r, pi;
//     pi=3.1415926;
//     scanf("%d", &a);
//     printf("%.2lf", pi*a/180);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int x = 0.14;
//     float y = 0;
//     // x = 3.14 / 2;
//     // y = x + 3.14;
//     printf("%d", x);
//     // printf("%lf", y);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int x_1, x_2, result;
//     scanf("%d %d", &x_1, &x_2);
//     // result=fabs(x_2-x_1);
//     // printf("%d",result);
//     printf("%d",(int)fabs(x_2-x_1));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     double x_1, y_1, x_2, y_2, result;
//     scanf("%lf %lf %lf %lf", &x_1, &y_1, &x_2, &y_2);
//     result=sqrt(pow((x_2-x_1),2)+pow((y_2-y_1),2));

//     printf("%.2lf", result);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     double a, b, angel, pi=3.1415926, result;
//     scanf("%lf %lf %lf", &a, &b, &angel);
//     // result=0.5*a*b*sin(angel*pi/180);
//     printf("%.2lf",0.5*a*b*sin(angel*pi/180));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int n, result;
//     scanf("%d", &n);
//     // result=pow(2,n);
//     // printf("%d", result);
//     printf("%d", (int)pow(2, n));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     double a,b,c,p;
//     scanf("%lf %lf %lf", &a, &b, &c);
//     p=(a+b+c)/2;
//     printf("%.2lf",sqrt(p*(p-a)*(p-b)*(p-c)));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {

//     int a, b, c, d, e, f, h;
//     double result;
//     scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &h);
//     result = a / (b * c / (d * e / ((double)f * h))); // чтобы оставить инт на вводе, то нужно
//     /// привести к дабл первую операцию (f*h)
//     // или просто тип на входе сделать дабл
//     printf("%.2lf", result);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// // #include <time.h>

// int main(void)
// {
//     srand(3);
//     // srand(time(NULL)); //инициализирует генератор случайных чисел начальным числом

//     // double temp;
//     // temp = time(NULL);
//     // printf("%lf",temp);

//     printf("%d\n", RAND_MAX); ///RAND_MAX=3276741
//     printf("%d\n", rand()%100);//ограничиваем верхнюю границу числом 100
//     printf("%d\n", rand()%53);//ограничиваем верхнюю границу числом 53
//     printf("%d\n", rand()%10);//ограничиваем верхнюю границу числом 10
//     printf("%d\n", 5+rand()%(10-5+1));//ограничиваем верхнюю границу числом 10, нижнюю 5

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     srand(time(NULL));
//     int number=rand()%2;
//     printf("%d",number);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     unsigned int N;
//     scanf("%d", &N);
//     srand(N);
//     if (N>1)
//     {
//        printf("%d", 1+rand()%(N+1));
//     }
//     else
//     {
//         printf("нужно введить положительное число больше нуля\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int S, E;
//     scanf("%d %d", &S, &E);
//     srand(E - S);
//     printf("%d", S + rand() % (E-S + 1));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void)
// {
//     int x_1, x_2, result;
//     scanf("%d %d", &x_1, &x_2);
//     result=fabs(x_2-x_1);
//     printf("%d",result);

//     printf("\nа вот результат, если прописать формулу в принтф сразу - %d",fabs(x_2-x_1));
//     printf("\nа вот результат, если прописать с (double) - %.lf",(double)fabs(x_2-x_1));

//     return 0;
// }
