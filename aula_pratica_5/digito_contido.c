#include <stdio.h>

long contido(long n, long d){
    int contador = 0;
    while (n >0){
        if (n % 10 == d){
            contador += 1;
            n /= 10;
        }
        else{
            n/=10;
        }
    }
    return contador;
}
int main(){
    long num, digito;

    printf("Introduza um número inteiro: ");
    scanf("%ld", &num);
    printf("Introduza um dígito: ");
    scanf("%ld", &digito);

    printf("O dígito %ld aparece %ld vezes no número %ld\n", digito, contido(num, digito), num);

    return 0;
}