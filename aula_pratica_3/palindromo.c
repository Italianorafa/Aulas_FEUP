#include <stdio.h>

int main(){

    int num, centena, unidade;

    printf("Insira um inteiro de 3 dígitos: ");
    scanf("%d", &num);

    centena = num/100;
    unidade = (num%100)%10;

    if (centena == unidade){
        printf("O número é capicua.\n");
    }
    else{
        printf("O número não é capicua.\n");
    }
    return 0;
}