#include <stdio.h>

void contaVezes(int num, int digit, int *ptr_vezes){

    while(num != 0){
        if (num%10 == digit){
            *ptr_vezes+= 1;
            num/=10;
        }
        else{
            num/=10;
        }
    }
}

int main(){
    int numero, digito, vezes = 0;

    printf("Introduza um número inteiro: ");
    scanf("%d", &numero);
    printf("Qual dígito deseja procurar? ");
    scanf("%d", &digito);
    contaVezes(numero, digito, &vezes);
    printf("O dígito %d aparece %d vezes no número %d\n", digito, vezes, numero);
}