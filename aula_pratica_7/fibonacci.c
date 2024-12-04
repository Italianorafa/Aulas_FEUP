#include <stdio.h>

void printf_vet(int vet[],int n){
    printf("{ ");
    for (int i=0; i<n; i++){
        printf("%d", vet[i]);
    }
    printf(" }\n");
}

void fibo_NMax(int vet[], int tam){
    
    if (tam == 0){
        vet[tam] = 0;
    }
    else if (tam == 1){
        vet[tam] = 1;
    }
    else{
        vet[tam] = (vet[tam-2] + vet[tam-1]);
    }
}      


int main(){
    int tamanho, n;
    printf("Pretende usar máximo de valores (1) ou valor máximo? ");
    scanf("%d", &n);
    if (n == 1){
        printf("Introduza o número máximo de valores: ");
        scanf("%d",&tamanho);
    }
    int vetor[tamanho];
    fibo_NMax(vetor, tamanho);
    printf("A sequência é: ");
    printf_vet(vetor,tamanho);
    
    return 0;
}