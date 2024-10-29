#include <stdio.h>

int main(){

    float n1,n2;

    printf("Insira o primeiro número: ");
    scanf("%f", &n1);

    printf("Insira o segundo número: ");
    scanf("%f", &n2);

    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;

    printf("Valor do primeiro número depiois da troca: %.2f\nValor do segundo número depois da troca: %.2f\n", n1, n2);

    return 0;
}