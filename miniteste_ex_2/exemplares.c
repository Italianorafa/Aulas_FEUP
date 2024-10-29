#include <stdio.h>

int main(){
    int ano, triag, vend, dife, aux1 = __INT_MAX__, aux2 = 0, ano_menor, ano_maior;

    while(scanf("%d   %d %d", &ano, &triag, &vend) != EOF){
        dife = triag - vend;
        if (triag < aux1){
            ano_menor = ano;
            aux1 = triag;
        }
        if (dife>aux2){
            ano_maior = ano;
            aux2 = dife;
        }
        printf("Diferença em %d: %d\n", ano, dife);
    }

    printf("Ano em que foram produzidos menos exemplares: %d\nAno em que a diferença entre produzidos e vendidos foi maior: %d\n", ano_menor, ano_maior);

    return 0;
}