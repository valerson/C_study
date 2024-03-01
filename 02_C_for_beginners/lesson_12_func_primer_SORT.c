// #include <stdio.h>

// // � ������
// int funk_primer_1(int x, int y);

// // � ����������
// void funk_primer_2(int *x, int *y);

// int main(void)
// {
//     int x = 5, y = 10;
//     int *px = &x;
//     int *py = &y;

//     // �����������
//     int res = funk_primer_1(x, y);
//     printf("simple function:\nres= %d\n", res); // res= 15

//     funk_primer_2(px, py);
//     printf("simple function:\nx= %d y= %d\n", x, y); // x= 15 y= 5

//     // ������ ��������� �� �������
//     int (*name_primer_1)(int, int);      // �������� ��� funk_primer_1
//     void (*name_primer_2)(int *, int *); // �������� ��� funk_primer_2

//     name_primer_1 = funk_primer_1;
//     int res_2 = name_primer_1(100, 200);
//     printf("indicator function:\nres_2= %d\n", res_2); // res2= 300

//     x = 100;
//     y = 200;
//     name_primer_2 = funk_primer_2;
//     printf("* funk_2 = %p\n", funk_primer_2);
//     printf("* name_2 = %p\n", name_primer_2);

//     name_primer_2(px, py);
//     printf("indicator function:\nx= %d y= %d\n", x, y); // x= 110 y= 195

//     return 0;
// }

// // � ������
// int funk_primer_1(int x, int y)
// {
//     return x + y;
// }

// // � �����������
// void funk_primer_2(int *x, int *y)
// {
//     *x += 10;
//     *y -= 5;
// }

#include <stdio.h>
#include <string.h>

int func_req(int x, int y);
int func_sort(
    int aa[], size_t size_aa,  
    const int bb[], size_t size_bb,
    int (*req)(int, int), int n, int *count);

int main(void)
{
    int ccount=0;
    int * count=&ccount; //��������� ������������ �������

    int a[]={0,1,2,3,4,5,6,7,8,9};
    int result[10];
    int n=5; //�������� ����� ��� ������� (������ ��� ����� 5 �����)
    // printf("%d", a[2]);
    
    func_sort(result, 10 , a, 10, func_req, n, count);
    for (int i=0; i<*count; i+=1)
    {
        printf("%d ", result[i]);
    }

    return 0;
}

int func_req(int x, int y)
{
    if (y>=x) return 1;
    else return 0;
}

int func_sort(
    int aa[], size_t size_aa,  
    const int bb[], size_t size_bb,
    int (*req)(int, int), int n, int *count)
{
    //������ ������
    for (int i=0; i<size_aa; i+=1) {aa[i]=0;}
    //��� ��� 
    //memset(aa, 0, sizeof(aa));
    for (int i=0, j=0; i<size_bb; i+=1)
    {
        
        if (req(bb[i],n)==1) 
        {
            aa[j]=bb[i]; 
            j+=1;
            *count+=1;
        }
    }
}