#include <stdio.h>

int main(){

    float num;

    printf("Insira um número: ");
    scanf("%f", &num);

    if (num < -10){
        printf("O número se encontra no intevalo: ]-∞, -10[");
    }
    else if(num >= 5 && num < 45){
        printf("O número se encontra no intervalo: [5, 45[");
    }
    else if(num > 120 && num <= 245){
        printf("O número se encontra no intervalo: ]120, 245]");
    }
    else{
        printf("O número não se encontra nos intervalos.");
    }

    return 0;
}