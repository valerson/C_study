#include <stdio.h>
#include <string.h>

#define LENGHT 52

int main(void){
    char text_1[LENGHT]="12345678";
    // int j=2;

    for (int k=4;k<strlen(text_1);k+=1){
        text_1[k]=text_1[k+1];}

    puts(text_1);
    return 0;
}