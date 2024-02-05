// int sum(int num_1, int num_2){
//     int sum;
//     sum=num_1+num_2;
//     return sum;
// }

// int min(int num_1, int num_2){
//     int min;
//     if (num_1<num_2)
//         return num_1;
//     else
//         return num_2;
    
// }

// #include<stdio.h>

// int min(int num_1, int num_2, int num_3){
//     int min;
//     if (num_1<=num_2 && num_1<num_3)
//         return num_1;
//     if (num_2<=num_1 && num_2<num_3)
//         return num_2;
//     if (num_3<=num_1 && num_3<num_2)
//         return num_3;
// }

// int main(void){
// // напишите программу, использующую функцию min
//     int num_1, num_2, num_3;
//     scanf("%d %d %d", &num_1, &num_2, &num_3);
//     printf("%d", min(num_1, num_2, num_3));
//     return 0;
// }

// #include <stdio.h>

// int factorial(int k); //объ€вил функцию вначале, описание в самом низу

// int main(void){
//     int num;
//     scanf("%d", &num);

//     printf("%d", factorial(num));
//     return 0;
// }

// int factorial(int k){
//     int result=1;
//     for (int i=1; i<=k; i+=1){
//         result*=i;
//     }
//     return result;
// }


// #include <stdio.h>

// int factorial(int k){
//     int result=1;
//     for (int i=1; i<=k; i+=1){
//         result*=i;
//     }
//     return result;
// }


// int main(void){
//     int n = 0, k = 0;
//     scanf("%d%d",&n,&k);

//     printf("%d", factorial(n)/(factorial(k)*factorial(n-k)));
//     return 0;
// }


// #include <stdio.h>

// int sequence_multipliers(int x){
//     int k=-1;
//     for (int i=1; i<=7; i+=1){
//         if (x==i*(i+1)*(i+2)){k=i;}
//     }
//     return k;
// }

// int main(void){
//     int x;
//     scanf("%d",&x);
//     printf("%d", sequence_multipliers(x));
//     return 0;
// }

// #include <stdio.h>

// int square(int n, char c){
//     for (int i=0; i<n; i+=1){
//         for (int j=0; j<n;j+=1){
//             printf("%c", c);
//         }
//         printf("\n");
//     }
// }

// int main(void){
//     int n;
//     char symvol;
//     scanf("%d %c",&n, &symvol);
//     square(n, symvol);
//     return 0;
// }


// #include <stdio.h>

// int print_date(int d, int m, int y, int k){
//     switch (k)
//     {
//     case 0:printf("%02d.%02d.%02d", d, m, y%100); break;
//     case 1:printf("%02d.%02d.%d", d, m, y); break;
//     case 2:printf("%d/%02d/%02d", y, m, d); break;
//     default: break;
//     }
// }

// int main(void){
//     int d,m,y,k;
//     scanf("%d %d %d %d",&d, &m, &y, &k);
//     print_date(d, m, y, k);
//     return 0;
// }


// #include <stdio.h>

// int is_prime(int k){
//     int result=0;
//     for(int i = 2; i<=k; i++){
//         if(k%i==0){
//             result+=1;
//         }    
//     }
//     if (result==1)
//         return 1;
//     else
//         return 0;
// }

// int main(void){
//     int num;
//     scanf("%d",&num);
//     printf("%d", is_prime(num));
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int x=100, y=200;
//     int *xex; // указатель на переменную типа int

//     xex = &x;
//     printf("adres peremennoi x %p\n", xex);
//     printf("znachenie peremennoi x %d\n", *xex);
//     *xex=150;
//     printf("novoe znachenie peremennoi x %d\n", *xex);

//     xex = &y;
//     printf("adres peremennoi y %p\n", xex);
//     printf("znachenie peremennoi y %d\n", *xex);

//     xex = NULL;
//     printf("adres posle obnuleniya %p\n", xex);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     char ch='t', inp='o';
//     char *p_ch;
//     p_ch=&ch;

//     ch='u';
//     printf("znachenie peremennoi p_ch %c\n", *p_ch);
//     ch=inp;
//     printf("znachenie peremennoi p_ch %c\n", *p_ch);

//     return 0;
// }


// #include <stdio.h>
// int main(void){
//     int a=5, b=9;
//     double c=(double)a/b;
//     int * p_1;
//     int * p_2;
//     double * p_dbl;
//     p_1=&a;
//     p_2=&b;
//     p_dbl=&c;
//     *p_dbl=(double)*p_1 / *p_2;
//     printf("%.3lf", *p_dbl);

//     return 0;
// }



// #include <stdio.h>
// int main(void){
//     int a=5, b=9;
//     int c = 0, d = 0;
//     scanf("%d %d",&c,&d);
//     int * p_1;
//     int * p_2;
    
//     p_1=&a;
//     p_2=&b;

//     p_1=&c;
//     p_2=&d;
//     printf("%d %d", *p_1, *p_2);

//     return 0;
// }


// #include <stdio.h>
// int main(void){
//     int temp, *p_1, *p_2;
//     int a=6, b=9;
//     p_1=&a;
//     p_2=&b;

//     temp = * p_1;
//     * p_1 = * p_2;
//     * p_2 = temp;

//     printf("%d %d", *p_1, *p_2);

//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int *p_1, *p_2, *p_3;
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);
//     p_1=&a;
//     p_2=&b;
//     p_3=&c;
    
//     if (*p_1<=*p_2 && *p_2<*p_3){*p_2=*p_1; *p_3=*p_1;}
//     if (*p_2<=*p_1 && *p_1<*p_3){*p_1=*p_2; *p_3=*p_2;}
//     if (*p_3<=*p_1 && *p_3<*p_2){*p_1=*p_3; *p_2=*p_3;}
//     printf("%d %d %d", *p_1, *p_2, *p_3);
//     return 0;
// }



// #include <stdio.h>

// // функци€ swap принимает два указател€ на целые числа
// // другими словами, два адреса в пам€ти компьютера,
// // в которых записаны целые числа
// void swap(int *a, int *b){ 
// // a -- адрес первого числа
// // b -- адрес второго числа
  
//   int temp;
// // *a -- разыменование указател€
// // *a позвол€ет обращатьс€ к значению, хран€щемус€ по адресу a
// // выводим значени€, хран€щиес€ по адресам a и b 
//   printf("a=%d b=%d\n",*a,*b);

// // переменной temp присваиваем значение, хран€щеес€ по адресу a
//   temp = *a;    
// // в €чейку по адресу a записываем значение, хран€щеес€ по адресу b
//   *a = *b;
// // в €чейку по адресу b записываем значение из переменной temp
//   *b = temp;
//   printf("a=%d b=%d\n",*a,*b);
// }

// int main(void) {
//   int x = 4, y = 9;

//   printf("x=%d y=%d\n",x,y);
// // передаЄм адреса переменных x и y в фунцию swap
//   swap(&x,&y);

//   printf("x=%d y=%d\n",x,y);

//   return 0;
// }


// #include <stdio.h>

// void swap(int *a, int *b){
//   int temp;

//   temp = *a;
//   *a = *b;
//   *b = temp;
// }

// int main(void) {
//   int x = 4, y = 9;

//   printf("x=%d y=%d\n",x,y);
//   swap(&x,&y);
//   printf("x=%d y=%d\n",x,y);

//   return 0;
// }


// #include <stdio.h>

// void print_arr(int arr[], int n){

//   for (int k=0; k<n; k++){
//     printf("arr[%d] = %d\t", k, arr[k]);
//   }

//   printf("\n");
// }

// void print_arr2(int arr[][5], int k, int n){

//   for (int i=0; i<k; i++,printf("\n"))
//     for(int j=0; j<n; j++)
//       printf("arr[%d][%d] = %d\t", i, j, arr[i][j]);
  
//   printf("\n");
// }


// int main(void){
  
//   int q[5] = {5,4,2,3,4};
//   int q2[2][5] = { {1,2,3,4,5}, {0,9,8,7,6} };

//   print_arr(q,5);

//   print_arr2(q2,2,5);
  
//   return 0;
// }


// #include <stdio.h>
// void sum_digits(int *x){
//     int result=0;
//     for (int i=*x;i>0;i=i/10){
//         result+=i%10;
//     }
//     *x=result;

// }


// int main(void){
//     int xex=12938;
//     // int *x;
//     // x=&xex;

//     // printf("%d\n", xex);

//     sum_digits(&xex);
//     printf("%d", xex);

//     // printf("%d", sum_digits(xex));
//     return 0;
// }


// #include <stdio.h>
// void minmax(int * x, int * y){
//     int temp;
//     if (*x>*y){
//         temp=*y;
//         *y=*x;
//         *x=temp;
//     }
// }


// int main(void){
//     int a=15, b=4;
//     minmax(&a, &b);
//     printf("%d %d", a, b);

//     return 0;
// }


#include <stdio.h>
void char_register(char * ch, int fl){
    if (fl==1){
        if(*ch>=97 && *ch<=122){*ch-=32;}
    }
    if (fl==0){
        if(*ch>=65 && *ch<=90){*ch+=32;}
    }
}   


int main(void){
    char x='A';
    char_register(&x,0);
    printf("%c", x);

    return 0;
}