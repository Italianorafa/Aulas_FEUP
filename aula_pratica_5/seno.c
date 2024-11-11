#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int fatorial(int n){
    int fat=1,i;

    for (i=1; i<=n; i++){
        fat *= i;
    } 
    return fat;
}

float seno (float ang, float toler){
    float sin=0.0, termo;
    int i = 1;
    do{
        termo = (pow(-1, i+1)) * ((pow(ang, (2*i)-1)/fatorial((2*i)-1)));
        if (fabs(termo) >= toler){
            sin += termo;
        }
        i++;
    }while(fabs(termo) >= toler);
    
    return sin;
}

int main(){
    float angulo, tolerancia;

    printf("Qual é o valor do ângulo? ");
    scanf("%f", &angulo);
    printf("Qual é a tolerância? ");
    scanf("%f", &tolerancia);

    printf("O seno de %.2f é: %f", angulo, seno(angulo, tolerancia));
    return 0;
}