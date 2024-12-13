#include <stdio.h>

void quociresto(int dividendo, int divisor, int *quociente, int *resto){

    if (dividendo<divisor){
        *quociente = 0;
        *resto = dividendo;
    }
    else{
        while(dividendo>=divisor){
           dividendo -= divisor;
           *quociente = *quociente + 1; 
        }
        *resto = dividendo;
    }
}

int soma(int n){
    int soma = 0, aux = 0, aux2 =0;
    while(n!=0){
        quociresto(n, 10, &aux2, &aux);
        soma += aux;
        n = aux2;
    }
    return soma;
}

int par(int n){
    int aux = 0, aux2 = 0, aux3 = 0;
    quociresto(n, 10, &aux, &aux2);
    quociresto(aux2, 2, &aux, &aux3);
    if (aux3 == 0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int numero;

    printf("Insira um número: ");
    scanf("%d", &numero);

    if (par(numero) == 0){
        printf("A soma de seus dígitos é %d e o número é par.\n", soma(numero));
    }
    else{
        printf("A soma de seus dígitos é %d e o número não é par.\n", soma(numero));
    }
    return 0;
}