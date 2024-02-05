// int arr_int[8];
// double arr_float[11];
// float number[2000];

// #include <stdio.h>
// int main(void){
//   int arr[100] = {0};
//   for(int i = 0; i < 100; i = i + 1){
//     arr[i] = 2*i;
//   }
//   for(int i = 0; i < 100; i = i + 1){
//     printf("%d\t",arr[i]);
//   }
//   return(0);
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #define EXPERIMENTS 10000000
// #define NUMBERS 2
// int main(void) {
//   srand(time(NULL));
//   int count[NUMBERS] = {0};
//   int rand_number;
//   for(int i = 0; i < EXPERIMENTS; i = i + 1){
//     rand_number = rand()%NUMBERS;
//     count[rand_number] = count[rand_number] + 1;
//   }
//   for(int i = 0; i < NUMBERS; i = i + 1){
//     printf("%d - %d\n", i, count[i]);
//   }

//   return 0;
// }

// #include <stdio.h>
// int main(void){
//     int n,x;
//     scanf("%d",&n);
//     int massive[n];
//     for (int i=0; i<n; i+=1) {scanf("%d",&massive[i]);}
//     for (int i=n-1; i>=0; i-=1) {printf("%d ", massive[i]);}

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void){
//     int n,flag=1;
//     scanf("%d",&n);
//     int massive[n];
//     for (int i=0; i<n; i+=1) {scanf("%d",&massive[i]);}
//     for (int i=0; i<(int) round((double)n/2); i+=1) {
//         if (massive[i]!=massive[n-1-i]){flag=0;}
//         }
//     flag==0? printf("NO"):printf("YES");

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void){
//     int n,flag=1;
//     scanf("%d",&n);
//     int massive[n];

//     for (int i=0; i<n; i+=1) {scanf("%d",&massive[i]);}
//     for (int i=0; i<(int) round((double)n/2); i+=1) {
//         if (massive[i]!=massive[n-1-i]){flag=0;}
//         }
//     flag==0? printf("NO"):printf("YES");

//     return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void){
//     setlocale(LC_ALL, "");

//     int n, temp=0;
//     scanf("%d",&n);
//     int massive[n], result[n];

//     for (int i=0; i<n;i+=1){scanf("%d",&massive[i]);} //записали массив
//     for (int i=0; i<n;i+=1){
//         if (massive[i]%2==0){result[temp]=massive[i];temp+=1;}
//     }
//     for (int i=0; i<n;i+=1){
//         if (massive[i]%2!=0){result[temp]=massive[i];temp+=1;}
//     }
//     for (int i=0; i<n;i+=1){printf("%d ",result[i]);}
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int n, count=0;
//     scanf("%d", &n);
//     int massive[n];
//     for (int i=0; i<n;i+=1){scanf("%d", &massive[i]);}
//     for (int i=0; i<n; i+=1){
//         if (massive[i]<massive[n-1]){printf("%d ",massive[i]);count+=1;}
//     }
//     if (count==0){printf("0");}
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n, count = 0;
//     scanf("%d", &n);
//     int massive[n];
//     for (int i = 0; i < n; i += 1)
//         scanf("%d", &massive[i]);

//     for (int i = 1; i < n; i += 1)
//         if (massive[i] < massive[n - 1] && massive[i] > massive[0])
//         {
//             printf("%d ", massive[i]);
//             count += 1;
//         }

//     if (count == 0)
//         printf("0");

//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int massive[n];
//     double result;
//     for (int i = 0; i < n; i += 1){
//         scanf("%d", &massive[i]);
//         result+=massive[i];}


//     printf("%.2lf", result/n);

//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     int n, temp=0;
//     scanf("%d", &n);
//     int massive[n], res[n];
//     double result;

//     for (int i = 0; i < n; i += 1) {scanf("%d", &massive[i]);result+=massive[i];}
    
//     for (int i = 0; i < n; i += 1) {
//         if (massive[i]>result/n){res[temp]=massive[i]; temp+=1;}}
//     for (int i = 0; i < n; i += 1) {
//         if (massive[i]<=result/n){res[temp]=massive[i];temp+=1;}}
    
//     for (int i=0; i<temp;i+=1){printf("%d ",res[i]);}
    
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d", &n);
//     int massive[n], res[n],zed=0;
//     double temp=n/2;

//     for (int i = 0; i < n; i += 1) {
//         scanf("%d", &massive[i]);
//         if (i<n/2){res[(int)temp]=massive[i]; temp+=1;}
//         if (i>=n/2){res[zed]=massive[i];zed+=1;}
//         }

//     for (int i=0; i<n;i+=1){printf("%d ",res[i]);}
//     return 0;
// }

#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    int massive[n], max, min;

    for (int i = 0; i < n; i += 1) {scanf("%d", &massive[i]);}
    
    max=massive[0];
    min=massive[0];
    
    for (int i = 0; i < n; i += 1) {
        if (massive[i]>max) {max=massive[i];}
        if (massive[i]<min) {min=massive[i];}}
    
    for (int i = 0; i < n; i += 1){
        if (massive[i]==max){massive[i]=min;}
        else 
            if (massive[i]==min){massive[i]=max;}}

    for (int i=0; i<n;i+=1){printf("%d ",massive[i]);}
    return 0;
}

