#include <stdio.h>
#define tamanho 15
int sum_v(int vet1[], int tam, int vRet[]){
    int soma;
    for (int i=1; i< (tam/2); i = i+2){
        soma = vet1[i] + vet1[i-1];
        vRet[i-1] = soma;
    }
    return 0;
}

int range_v(int vet1[]){
    int i, min = vet1[0], max = vet1[0], diferenca;

    for (i=0; i<tamanho; i++){
        if (vet1[i]<=min){
            min = vet1[i];
        }
    }
    for (i=0; i<tamanho; i++){
        if (vet1[i] >= max){
            max = vet1[i];
        }
    }
    return diferenca=max-min;
}