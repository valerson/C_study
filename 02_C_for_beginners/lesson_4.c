#include <stdio.h>
#include <math.h>
#define G 9.81          //��������� ���������� �������
#define PI 3.1415926    // ����� ��
int main(void){
    double 
        a,      //����, ��� ������� ������� ����
        v_0,    //��������� ������������
        h;      //������ - �������� ����������
    scanf("%lf%lf", &a, &v_0);
    double alpha=a*PI/180;
    h=v_0*v_0*sin(alpha)*sin(alpha)/2/G;
    printf("%lf", h);

    return 0;
}