#include <stdio.h>

int main(){

    int num;

    printf("Insira um número: ");
    scanf("%d", &num);
    printf("O número em algarismos romanos é:");
    while(num/100 != 0){
        printf("C");
        num %= 100;
    }
    while(num/50 != 0){
        printf("L");
        num %= 50;
    }
    while(num/10 != 0){
        printf("X");
        num %= 10;
    }
    while(num/5 != 0){
        printf("V");
        num %= 5;
    }
    while(num != 0){
        printf("I");
        num -= 1;
    }

    return 0;
}