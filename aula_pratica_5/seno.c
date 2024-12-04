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

float f_seno(float ang, float toler, int *termos){
    float sin=0.0, termo;
    int i = 1;
    do{
        termo = (pow(-1, i+1)) * ((pow(ang, (2*i)-1)/fatorial((2*i)-1)));
        if (fabs(termo) >= toler){
            sin += termo;
        }
        i++;
        *termos = *termos + 1;
    }while(fabs(termo) >= toler);
    *termos = *termos - 1;
    
    return sin;
}

int main(){
    float angulo, tolerancia, seno; int termos = 0;

    printf("Qual é o valor do ângulo? ");
    scanf("%f", &angulo);
    printf("Qual é a tolerância? ");
    scanf("%f", &tolerancia);
    seno = f_seno(angulo, tolerancia, &termos);

    printf("O seno de %.2f é: %f (%d termos da serie)", angulo, seno, termos);
    return 0;
}