#include <stdio.h>

float parabola(float a, float x){
    float f = a * (x*x);
    return f;
}

int main (){
    float a, inter1, inter2, incre;

    printf("Qual é o valor de a? ");
    scanf("%f", &a);
    printf("Qual é o intervalo? ");
    scanf("%f %f", &inter1, &inter2);
    printf("Qual é o incremento? ");
    scanf("%f", &incre);

    for(float i = inter1; i <= inter2; i += incre){
        printf("f(%.1f) = %.1f\n", i, parabola(a, i));
    }
    return 0;
}