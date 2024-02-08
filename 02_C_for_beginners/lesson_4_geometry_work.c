// #include <stdio.h>

// void mirror(int *px, int *py){
//     *px=-*px;
// }

// int main(void){
//     int x,y;
//     int*px=&x, *py=&y;
//     scanf("%d%d", px,py);
//     mirror(px,py);
//     printf("%d %d", x, y);
//     return 0;
// }

// #include <stdio.h>

// void mirror_seg(int *px_1, int *py_1, int *px_2, int *py_2){
//     *py_1=-*py_1;
//     *py_2=-*py_2;
// }

// int main(void){
//     int x_1, y_1, x_2, y_2;
//     int * px_1=&x_1, * py_1=&y_1, * px_2=&x_2, * py_2=&y_2;
//     scanf("%d%d%d%d", px_1, py_1, px_2, py_2);
//     mirror_seg(px_1, py_1, px_2, py_2);
//     printf("%d %d %d %d", x_1, y_1, x_2, y_2);
//     return 0;
// }

// #include <stdio.h>

// void move(int *px, int *py, int dx, int dy){
//     *px=*px+dx;
//     *py=*py+dy;
// }

// int main(void){
//     int x, y, d_x, d_y;
//     int * px=&x, * py=&y;
//     scanf("%d%d%d%d",px,py, &d_x, &d_y);
//     move(px, py, d_x, d_y);
//     printf("%d %d", x, y);
//     return 0;
// }

#include <stdio.h>

void center(int *px_l1, int *py_l1, int *px_r1, int *py_r1, int *pres_x, int *pres_y)
{
    *pres_x = (int)(*px_l1 + *px_r1) / 2;
    *pres_y = (int)(*py_l1 + *py_r1) / 2;
}

int main(void)
{
    int x_l1, y_l1, x_r1, y_r1, res_x, res_y;
    int *px_l1 = &x_l1, *py_l1 = &y_l1, *px_r1 = &x_r1, *py_r1 = &y_r1, *pres_x = &res_x, *pres_y = &res_y;
    scanf("%d%d%d%d", px_l1, py_l1, px_r1, py_r1);
    center(px_l1, py_l1, px_r1, py_r1, pres_x, pres_y);
    printf("%d %d", res_x, res_y);

    return 0;
}