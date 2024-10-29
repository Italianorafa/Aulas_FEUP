#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2){
    float d = sqrt(pow((x1-x2), 2)+pow((y1-y2), 2));
    return d;
}

int colisao(float xc1, float yc1, float xc2, float yc2, float r1 , float r2){
    if (distancia(xc1, yc1, xc2, yc2) < r1 + r2) return 1;
    else return 0;
}

int main(){
    float xcent1, ycent1, xcent2, ycent2, raio1, raio2;

    printf("Posição (x, y) e raio da bola 1:");
    scanf("%f, %f %f", &xcent1, &ycent1, &raio1);
    printf("Posição (x, y) e raio da bola 2:");
    scanf("%f, %f %f", &xcent2, &ycent2, &raio2);

    if (colisao(xcent1, ycent1, xcent2, ycent2, raio1, raio2) == 1){
        printf("As bolas estão em colisão.");
    }
    else{
        printf("As bolas não estão em colisão.");
    }
    
    return 0;

}