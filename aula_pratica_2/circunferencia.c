#include <stdio.h>
#define pi 3.1416

int main(){

    float raio, area, peri;

    printf("Insira o raio da circunferência: ");
    scanf("%f", &raio);

    area = pi * (raio*raio);
    peri = 2 * pi * raio;

    printf("Perimetro: %f\nÁrea: %f\n", peri, area);

    return 0;
}