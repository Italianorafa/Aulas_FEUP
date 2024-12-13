#include <stdio.h>

int *vmaior(int *valor1, int *valor2){
    if (*valor1 > *valor2){
        return valor1;
    }
    else{
        return valor2;
    }
}

int main(){
    int a, b, valor;
    printf("Insira dois números: ");
    scanf("%d %d", &a, &b);
    if (vmaior(&a, &b)==&a){
        valor = a;
    }
    else{
        valor = b;
    }
    printf("Endereço das variáveis: %p %p\nEndereço do maior: %p\nValor: %d\n", &a, &b,vmaior(&a,&b), valor);
    
    return 0;
}