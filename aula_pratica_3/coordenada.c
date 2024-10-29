#include <stdio.h>

int main(){
    int x,y;

    printf("Insira o ponto x: ");
    scanf("%d", &x);

    printf("Insira o ponto y: ");
    scanf("%d", &y);

    if (x == 0 || y == 0){
        printf("O ponto está entre dois quadrantes.");
    }

    if (x>0 && y>0){
        printf("O ponto está no 1º quadrante.");
    }
    else if(x<0 && y>0){
        printf("O ponto está no 2º quadrante.");
    }
    else if(x<0 && y<0){
        printf("O ponto está no 3º quadrante.");
    }
    else{
        printf("O ponto está no 4º quadrante.");
    }

    return 0;
}