#include <stdio.h>

int main(){

    float r1, r2, serie, paralelo;

    printf("Valor de R1 (em ohm): ");
    scanf("%f",&r1);

    printf("Valor de R2 (em ohm): ");
    scanf("%f",&r2);

    serie = r1 + r2;
    paralelo = (r1*r2)/(r1+r2);

    printf("Valor da resistência equivalente em série: %.4f\nValor da resistência equivalente em paalelo: %.4f\n", serie, paralelo);

    return 0;
}