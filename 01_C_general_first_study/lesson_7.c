// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     for (int i=1; i<=n; i++)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int k,m;
//     scanf("%d %d",&k, &m);
//     for (int i=k; i<=m; i++)
//     {
//         if (i>0) printf("%d ",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int k,m, count=0;
//     scanf("%d %d",&k, &m);
//     for (int i=k; i<=m; i++)
//     {
//         if (i>0)
//         {
//             printf("%d ",i);
//             count+=1;
//         }

//     }
//     printf("\n%d",count);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int a,b;
//     scanf("%d %d",&a, &b);
//     for (int i=b; i>=a; i--)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int k;
//     double result=1;
//     scanf("%d",&k);
//     for (int i=1; i<=k; i++)
//     {
//         result*=i;
//     }
//     printf("%.lf", result);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     double f_1 = 1, f_2 = 1, result = 1;
//     // double result;
//     scanf("%d", &n);
    // if (n>=3) 
    // {
    //    for (int i = 3; i <= n; i++)
    //    {
    //     result = f_1 + f_2;
    //     f_1 = f_2;
    //     f_2 = result;
    //    }
    // }
    // printf("%.lf", result);



    // if (n == 1 || n == 2) 
    //     printf("%.lf\n", result);
    // else
    // {
    //     for (int i = 3; i <= n; i++)
    //     {1
    //         result = f_1 + f_2;
    //         f_1 = f_2;
    //         f_2 = result;
    //     }
    //     printf("%.lf", result);
    // }

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int a,b, count=1;
//     scanf("%d %d", &a, &b);
//     for (int i=a; i<=b; i++)
//         {
//             for (int j=1; j<=count; j++)
//                 {
//                     printf("%5d",i);
//                 }
//         count+=1;
//         }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int a,b;
//     scanf("%d %d", &a, &b);
//     for (int i=a; i<=b; i++)
//         {
//             for (int j=1; j<=i; j++)
//                 {
//                     printf("%4d",i);
//                 }
//         }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n,count=0;
//     scanf("%d", &n);
//     for (int i=1; i<=n; i++)
//         {
//             if (n%i==0) 
//                 {
//                     printf("%d ",i);
//                     count+=1;
//                 }
//         }
//     printf("\n%d", count);
    
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     int n,count=0;
//     scanf("%d", &n);

//     for (int i=1; i<=n; i++)
//         {if (n%i==0) {count+=1;}}
//     count==2? printf("1") : printf("0");

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n, max=0, number;
//     scanf("%d", &n);
    
//     for (int i=1; i<=n; i++)
//         {
//             scanf("%d", &number);
//             if (number>max) {max=number;}
//         }
//     printf("%d", max);

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void) {   
//   srand(time(NULL));

//   printf("###########  Devil\'s bones   ###########\n");
//   printf("#                                      #\n");
//   printf("#   Commands:                          #\n");
//   printf("#                                      #\n");
//   printf("#   1 - new game                       #\n");
//   printf("#   0 - exit                           #\n");
//   printf("#                                      #\n");
//   printf("########################################\n\n");
  
//   int control;
//   int value = 0;

//   printf("Enter command: ");
//   scanf("%d", &control);
//   while(control != 0){
//     switch(control){
//       case 1:
//         value = 1 + rand()%6;
//         printf("Result: %d\n", value);
//         break;
//       default: 
//         printf("Error! Try again...\n");
//         break;
//     } 
//     printf("Enter command: ");
//     scanf("%d", &control);
//   }

//   printf("Good bye!\n");
//   return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void) 
// {   
//     int x;
//     srand(time(NULL));
//     x=1+rand()%(9-5+1);
//     printf("%d",x);
//     return 0;
// }


// #include <stdio.h>

// int main(void) 
// {   
//     int x;
//     do
//     {
//         scanf("%d", &x);
//         printf("%d ",x);
//     } while (x!=-9999);

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h> // библиотека дл€ работы с динамической пам€тью, с помощью которой работают функции malloc, realloc  и  free

// int main() {
//     int n=0; // объ€вл€ем нашу переменную, через которую будем сканировать
//     int *arr; // объ€вл€ем указатель на наш динамический массив, который будет хранить в себе отсканированные значени€
//     int count=0; //  заводим счетчик дл€ увелечени€ выделенной пам€ти под наш динамичсекий массив
//     int flag=1; // заводим флаг дл€ вывода валидных/не валидных данных
//     arr=malloc(sizeof(int)); // выдел€ем пам€ть под int-овый массив
//     while (n!=-9999) { // если вы вообще видите мое простыню, думаю объ€сн€ть эти строчки не имеет смысла)
//         if (scanf("%d",&n)){ // проверка на валидность введеных данных, провер€ем истинность ввода, ну и сканируем нашу переменную n
//             arr[count]=n; // записываем в наш массив переменную n
//             arr=realloc(arr,(count+2)*sizeof(int)); // при добавлении нового числа, увеличиваем массив на 1,  начинаем с 2ки так как счетчик изначально равен нулю, а с помощью функции malloc мы уже выделили пам€ть под одну €чейку
//             count++; // увеличиваем счетчик на 1
//         }
//         else { // если введеные данные были не валидны, цикл закончитс€ и вернет нулевой флаг
//             printf("n/a");
//             flag=0;
//             break;
//         }
//     }
//     if (flag){ // если флаг вернулс€ 1, тогда мы распечатываем наш массив
//         for (int i=0; i<count; i++)
//             printf("%d ",arr[i]);
//     }   
//     free(arr); // освобождаем пам€ть
    
//   return 0;
// }


// #include <stdio.h>

// int main(void) 
// {   
//     int x, sum=0;
//     do
//     {
//         scanf("%d", &x);
//         sum+=x;
//     } while (x!=0);
//     printf("%d ",sum);
//     return 0;
// }

// #include <stdio.h>

// int main(void) 
// {   
//     int x, max, min;
//     scanf("%d", &x);
//     max=x;
//     min=x;  
//     while (x!=0)
//     {
//         if (x>max) max=x;
//         if (x<min) min=x;
//         scanf("%d", &x);
//     }
    
//     printf("%d %d",max, min);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(void) 
// {   
//     int x;
//     double i=1;
//     scanf("%d", &x);
 
//     while (pow(i,2)<=x)
//     {
//         printf("%.lf ", pow(i,2));
//         i+=1;
//     }
    
   
//     return 0;
// }

// #include <stdio.h>

// int main(void) 
// {   
//     int x, flag=1;
//     scanf("%d", &x);
//     if (x==1||x==0) flag=0;
//     while (flag==1)
//     {
//         x=x/2;
//         if (x%2!=0) flag=0;
//     }

//     x==1? printf("YES"):printf("NO");
    
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int x, count=0;
//     scanf("%d", &x);
//     while (x>0)
//     {
//         count+=1;
//         x=x/10;
//     }
//     printf("%d",count);


//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int x, k=1;
//     scanf("%d", &x);
//     while (pow(2,k)<x)
//     {
//         k+=1;
//     }
//     printf("%d", k);

//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int x;
//     scanf("%d", &x);
//     while (x>0)
//     {
//         printf("%d",x%10);
//         x=x/10;
//     }

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int k=1;
//     double res=1, eps, temp=1, e=1;
//     scanf("%lf", &eps);
//     while (temp>eps)
//     {
//         // printf("%d\n",k);
//         for (int i=1; i<=k; i++)
//         {
//             res=res*i;
//         }
//         // printf("%lf\n",res);
//         temp=1/res;
//         res=1;
//         k+=1;
//         e+=temp;
//     }
//     printf("%.8lf",e);

//     return 0;
// }

// #include <stdio.h>
// #include <locale.h>

// int main(void) {
//     setlocale(LC_ALL, "");
//   int a = 0, k = 0;
//   int res = 0;

//   scanf("%d %d", &a, &k);
 
//     res = 1;
  

//   while(k > 0){
//     if (k%2 == 0){   
//       a = a*a;
//       k = k/2;
//     }else {
//       res = res *a;
//       k = k - 1;
//    }
//  }
//   printf("%d\n", res);

//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int a,b,d, flag=0;
//     scanf("%d %d", &a, &b);
//     d=a;
//     while (flag==0)
//     {
//         if (d%a==d%b) {
//             flag=1;
//             printf("%d",d);
//             }
//         d+=1;
//     }
    
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void) {   
//   srand(time(NULL));

//   printf("###########  Devil\'s bones   ###########\n");
//   printf("#                                      #\n");
//   printf("#   Commands:                          #\n");
//   printf("#                                      #\n");
//   printf("#   1 - new game                       #\n");
//   printf("#   0 - exit                           #\n");
//   printf("#                                      #\n");
//   printf("########################################\n\n");
  
//   int ch_control;
//   int value = 0, score = 0;
 
//   do {
//     printf("Input command: ");
//     scanf("%d", &ch_control);

//     switch(ch_control){
//       case 0: 
//         score = score -1;
//         break;
//       case 1:
//         value = 1 + rand()%6;
//         printf("Result: %d\n", value);
//         break;
//       default: 
//         printf("Error! Try again...\n");
//         continue;   // прерываем текущую итерацию цикла
//     }
    
//     score = score + 1;
    
//     if(score == 50){
//       printf("Game over!\n"); 
//       break;      // завершаем цикл
//     }
//   }while(ch_control != 0);
  
//   printf("\n\nSCORE: %d\n\nGood bye!\n", score);
//   return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int x;
//     do
//     {
//         scanf("%d",&x);
//         if (x>0) {printf("%d ",x);}
//         else {continue;}
//     } while (x!=0);

//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int n,k=1;
//     scanf("%d",&n);
//     while (k<=n)
//     {
//         for (int j=1; j<=k; j+=1) {printf("%d ",j);}
//         printf("\n");
//         k+=1;
//     }
    
//     return 0;
// }


// #include <stdio.h>

// int main(void)
// {
//     int x,flag=0;
//     scanf("%d",&x);
//     if (x==-9999) {flag=1;}
//     while (x!=-9999)
//     {
//         if (x<0) {flag=1;}
//         scanf("%d",&x);
//     }

//     flag==1? printf("NO") : printf("YES");
   
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int n, num, temp;
//     scanf("%d",&n);

//     scanf("%d", &num);
//     printf("%d ",num);
//     temp=num;


//     while (n>1)
//     {
//         scanf("%d", &num);
//         if (temp!=num) {
//             printf("%d ",num); 
//             temp=num;
//             }
        
//         n-=1;
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int age, temp, flag=1;
//     scanf("%d", &age);
//     while (age!=-9999)
//     {
//         scanf("%d", &temp);
//         if (temp<=age && temp!=-9999) {
//             flag=0; 
//             break;
//             }
//         age=temp;
//     }
//     flag==0? printf("NO"):printf("YES");
    
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int age, temp, flag=1, count=1;
//     scanf("%d", &age);
//     while (age!=-9999)
//     {
//         count+=1;
//         scanf("%d", &temp);
//         if (temp<=age && temp!=-9999) {
//             flag=0; 
//             break;
//             }
//         age=temp;
//     }
//     flag==0? printf("%d", count):printf("0");
    
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int code;
//     scanf("%d", &code);
//     while (code!=-9999 && code!=2517)
//     {
//         scanf("%d", &code);
//     }
//     if (code==2517){
//         while (code!=-9999){
//             scanf("%d", &code);
//             if (code!=-9999) {printf("%d ", code);}
//             }
//         }
    
//     return 0;
// }


// #include <stdio.h>
// int main(void){
//     int x, summ=0;
//     scanf("%d", &x);

//     while (x!=-9999){  
//         if (x==0){
//             scanf("%d", &x);
//             while (x!=0){
//                 summ+=x;
//                 scanf("%d", &x);
//             }
//         }
//         scanf("%d", &x);
//     }

//     printf("%d",summ);

//     return 0;
// }


// #include <stdio.h>
// int main(void){

//     for (int i=1; i<=100; i+=1){
//         if (i%3==0 && i%5!=0) {printf("Fizz ");}
//         if (i%5==0 && i%3!=0) {printf("Buzz ");}
//         if (i%3==0 && i%5==0) {printf("FizzBuzz ");}
//         if (i%3!=0 && i%5!=0) {printf("%d ",i);}
//     }

//     return 0;
// }