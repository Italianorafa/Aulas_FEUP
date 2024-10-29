#include <stdio.h>
#include <math.h>

float taxa_anual(int x, float y){
    
    return pow(1+(y/100), x);
}

int main(){

    float ca, ci, juros; int ano;

    printf("Qual é o capital inicial? ");
    scanf("%f", &ci);
    printf("Qual é a taxa de juros anual a ser aplicada? ");
    scanf("%f", &juros);
    printf("Durante quantos anos? ");
    scanf("%d", &ano);
    
    ca = ci * taxa_anual(ano, juros);

    printf("O capital acumulado ao fim de %d anos é: %.3f euros\n", ano, ca);
    return 0;
}