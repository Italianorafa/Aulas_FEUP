#include <stdio.h>

void preencher_vetor(float v[]){
    for (int i=0; i<10; i++){
        printf("Insira o elemento %d: ", i+1);
        scanf("%f", &v[i]);
    }
}

float media(float vetor[]){

    float soma=0, media; int i;

    for (i=0; i<10; i++){
        soma += vetor[i]; 
    }

    return media = soma/10;
}

float max(float vetor[]){

    float max=vetor[0]; int i;

    for (i=0; i<10; i++){
        if (vetor[i] >= max){
            max = vetor[i];
        }
    }
    return max;
}

float min(float vetor[]){

    float min = vetor[0]; int i;

    for (i=0; i<10; i++){
        if (vetor[i]<=min){
            min = vetor[i];
        }
    }
    return min;
}

void imprimir_vetor(float vetor[]){
    printf("{ ");
    for(int i=0; i<10; i++){
        printf("%.1f ", vetor[i]);
    }
    printf("}");
}

int  main(){
    float vetor[10];

    preencher_vetor(vetor);
    printf("Média: %.2f\nMáximo: %.2f\nMínimo: %.2f\n", media(vetor), max(vetor), min(vetor));
    printf("Vetor: ");
    imprimir_vetor(vetor);

    return 0;
}