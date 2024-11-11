#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int negativo(int a, int b, int c){
    int del;

    del = (b*b) - (4*a*c);
    if (del<0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a, b, c, delta;
    float x1, x2;
    printf("Insira os coeficientes (ax^2 + bx + c = 0): ");
    scanf("%d %d %d", &a, &b, &c);

    delta = (b*b) - (4*a*c);
    if (negativo(a,b,c) == 1){
        float raizd = sqrt(abs(delta))/(2*a);
        printf("Tem raízes complexas: %d + %.3fi e %d - %.3fi\n", -b/(2*a), raizd, -b/(2*a), raizd);
    }
    else{
        x1 = ((-b) + sqrt(delta))/(2*a);
        x2 = ((-b) - sqrt(delta))/(2*a);
        if (x1 == x2){
            printf("Tem raiz dupla: %.3f\n", x1);
        }
        else{
            printf("As raízes são: %.3f e %.3f\n", x1, x2);
        }
    }

    return 0;
}