// #include <stdio.h>

// int main(void){
//     char x;
//     scanf("%c", &x);
//     int result=x-32;
//     printf("%c",result);
//     return 0;
// }

// #include <stdio.h>

// int main(void){
//     char x;
//     scanf("%c", &x);
//     int result_pre=x-1, result_next=x+1;
//     printf("%c %c",result_pre, result_next);
//     return 0;
// }

// #include<stdio.h>
// int main(void){
//     int alphabet[26]={0}, n, temp;
//     char x;
//     scanf("%d", &n);

//     for (int i=0;i<n;i+=1){
//         scanf(" %c", &x); //добавил пробел, иначе не фурычит
//         // scanf("%d", &temp);
//         // printf("%d\n", x);

//         if ((int)x>=97&&(int)x<=122) {alphabet[(int)x-97]+=1;}
//         if ((int)x>=65&&(int)x<=90) {alphabet[(int)x-65]+=1;}
//     }

//     for (int i=0; i<26;i+=1){printf("%d ", alphabet[i]);}

//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     char x;
//     scanf(" %c", &x);

//     if (x>=48 && x<=57){printf("digit");}
//     else
//         if ((x>=65 && x<=90) || (x>=97 && x<=122)){printf("en");}
//         else printf("error");
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int k;
//     scanf("%d",&k);
//     printf("%c%c", k+64, k+96);
//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     int k;
//     scanf("%d", &k);
//     for (int i=k; i>0;i-=1){printf("%c", 91-i);}
//     return 0;
// }

// инициализация строки
//    char str[10];
//    char str1[10] = {'Y','o','n','g','C','o','d','e','r','\0'};
//    char str2[10] = "Hello!";
//    char str3[] = "Hello!";

// #include <stdio.h>
// int main(void){
//     char str[]="Hello!";
//     printf("%s", str);

//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     char str[]="Hello!";
//     printf("%с", str);
//     puts(str);

//     return 0;
// }

// #include <stdio.h>
// int main(void) {

//     char str[10];
//     fgets(str, 10, stdin);
//     puts(str);
//     return 0;
// }

// #include <stdio.h>
// int main(void) {
//   char str[10];
//   fgets(str, 10, stdin);
//   fflush(stdin); // очищаем поток ввода
//   puts(str);

//   return 0;
// }

// #include <stdio.h>
// int main(void){
//     char str[30];
//     fgets(str, 30,stdin);
//     fflush(stdin);

//     int count=0;
//     for (int i=0;i<30;i+=1){
//         // // if (str[i]!=NULL) {count+=1;}
//         if (str[i]!='\0') {count+=1;}
//         else break;
//     }

//     printf("%d", count);

//     // int i=0;
//     // while(str[i]){
//     //     i++;
//     // }
//     // printf("%d",i);

//     return 0;
// }

// // ЗАДАЧА НЕ ПРИНЯТА!!!
// #include <stdio.h>
// int main(void){
//     char str[100];
//     fgets(str, 100, stdin);
//     fflush(stdin);
//     // puts(str);

//     int count=0, i=0;
//     // Пропускаем начальные пробелы
//     while (str[i] == ' ' || str[i] == '\n') {i++;}

//     while (str[i]!='\0')
//     {
//         if ((str[i]==' '||str[i]=='\n')&&(str[i+1]!=' '&&str[i+1]!='\n')) {count+=1;}
//         i+=1;
//     }
//     printf("%d", count);

//     return 0;
// }

// #include <stdio.h>
// int main(void){
//     char str[100],x;
//     scanf(" %c ", &x);
//     fgets(str, 100, stdin);
//     fflush(stdin);
//     // puts(str);

//     int i=0, result=-1;
//     for (int i=0; i<100;i+=1){
//         if (str[i]==x) {result=i; break;}
//     }
//     printf("%d", result);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(void){
//     char str[20];
//     int n;
//     double result=0;
//     fgets(str, 100, stdin);
//     fflush(stdin);
//     // puts(str);

//     for (int i=0;i<100;i+=1){if (str[i]=='\n'){n=i;}}
//     // printf("%d", n);

//     for (int i=0; i<n;i+=1){
//         // printf("symvol = %d ", (int)str[i]-48);
//         // printf(" 2 stepen = %lf\n", pow(2,n-1-i));
//         result+=((int)str[i]-48)*pow(2,n-1-i);}
//     printf("%.lf", result);

//     return 0;
// }

// #include <stdio.h>
// #define LENGHT 100
// int main(void){
//     char str[LENGHT];
//     fgets(str,LENGHT,stdin);
//     fflush(stdin);
//     // puts(str);

//     for (int i=0; i<=LENGHT; i+=1){
//         if (i==0 && str[i]==' '){for (int j=i; j<LENGHT;j+=1){str[j]=str[j+1];}}
//         if (str[i]==' ' && str[i+1]==' '){
//             while (str[i]==' ' && str[i+1]==' ') {
//                 for (int j=i; j<LENGHT;j+=1){str[j]=str[j+1];}
//             }
//         }

//         if (str[i]==' ' && i==LENGHT) {{for (int j=i; j<LENGHT;j+=1){str[j]=str[j+1];}}}
//     }
//     puts(str);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// #define LENGTH 15

// int main(void){
//     char str_1[LENGTH], str_2[LENGTH];

//     fgets(str_1, LENGTH, stdin);
//     fflush(stdin);

//     fgets(str_2, LENGTH, stdin);
//     fflush(stdin);

//     int count=0, n=strlen(str_1), m=strlen(str_2),x;
//     if (m>=n){x=m;}
//     else x=n;

//     // printf("lenght str_1 = %d lenght str_2 = %d\n", n, m);

//     for (int i=0; i<x-1;i+=1){
//         printf("elemenet first str %c second str %c\n", str_1[i], str_2[i]);
//         if (str_1[i]!=str_2[i]){count+=1;}
//         }

//     printf("%d",count);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// #define LENGHT 7

// int main(void){
//     int n, x=0, y=0, temp=0;
//     char vector[LENGHT], vec1, vec2;

//     scanf("%s %d", &vector, &temp); // qwe 1
//     printf("%d", temp); //1
//     puts(vector); //qwe

//     // getchar();  // Очистка буфера ввода сканф

//     // scanf("%d", &n);
//     // getchar();  // Очистка буфера ввода сканф

//     // for (int i=0;i<n;i+=1){
//     //     scanf("\n%s %d", &vector, &temp);
//     //     getchar();  // Очистка буфера ввода сканф

//     //     // fgets(vector,LENGHT,stdin);
//     //     // //Очистка введенного от переноса строки
//     //     // if (vector[strlen(vector)-1]=='\n'){vector[strlen(vector)-1]='\0';}

//     //     // //тут считываем из строки, сколько шагов
//     //     // for (int j=0; j<strlen(vector);j+=1){
//     //     //     if (vector[j]==' '){
//     //     //         if (vector[j+2]!='\0'){temp=((int)vector[j+1]-48)*10+(int)vector[j+2]-48;}
//     //     //         if (vector[j+2]=='\0'){temp=((int)vector[j+1]-48);}
//     //     //     }
//     //     // }

//     //     if (vector[0]=='N'){y+=temp;}
//     //     if (vector[0]=='S'){y-=temp;}
//     //     if (vector[0]=='E'){x+=temp;}
//     //     if (vector=='W'){x-=temp;}
//     // // // printf("%d %d",x,y);
//     // }

//     // printf("%d %d",x,y);
//     return 0;
// }

// НЕ СДАННАЯ ЗАДАЧА!!!
//  #include <stdio.h>
//  #include <locale.h>
//  #include <string.h>
//  #define LENGHT 100
//  int main(void){
//      setlocale(LC_ALL,"");
//      char str[LENGHT];
//      int j=0, flag=0;

//     fgets(str,LENGHT,stdin);
//     for (int i=0;i<strlen(str);i+=1){if (str[i]=='\n') {str[i]='\0';}}

//     while (j<strlen(str))
//     {

//         if (str[j]=='*' && str[j+1]=='/' && flag==1){flag=0;j+=2;}
//         if (str[j]=='/' && str[j+1]=='*'){
//             for (int i=j+2;i<strlen(str);i+=1){
//                 if (str[i]=='*' && str[i+1]=='/'){flag=1;j+=1;}
//             }
//         }
//         if (flag==0 && str[j]!='\0'){printf("%c", str[j]);}
//         j+=1;
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define LENGHT 10
// int main(void){
//     char number[LENGHT];
//     long n;
//     int count=0,i=0;
//     scanf("%ld", &n);

//     while (n>0)
//     {
//         number[i]=48+n%10; //учитываем кодировку аски
//         n=n/10;
//         i+=1;
//         count+=1;

//         if (count==3 && n>0){
//             count=0;
//             number[i]=' ';
//             i+=1;}
//     }
//     for (int j=i-1;j>=0;j-=1){printf("%c", number[j]);}

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// #define LENGHT 20
// int main(void){
//     char number[LENGHT];
//     int i=0, count_dot=0, err=0;

//     fgets(number, LENGHT, stdin);
//     for (int j=0; j<strlen(number); j+=1){if (number[j]=='\n'){number[j]='\0';}}

//     if (number[0]=='-'){i+=1;}
//     while (i<strlen(number))
//     {
//         if (((int)number[i]>57 || (int)number[i]<46) || (count_dot>1) || (i==strlen(number)-1 && number[i]=='.') || (number[0]=='-' && number[1]=='.') || number[0]=='.' )
//             {err=1;break;}
//         if (number[i]=='.'){count_dot+=1;}
//         i+=1;
//     }

//     if (err==1){printf("error");}
//     else
//         count_dot==1? printf("float"):printf("int");

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define LENGHT 52

// int main(void){
//     char text[LENGHT], start, end;
//     int i=0, start_index, end_index;

//     fgets(text, LENGHT, stdin);
//     if (text[strlen(text)-1]='\n'){text[strlen(text)-1]='\0';}

//     while (i<strlen(text))
//     {
//         // if (text[i]!=' '){printf("%c\n", text[i]);}
//         // printf("\nend index = %d\n", end_index);

//         if (text[i]!=' '){
//             start=text[i];
//             start_index=i;
//             i+=1;
//             while (text[i]!=' ' && text[i]!='\0')
//             {
//                 end=text[i];
//                 end_index=i;
//                 i+=1;
//             }
//             if((int)start==(int)end){
//                 for(int k=start_index;k<=end_index; k+=1){printf("%c", text[k]);}
//                 printf(" ");
//                 }
//         }

//         i+=1;
//     }

//     return 0;
// }

// СЧИТАТЬ СТРОКУ ПО СЛОВАМ !!!!
// #include <stdio.h>

// #define LENGHT 52

// int main(void){
//     char text[LENGHT], start, end;
//     int i=0, start_index, end_index;

//     while (scanf("%s", text)!= EOF)
//     {
//         printf("%s\n", text);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define LENGHT 42
// int main(void){
//     char text[LENGHT], symvol;

//     while (2==scanf("%s%c", text,&symvol))
//     {
//         for(int i=strlen(text)-1;i>=0;i-=1){printf("%c", text[i]);}

//         printf("\nsymvol = %d\n", symvol);

//         if (symvol == 10) break;
//         printf("%c", symvol);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define LENGHT 42
// int main(void){
//     char text[LENGHT], symvol;

//     while (scanf("%s", text)!=EOF)
//     {
//         for(int i=strlen(text)-1;i>=0;i-=1){
//             printf("%c", text[i]);}
//         printf(" ");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void) {
// // объявляем три строки
//   char str1[19] = "Peace! ";
//   char str2[] = "Labor!";
//   char str3[] = "May!";

// // выводим строки на экран
//   printf("str1: %s\n",str1);
//   printf("str2: %s\n",str2);
//   printf("str3: %s\n\n",str3);

// // присоединяем к первой строке вторую
//   strcat(str1, str2);

// // теперь str1 = "Peace! Labor!"

// // // присоединяем к первой строке третью
//   strcat(str1, str3);
// //   puts(str1);
// // // теперь str1 = "Peace! Labor! May!"

// // // выводим на экран строку str1 и её длину
//   printf("str1: %s %d\n",str1, strlen(str1));

//   return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//   char  str1[] = "hello world",
//         str2[] = "hello world",
//         str3[] = "\0";
// // сравниваем строки между собой
//   int n12 = strcmp(str1,str2);
//   int n13 = strcmp(str1,str3);
//   int n31 = strcmp(str3,str1);

// // выводим строки и результат работы strcmp
//   printf(" %s i %s =  %d\n", str1, str2,n12);
//   printf(" %s i %s = %d\n", str1, str3,n13);
//   printf(" %s i %s = %d\n", str3, str1,n31);

//   return(0);
// }

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//   char  str1[] = "Hello World!",
//         str2[] = "Hi man!";
//   printf("str1: %s \nstr2 %s\n\n", str1, str2);

//   strcpy(str1, str2);

//   printf("str1: %s \nstr2 %s\n", str1, str2);

//   return(0);
// }

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//     char str1[40] = "Hello, ";
//     char str2[20];
//     scanf("%s", str2);
//     strcat(str1, str2);
//     printf("%s", str1);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define LENGHT 27
// int main(void){
//     char text_1[LENGHT]=" ", text_2[LENGHT];
//     scanf("%s", text_1);
//     scanf("%s", text_2);
//     // strcat(text_1,dot);
//     // strcat(text_1, text_2);
//     printf("%s", strcat(strcat(text_1,"."), text_2));

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define LENGHT 52

// int main(void){
//     char text_1[LENGHT], text_2[LENGHT];
//     scanf("%s", text_1);
//     scanf("%s", text_2);
//     if ((text_1[strlen(text_1)-1]==text_2[0]+32)||(text_2[strlen(text_2)-1]==text_1[0]+32)){printf("yes");}
//     else {printf("no");}
    
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// #define LENGHT 52

// int main(void){
//     char text_1[LENGHT], text_2[LENGHT];

//     scanf("%s", text_1);
//     scanf("%s", text_2);
//     strcmp(text_1,text_2)==0? printf("yes"):printf("no");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define LENGHT 52

// int main(void){
//     char text_1[LENGHT], text_2[LENGHT];

//     fgets(text_1,LENGHT,stdin);
//     if (text_1[strlen(text_1)-1]='\n'){text_1[strlen(text_1)-1]='\0';}
//     fgets(text_2,LENGHT,stdin);
//     if (text_2[strlen(text_2)-1]='\n'){text_2[strlen(text_2)-1]='\0';}

//     //бахаем все буквы на заглавные
//     for (int i=0;i<strlen(text_1);i+=1){if (text_1[i]>91){text_1[i]-=32;}}
//     for (int i=0;i<strlen(text_2);i+=1){if (text_2[i]>91){text_2[i]-=32;}}

//     strcmp(text_1,text_2)==0? printf("yes"):printf("no");
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define LENGHT 8

// int main(void){
//     char number[LENGHT];
//     int num_1=0, num_2=0;

//     scanf("%s", number);
//     for (int i=0;i<LENGHT-2;i+=1){
//         if (i<=(LENGHT-2)/2-1){num_1+=number[i]-48;}
//         else {num_2+=number[i]-48;}
//         }
//     num_1-num_2==0? printf("yes"):printf("no");

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// #define LENGHT 52

// int main(void){
//     char text_1[LENGHT], text_2[LENGHT];
//     int flag=0, j;

//     scanf("%s", text_1);
//     scanf("%s", text_2);

//     int len_text_1 = strlen(text_1);
//     int len_text_2 = strlen(text_2);

//     if(len_text_2>len_text_1){flag=1;}
    
//     for (int i=0; i<len_text_2;i+=1){
//         j=0;
//         while (text_1[j]!='\0')
//         {
//             if (text_2[i]==text_1[j]){//символ найден
//                 flag=0; 
//                 for (int k=j;k<len_text_1;k+=1){text_1[k]=text_1[k+1];}//стираем символ найденный в тексте
//                 text_1[len_text_1-1]='\0';
//                 break;}
//             else {flag=1;}
//         j+=1;
//         }
//     if (flag==1) break;

//     }
//     flag==0? printf("yes") : printf("no");
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#define LENGHT 52
int main(void){
    char text[LENGHT];

    fgets(text, LENGHT, stdin);

    for (int i=0; i<strlen(text)-1; i+=1){
        switch (text[i]){
            case ' ' : printf("|:_..._:|"); break;
            case 'A' :
            case 'a' : printf(".-|"); break;
            case 'B' :
            case 'b' : printf("-...|"); break;
            case 'C' :
            case 'c' : printf("-.-.|"); break;
            case 'D' :
            case 'd' : printf("-..|"); break;
            case 'E' :
            case 'e' : printf(".|"); break;
            case 'F' :
            case 'f' : printf("..-.|"); break;
            case 'G' :
            case 'g' : printf("--.|"); break;
            case 'H' :
            case 'h' : printf("....|"); break;
            case 'I' :
            case 'i' : printf("..|"); break;
            case 'J' :
            case 'j' : printf(".---|"); break;
            case 'K' :
            case 'k' : printf("-.-|"); break;
            case 'L' :
            case 'l' : printf(".-..|"); break;
            case 'M' :
            case 'm' : printf("--|"); break;
            case 'N' :
            case 'n' : printf("-.|"); break;
            case 'O' :
            case 'o' : printf("---|"); break;
            case 'P' :
            case 'p' : printf(".--.|"); break;
            case 'Q' :
            case 'q' : printf("--.-|"); break;
            case 'R' :
            case 'r' : printf(".-.|"); break;
            case 'S' :
            case 's' : printf("...|"); break;
            case 'T' :
            case 't' : printf("-|"); break;
            case 'U' :
            case 'u' : printf("..-|"); break;
            case 'V' :
            case 'v' : printf("...-|"); break;
            case 'W' :
            case 'w' : printf(".--|"); break;
            case 'X' :
            case 'x' : printf("-..-|"); break;
            case 'Y' :
            case 'y' : printf("-.--|"); break;
            case 'Z' :
            case 'z' : printf("--..|"); break;
            case '0' : printf("-----|"); break;
            case '1' : printf(".----|"); break;
            case '2' : printf("..---|"); break;
            case '3' : printf("...--|"); break;
            case '4' : printf("....-|"); break;
            case '5' : printf(".....|"); break;
            case '6' : printf("-....|"); break;
            case '7' : printf("--...|"); break;
            case '8' : printf("---..|"); break;
            case '9' : printf("----.|"); break;
            default: return 0;}
    }
    
    return 0;
}


