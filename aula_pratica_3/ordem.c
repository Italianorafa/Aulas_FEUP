#include <stdio.h>

int main(){
    
    int n1, n2, n3, aux;

    printf("Insira o 1º número:");
    scanf("%d", &n1);

    printf("Insira o 2º número:");
    scanf("%d", &n2);
    
    printf("Insira o 3º número:");
    scanf("%d", &n3);

    if (n1>n2){
        aux = n2;
        n2 = n1;
        n1 = aux;
    }
    if (n1>n3){
        aux = n3;
        n3 = n1;
        n1 = aux;
    }
    if (n2>n3){
        aux = n3;
        n3 = n2;
        n2 = aux;
    }

    printf("A ordem ascendente é: %d, %d, %d\n",n1,n2,n3);
    return 0;

}