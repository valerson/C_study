#include <stdio.h>


int main()
{
    FILE * fin  = fopen("data.txt", "r");   // ������� ���� data.txt �� ������ - ����� fin
    FILE * fout = fopen("out.txt", "w");    // ������� ���� out.txt �� ������ - ����� fout


    int n;
    fscanf(fin, "%d", &n);                  // ������ ���������� ����� �� ������ fin


    int i, sum;
    for(sum = 0, i = 0; i < n; i++) {
        int x;
        fscanf(fin, "%d", &x);              // ������ ��������� ����� �� ������ fin
        sum += x;
        printf("i=%d x=%d sum=%d\n", i, x, sum);    // ���������� ������ � ����� stdout
    }


    fprintf(fout, "%d\n", sum);             // ��������� ����� � ����� fout


    fclose(fin);                            // ��������� �������� ���� ������
    fclose(fout);


    return 0;
}