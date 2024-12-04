#include <stdio.h>

int divisao(int *divid, int *divisor){
    int q;

    if (*divid<*divisor){
        return -1;
    }
    else if (*divisor == 0){
        return 0;
    }
    else{
        while (*divid>=*divisor){
            *divid = *divid - *divisor;
            q++;
        }
        return q;
    }
}

int main(){
    int dividendo, divisor;

    printf("Insira o dividendo: ");
    scanf("%d", &dividendo);
    printf("Insira o divisor: ");
    scanf("%d", &divisor);

    int quociente = divisao(&dividendo, &divisor);

    printf("Quociente: %d\nResto: %d\n", quociente, dividendo);

    return 0;
}