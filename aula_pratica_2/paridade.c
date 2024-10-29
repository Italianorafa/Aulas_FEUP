#include <stdio.h>

int main(){

    int numero;

    printf("Insira uma número: ");
    scanf("%d", &numero);

    switch (numero % 2){
        case 0:
            printf("%d é par\n", numero);
            break;
        default:
            printf("%d é ímpar\n", numero);
    };
    return 0;
}