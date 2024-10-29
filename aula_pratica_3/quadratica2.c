#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, delta, x1, x2;

    printf("Insira os coeficientes (ax^2 + bx + c = 0): ");
    scanf("%d %d %d", &a, &b, &c);

    delta = (b*b) - (4*a*c);
    if (delta<0){
        printf("A equação não tem solução real.");
    }
    else{
    x1 = ((-b) + sqrt(delta))/(2*a);
    x2 = ((-b) - sqrt(delta))/(2*a);
    }
    printf("A equação %dx^2+%dx%d tem as solucoes x=%d e x=%d", a, b, c, x1, x2);

    return 0;
}