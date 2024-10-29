#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2){
    float d = sqrt(pow((x1-x2), 2)+pow((y1-y2), 2));
    return d;
}

int main(){
    float p1x, p1y, p2x, p2y;

    printf("Quais as coordenadas do ponto 1?(x y) ");
    scanf("%f %f", &p1x, &p1y);
    printf("Quais as coordenadas do ponto 2?(x y) ");
    scanf("%f %f", &p2x, &p2y);

    printf("A distância entre os pontos é de %.2f\n", distancia(p1x, p1y, p2x, p2y));
    
    return 0;
}