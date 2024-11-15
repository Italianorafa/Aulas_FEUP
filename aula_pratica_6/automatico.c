#include <stdio.h>
#define TAM 15

void preencher_vetor(float v[], int n){
    for (int i=0; i<n; i++){
        printf("Insira o elemento %d: ", i+1);
        scanf("%f", &v[i]);
    }
}

float somatorio_vetor(float v[], int n){
    float soma=0;
    for (int i=0; i<n; i++){
        soma += v[i];
    }
    return soma;
}

void imprimir_vetor(float v[], int n){
    printf("{");
    for (int i=0; i<n; i++){
        printf("%.1f ", v[i]);
    }
    printf("}");
}

int main(){
    int n;
    float vetor[TAM];

    printf("Quantos elementos pretende armazenar? ");
    scanf("%d", &n);

    if (n>TAM){
        printf("O número de elementos está limitado a 15!");
    }
    else{
        preencher_vetor(vetor, n);
        printf("O vetor lido foi:");
        imprimir_vetor(vetor,n);
        printf("\ne a soma de seus elementos é: %.2f", somatorio_vetor(vetor,n));
    }
}