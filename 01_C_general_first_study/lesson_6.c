// #include <stdio.h>
// #include <locale.h> // для функции setlocale

// int main(void)
// {
//   setlocale(LC_ALL, ""); // чтобы использовать русские символы

//   printf("Выберите правильный вариант ответа. Начало и конец Второй мировой войны:\n");
//   printf("  a. 1 сентября 1939 -- 2 сентября 1945\n");
//   printf("  b. 1 сентября 1939 -- 9 мая 1945\n");
//   printf("  c. 22 июня 1941 -- 9 мая 1945\n");
//   printf("  d. 22 июня 1941 -- 2 сентября 1945\n");

//   char answer;
//   printf("Введите ваш вариант ответа: ");
//   scanf("%c", &answer);

//   // switch (answer)
//   // {
//   // case 'a': printf("GOOD!\n"); break;
//   // case 'b': printf("BAD!\n"); break;
//   // case 'c': printf("BAD!\n"); break;
//   // case 'd': printf("BAD!\n"); break;
//   // default: printf("ERROR!\n"); break;
//   // }

//   /*Более красивое использование конструкции switch*/
//   switch (answer) {
//   case 'a': printf("GOOD!\n"); break;
//   case 'b':
//   case 'c':
//   case 'd': printf("BAD!\n"); break;
//   default: printf("ERROR!\n"); break;
// }
//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void) {
//   setlocale(LC_ALL, "");
//   char s;
//   scanf("%f",&s);

//   switch (s) {
//     default  :
//     case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
//     case 'l' : printf("и себя и коня потеряешь!\n");
//     case 'f' : printf("себя потеряешь, коня спасёшь!\n"); break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void) {
//   setlocale(LC_ALL, "");
//   char s;
//   scanf("%c",&s);

//   switch (s)
//   {
//     default  : break;
//     case 'l' : printf("коня потеряешь, себя спасёшь!\n"); break;
//     case 'f' : printf("и себя и коня потеряешь!\n"); break;
//     case 'r' : printf("себя потеряешь, коня спасёшь!\n"); break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>

// int main(void)
// {
//   setlocale(LC_ALL, "");
//   char score;
//   scanf("%c", &score);
//   switch (score)
//   {
//   case '1':
//     printf("плохо");
//     break;

//   case '2':
//     printf("неудовлетворительно");
//   break;
//     case '3':
//     printf("удовлетворительно");
//     break;
//   case '4':
//     printf("хорошо");
//     break;
//   case '5':
//     printf("отлично");
//     break;

//   default:
//     break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void)
// {
//   setlocale(LC_ALL, "");

//   int k;
//   scanf("%d",&k);
//   switch (k%2)
//   {
//   case 0: printf("Не любит"); break;
//   case 1: printf("Любит"); break;
//   default:
//     break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void)
// {
//   setlocale(LC_ALL, "");

//   int num_1,num_2;
//   char operation;
//   scanf("%c %d %d", &operation, &num_1, &num_2);

//   switch (operation)
//   {
//   case '+': printf("%.2lf", (double)num_1+num_2); break;
//   case '-': printf("%.2lf", (double)num_1-num_2); break;
//   case '/': printf("%.2lf", (double)num_1/num_2); break;
//   case '*': printf("%.2lf", (double)num_1*num_2); break;

//   default: printf("ERROR!");
//     break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void)
// {
//   setlocale(LC_ALL, "");

//   int num_1,num_2;
//   char operation;
//   scanf("%d %d %c", &num_1, &num_2, &operation);

//   switch (operation)
//   {
//   case '+': printf("%.2lf", (double)num_1+num_2); break;
//   case '-': printf("%.2lf", (double)num_1-num_2); break;
//   case '*': printf("%.2lf", (double)num_1*num_2); break;
//   case '/':
//             switch (num_2)
//             {
//             case 0: printf("ERROR!"); break;
//             default: printf("%.2lf", (double)num_1/num_2); break;
//             }
//   break;

//   default: printf("ERROR!");
//     break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void)
// {
//   setlocale(LC_ALL, "");

//   int age, height, weight;
//   double bov_m, bov_f;
//   char sex;

//   scanf("%c %d %d %d", &sex, &age, &height, &weight);

//   bov_m = 10 * weight + 6.25 * height - 5 * age + 5;
//   bov_f = 10 * weight + 6.25 * height - 5 * age - 161;

//   switch (sex)
//   {
//   case 'm': printf("|  BMR  |\n"); printf("|%4.2lf|", bov_m); break;
//   case 'f': printf("|  BMR  |\n"); printf("|%4.2lf|", bov_f); break;
//   default: printf("ERROR!"); break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void)
// {
//   setlocale(LC_ALL, "");

//   int m, d;
//   scanf("%d %d", &m, &d);
//   switch (m)
//   {
//   case 1: printf("%d",d); break;
//   case 2: printf("%d",31+d); break;
//   case 3: printf("%d",31+28+d); break;
//   case 4: printf("%d",31+28+31+d); break;
//   case 5: printf("%d",31+28+31+30+d); break;
//   case 6: printf("%d",31+28+31+30+31+d); break;
//   case 7: printf("%d",31+28+31+30+31+30+d); break;
//   case 8: printf("%d",31+28+31+30+31+30+31+d); break;
//   case 9: printf("%d",31+28+31+30+31+30+31+31+d); break;
//   case 10: printf("%d",31+28+31+30+31+30+31+31+30+d); break;
//   case 11: printf("%d",31+28+31+30+31+30+31+31+30+31+d); break;
//   case 12: printf("%d",31+28+31+30+31+30+31+31+30+31+30+d); break;
//   default:
//     break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>

// int main(void)
// {
//   setlocale(LC_ALL, "");

//   int k, x, x_1, x_2, x_3, x_4;
//   scanf("%d %d", &k, &x);
//   x_1=x/1%10;
//   x_2=x/10%10;
//   x_3=x/100%10;
//   x_4=x/1000%10;

//   switch (k)
//   {
//   case 1: printf("%.0lf", (double)x_1); break;
//   case 2: printf("%.0lf", (double)x_1*x_2); break;
//   case 3: printf("%.0lf", (double)x_1*x_2*x_3); break;
//   case 4: printf("%.0lf", (double)x_1*x_2*x_3*x_4); break;
//   default:
//     break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>

// int main(void)
// {
// setlocale(LC_ALL, "");

// printf("%d", 1 && 1);
// printf("%d", 0 || 1);
//   // int k;
// scanf("%d", &k);

// switch (k)
// {
// case 1: printf("Мне %d год", k); break;
// case 2: printf("Мне %d года", k); break;
// case 3: printf("Мне %d года", k); break;
// case 4: printf("Мне %d года", k); break;
// case 5: printf("Мне %d лет", k); break;
// case 6: printf("Мне %d лет", k); break;
// case 7: printf("Мне %d лет", k); break;
// case 8: printf("Мне %d лет", k); break;
// case 9: printf("Мне %d лет", k); break;
// case 10: printf("Мне %d лет", k); break;
// case 11: printf("Мне %d лет", k); break;
// case 12: printf("Мне %d лет", k); break;
// case 13: printf("Мне %d лет", k); break;
// case 14: printf("Мне %d лет", k); break;
// case 15: printf("Мне %d лет", k); break;
// case 16: printf("Мне %d лет", k); break;
// case 17: printf("Мне %d лет", k); break;
// case 18: printf("Мне %d лет", k); break;
// case 19: printf("Мне %d лет", k); break;
// case 20: printf("Мне %d лет", k); break;

// default:
//   switch (k%10)
//   {
//   case 1: printf("Мне %d год", k); break;
//   case 2: printf("Мне %d года", k); break;
//   case 3: printf("Мне %d года", k); break;
//   case 4: printf("Мне %d года", k); break;
//   default:printf("Мне %d лет", k); break;
//   }
// break;
// }

// return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void)
// {
//   setlocale(LC_ALL, "");

//   int x,y;
//   scanf("%d %d", &x, &y);
//   printf("%d", x==y);

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void)
// {
//   setlocale(LC_ALL, "");

//   double x, y;
//   int res1, res2, res3, res4, result;
//   scanf("%lf %lf", &x, &y);

//   res1 = (x > 0 && y > 0);
//   res2 = (x < 0 && y > 0);
//   res3 = (x < 0 && y < 0);
//   res4 = (x > 0 && y < 0);
//   result = 1000 * res1 + 100 * res2 + 10 * res3 + 1 * res4;

//   switch (result)
//   {
//   case 1000: printf("1"); break;
//   case 100: printf("2"); break;
//   case 10: printf("3"); break;
//   default: printf("4"); break;
//   }

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void)
// {
//   setlocale(LC_ALL, "");

//   double x, y;
//   int res1, res2, res3, res4, result;
//   scanf("%lf %lf", &x, &y);

// switch (x>=0)
// {
// case 1:   switch (y>=0)
// {
// case 1: printf("1"); break;

// default: printf("4"); break;
// }; break;

// default: switch (y>=0)
// {
// case 1: printf("2"); break;

// default: printf("3"); break;
// }; break;
// }

// return 0;
// }

// #include <stdio.h>
// #include <locale.h>
// int main(void)
// {
//   setlocale(LC_ALL, "");

//   int x;
//   printf("Введите любое число \n");
//   scanf("%d", &x);

//   x>=0? printf("число положительное") : printf("число отрицательное");
//   return 0;
// }

// condition ? consequent : alternative

// is this condition true ? yes : no

// #include <stdio.h>

// int main(void)
// {
//   int t;
//   scanf("%d", &t);
//   if (t>60)
//     {
//     printf("Fire situation");
//     }
//   return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//   int a,b,c, count=0;
//   scanf("%d %d %d", &a, &b, &c);
//   if (a>=0) count++;
//   if (b>=0) count++;
//   if (c>=0) count++;
//   printf("%d", count);
//   // printf("%d", (a > 0) + (b > 0) + (c > 0)); //просто очень красивое решение
//   return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//   int a,b;
//   scanf("%d %d", &a, &b);
//   a<b? printf("yes") : printf("no");
//   return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//   double x_1, y_1, x_2, y_2;
//   scanf("%lf %lf %lf %lf", &x_1, &y_1, &x_2, &y_2);

//   if ((pow(x_1,2) + pow(y_1,2)) > (pow(x_2,2) + pow(y_2,2))) printf("2");
//   if ((pow(x_1,2) + pow(y_1,2)) < (pow(x_2,2) + pow(y_2,2))) printf("1");
//   if ((pow(x_1,2) + pow(y_1,2)) == (pow(x_2,2) + pow(y_2,2))) printf("0");
//   // if ((fabs(x_1) + fabs(y_1)) > (fabs(x_2) + fabs(y_2))) printf("2");
//   // if ((fabs(x_1) + fabs(y_1)) < (fabs(x_2) + fabs(y_2))) printf("1");
//   // if ((fabs(x_1) + fabs(y_1)) == (fabs(x_2) + fabs(y_2))) printf("0");

//   return 0;
// }

// #include <stdio.h>

// int main()
// {
//   int b_1, b_2, b_3, b_4;
//   scanf("%d %d %d %d", &b_1, &b_2, &b_3, &b_4);

//   b_1 == 1 && b_2 == 0 && b_3 == 2 && b_4 == 4 ? printf("open") : printf("close");

//   return 0;
// }

// #include <stdio.h>

// int main()
// {
//   int b_1, b_2, b_3;
//   scanf("%d %d %d", &b_1, &b_2, &b_3);

//   (b_1==2||b_2==2||b_3==2)&&(b_1==4||b_2==4||b_3==4)&&(b_1==8||b_2==8||b_3==8) ? printf("open") : printf("closed");

//   return 0;
// }

// #include <stdio.h>

// int main()
// {
//   int minute;
//   scanf("%d", &minute);

//   if (minute <= 500)
//     printf("350");
//   else
//     printf("%.lf", 350 + (double)(minute - 500) * 2);

//   return 0;
// }


// #include <stdio.h>

// int main()
// {
//   int day, mounth, flag=0;
//   scanf("%d %d", &day, &mounth);

//   if ((mounth==1||mounth==3||mounth==5||mounth==7||mounth==8||mounth==10||mounth==12)&&(day>=1&&day<=31)) flag=1;
//   if ((mounth==4||mounth==6||mounth==9||mounth==11)&&(day>=1&&day<=30)) flag=1;
//   if ((mounth==2)&&(day>=1&&day<=29)) flag=1;
//   flag==1? printf("correct"):printf("error");

//   return 0;
// }

// #include <stdio.h>
// #include <locale.h>

// int main()
// {
//   setlocale(LC_ALL, "");

//   int age;
//   scanf("%d", &age);

//   if (age<=6) printf("дошкольник");
//   if (age>=7&&age<=18) printf("школьник");
//   if (age>=19&&age<=59) printf("рабочий");
//   if (age>=60) printf("пенсионер");


//   return 0;
// }

// #include <stdio.h>

// int main()
// {
//   int n1, n2, n3;
//   scanf("%d %d %d", &n1, &n2, &n3);


//   if ( (n3>n2 && n2>n1) || (n3==n2 && n2>n1)) printf("%d %d %d", n1, n2, n3);
//   if ( (n2>n3 && n3>n1)) printf("%d %d %d", n1, n3, n2); 
//   if ( (n1>n3 && n3>n2) || (n1==n3 && n3>n2) ) printf("%d %d %d", n2, n3, n1);
//   if ( (n3>n1 && n1>n2) || (n3>n1 && n1==n2)) printf("%d %d %d", n2, n1, n3);
//   if ( (n2>n1 && n1>n3) || (n2==n1 && n1>n3) || (n2>n1 && n1==n3)) printf("%d %d %d", n3, n1, n2);
//   if ( (n1>n2 && n2>n3) || (n1>n2 && n2==n3)) printf("%d %d %d", n3, n2, n1);
//   if (n1==n2 && n2==n3 && n1==n3) printf("%d %d %d", n1, n2, n3);

//   return 0;
// }