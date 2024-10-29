#include <stdio.h>

int main(){

    float num, partD;
    int partI;

    printf("Insira um número:");
    scanf("%f", &num);

    partI = (int) num;
    partD = num - partI;

    printf("Número com 3 casas decimais: %.3f\nParte inteira: %d\nParte decmal: %if\n", num, partI, partD);

    return 0;
}