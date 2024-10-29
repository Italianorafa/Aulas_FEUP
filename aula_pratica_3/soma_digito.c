#include <stdio.h>

int main(){

    int num, cente, deze, soma;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    cente = num/100;
    num = num%100;
    deze = num/10;
    num = num%10;
    soma = cente + deze + num; 

    printf("A soma dos dígitos é %d\n", soma);

    return 0;
}