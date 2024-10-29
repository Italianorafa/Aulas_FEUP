#include <stdio.h>

int  main(){
    float media,num, auxmax = 0, soma=0, cont=0;
    int  auxmin = __INT_MAX__;

    while(1){
        if (scanf("%f", &num) == -1){
            break;
        }
        else{
            soma+=num;
            if (num > auxmax){
                auxmax = num;
            }
            if (num < auxmin){
                auxmin = num;
            }
            cont++;
        }
    }
    media = soma/cont;
    printf("A mediados numeros é %.2f, o máximo é %.f e o mínimo %d", media, auxmax, auxmin);

    return 0;
}