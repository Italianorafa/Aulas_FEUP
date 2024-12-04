#include <stdio.h>

int contaRep(int vet[], int tam, int numero){
    int cont=0, i, maiorSeq = 0;

    for(i=0; i<tam; i++){
        if (vet[i] == numero){
            cont++;
            maiorSeq = (cont>maiorSeq) ? cont:maiorSeq;
        }
        else{
            cont=0;
        }
    }
    return maiorSeq;
}

int main(){
    int vet[100], n, tamanho = 0, maiorSeq;

    while(1){
        printf("Introduza um número(negativo para finalizar): ");
        scanf("%d", &vet[tamanho]);
        if (vet[tamanho]<0){
            break;
        }
        tamanho++;
    }
    printf("Número a pesquisar: ");
    scanf("%d", &n);
    maiorSeq = contaRep(vet, tamanho, n);
    printf("A maior sequencia com números %d tem tamanho %d\n", n, maiorSeq);

    return 0;
}