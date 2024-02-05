// #include <stdio.h>

// int main(void)
// {
//     int a=5, b=6, res;
//     res = a+b;
//     printf("Результат a+b = %d", res);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int a=55;
//     printf("%d\tвторой раз%d\nтретий раз%d\n",a,a,a);
//     printf("%d + %d = %d\n", 20, 10, 20+10);
//     printf("%d + %d %c %d\n", 10, 20, '=', 20+10);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int a = 777;
//     float b = 23.4;
//     double c = 217.876;
//     char d = 's';

//     printf("Cheloe %d\n", a);
//     //   printf("Odin simvol %c\n",d);
//     //   printf("Vewestvennoe %f %10.2f %g\n",b,b,c); //%10.2f 10-ширина 2 - значность если перед 10 поставить - будет выравнивание по левому краю
//     printf("%8d\n", a);
//     printf("|%d|\n",a);
//     printf("|%8d|\n",a);
//     printf("|%-8d|\n",a);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int a=5;
//     char b='b';
//     char c='c';
//     // printf("\r%d\e",a);
//     printf("%d",b);
//     printf("%d",c);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void) {
// 	char one = '?';
// 	char two = '\?';

// 	printf("Compare chars: %d - %d\n", one, two);
// 	if (one == two){
// 		printf("It's equal!\n\n");
// 	} else {
// 		printf("It isn't equal!\n\n");
// 	}

// 	char tree[] = "?";
// 	char four[] = "\?";

// 	printf("Compare strings: %s - %s\n", tree, four);
// 	if (strcmp(tree, four) == 0){
// 		printf("It's equal!\n");
// 	} else {
// 		printf("It isn't equal!\n");
// 	}
//   return 0;
// }

/*почему double лучше float*/
// #include <stdio.h>
// int main(void){
//   int z = 1/10;
//   float x = 1.0/10.0;
//   double y = 1.0/10.0;
//   int a=10, b=5;

//   printf("искомое число 1\\10\n");
//   printf("int:\n%d\n\n", z);
//   printf("float:\n4\t--\t%.4f\n10\t--\t%.12f\n16\t--\t%.16f\n\n", x,x,x);
//   printf("double:\n4\t--\t%.4f\n10\t--\t%.12f\n16\t--\t%.16f\n", y,y,y);
//   printf("%d", a-b);

//   return(0);
// }

// 1n6dQQjenwnsOutp4reveREnD

// #include <stdio.h>
// int main(void)
// {
//     printf("S.Holmes:\n"
//     "51grad 31'25.48\" N\n"
//     "0 grad  9'29.93\" W\n");
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//   int a=3, b=4;
//   double res = 0.75;

//   printf("||-----|-----|-----|-----||\n");
//   printf("|| act | one | two | res ||\n");
//   printf("||=====+=====+=====+=====||\n");
//   printf("||%5c|%-5d|%-5d|%5.5d||\n",'+',a,b,a+b);
//   printf("||%5c|%5d|%5d|%5.4d||\n",'-',a,b,a-b);
//   printf("||%5c|%5d|%-5d|%5.5d||\n",'*',a,b,a*b);
//   printf("||%-5c|%-5d|%5d|%5.3f||\n",'/',a,b,res);
//   printf("===========================");

//   return(0);
// }

// #include <stdio.h>
// int main(void)
// {
//     printf("\"I'll be back!\"\n\t(c)Terminator");
//     return 0;
// }

// #include <stdio.h>
// int main(void){

//   printf("N\t10*N\t100*N\t1000*N\n\n");
//   for (int i=1;i<=10;i++)
//     printf("%d\t%d\t%d\t%d\n",i,10*i,100*i,1000*i);

//   return(0);
// }

// #include <stdio.h>
// int main(void){

//   for (int i=1; i<=5; i++){
//     for (int j=1; j<=5; j++)
//       printf("%-4d",i*j);
//     printf("\n");
//   }

//   return(0);
// }

// #include <stdio.h>
// int main(void)
// {
//     // int a, b, res;
//     float a,res;
//     double b;

//     scanf("%f", &a); // считываем целое значение в переменную a
//     scanf("%lf", &b); // считываем целое значение в переменную b

//     res = a + b;
//     printf("%4.1lf + %4.1f = %4.1f\n", a, b, res);
//     return 0;
// }

// #include <stdio.h>
// int main(void) {
//   int a, b, res;

//   scanf("%d", &a);
//   scanf("%d", &b);

//   res = a + b;

//   int c;

//   scanf("%d", &c);
//   res = res - c;

//   printf("%d\n", res);
//   return 0;
// }

// #include <stdio.h>
// int main(void)
// {

//     int h,m,s, seconds = h * 60 * 60 + m * 60 + s;

//     scanf("%d", &h);
//     scanf("%d", &m);
//     scanf("%d", &s);

//     printf("%i\n", seconds);

//     return 0;
// }

// 1n6dQQjenwnsOutp4reveREnDof

// #include <stdio.h>
// int main(void)
// {
//     int dollars;
//     double kurs, rub;

//     scanf("%d", &dollars);
//     scanf("%lf", &kurs);
//     rub = dollars * kurs;

//     printf("%lf\n", rub);
//     return 0;
// }