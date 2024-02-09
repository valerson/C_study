// #include <stdio.h>
// int fact(int x)
// {
//     if (x == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         x = x * fact(x - 1);
//     }
//     return x;
// }

// int main(void)
// {
//     int x, depth=4;
//     scanf("%d", &x);
//     printf("%d", fact(x));
//     return 0;
// }

// half Делим конфеты пополам
// #include <stdio.h>
// #include <math.h>


// int delim_konfety(int n, int count){
//     if (n==1){
//         count+=1; 
//         return count;
//     }
//     else {
//         count+=1;
//         return delim_konfety(n-floor(n/2), count);
//     }
// }

// int main(void){
//     int n, count=0;
//     scanf("%d", &n);
//     printf("%d", delim_konfety(n, count));
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>


// int delim_konfety(int n){
//     static int count=0;
//     count+=1;
//     if (n==0){
//         return 0;
//     }
//     else if (n==1){
//         return 1;
//     }
//     delim_konfety(n-floor(n/2));
//     return count;
// }

// int main(void){
//     int n, count=0;
//     scanf("%d", &n);
//     printf("%d", delim_konfety(n));
//     return 0;
// }


//nod Алгоритм Евклида
// #include <stdio.h>

// int nod(int a,int b){
//     if (a%b==0){return b;}
//     else {
//         nod(b,a%b);
//     }
// }

// int main(void){
//     int a, b;
//     scanf("%d%d", &a,&b);
//     printf("%d", nod(a,b));
//     return 0;
// }

// ipow Возведение в степень
#include <stdio.h>

int ipow(int a, int n, int d){
    if (n==0){
        printf("plus 1\n");
        d+=1;
        return 1;}
    if (n==1){
        printf("plus 1\n");
        d+=1;
        return a;}
    if (n!=0 && n%2==0){
        printf("plus 1\n");
        d+=1;
        return ipow(a,n/2,d)*ipow(a,n/2,d);}
    if (n!=1 && n%2!=0){
        printf("plus 1\n");
        d+=1;
        return a*ipow(a,n-1,d);}
}

int main(void){
    int d=0, res;
    int a;
    int n;
    scanf("%d%d",&a,&n);
    res=ipow(a,n,d);
    printf("%d\n", res);
    printf("%d\n", d);

    return 0;
}