// str_bomb5 ������� ��� �����
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replace(char *result, const char *start);

int main(void)
{
    char s[1000];
    char result[1000]={};
    char c;
    while (2 == scanf("%s%c", s, &c))
    {
        // printf("%s\n", s);

        replace(result, s);
        printf("%s%c", result, c);
        memset(result, 0, sizeof(result)); //������� ������ ������
    }
    replace(result, s);
    printf("%s", result);

    return 0;
}

void replace(char *result, const char *start)
{
    // strcpy(result, start);
    
    char start_copy[1000]; //����� �� ������ ����������� ������, �� ����� �������
    strcpy(start_copy, start);

    int len_bomba=strlen("bomba");
    // int len_watermelon=strlen("watermelon");

    char * s; //��������� �������. ������� ����� �� ������ ������ ��� ����������� � ������
    char * b; //��������� ����� �� ������ ����� ����
    
    s=start_copy; //������ �� ������ ������
    b=strstr(start_copy, "bomb"); //��������� �� ������ ����� � ������, ���� ����

    //printf("adress start = %p\n", s);
    //printf("adress bomb %p\n", b);

    //int res = b-s; //��������� �������� �� ���������� ����� �����
    //printf("symvolov vsego = %d\n", res);

    //s=b+len_bomba; //�������� ��������� �� ����� ����� �����
    //printf("new adress = %p\n", s);
    //printf("result = %s\n", result);
    
    while (b != NULL)
    {
        strncat(result, s, b-s); //������� ������ ������ � ����� ������ � ��������� �� ������ ������ ���������� ����
        strcat(result,"watermelon");
        s=b+len_bomba-1; //�������� ��������� �� ����� ����� �����
        b[0]='-'; //������ ����� �����. ������ - �����
        b=strstr(start_copy, "bomb"); //���� ��� ���� ����� �����
        //printf("result = %s\n", result);
    }
    strcat(result,s); //������� ������ ������ � ����� ������ � ��������� �� ������ 
    //printf("result = %s\n", result);
}

