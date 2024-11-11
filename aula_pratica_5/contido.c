#include <stdio.h>

int contido(int a, int b){
    int auxb = b, tamanhob = 0, aux1 = 1;
    
    while (auxb>0){  /*descobre o número de digitos de B*/
        tamanhob++;
        aux1 *= 10;
        auxb /= 10;
    }

    while (a>0){  /*verifica se são iguais */
        if (a % aux1 == b){
            return 1;
        }
        else a/=10;
    }
    return 0;
}

int main(){
    int a, b;

    printf("Introduza o primeiro número: ");
    scanf("%d", &a);
    printf("Introduza o segundo número: ");
    scanf("%d", &b);

    if (contido(a,b)){
        printf("O número %d está contido em %d\n", b, a);
    }
    else{
        printf("O número %d não está contido em %d\n", b, a);
    }
    return 0;
}
