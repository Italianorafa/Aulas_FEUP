#include <stdio.h>

int main(){
    int altura, linha, esp;

    printf("altura? ");
    scanf("%d", &altura);

    if (altura<4){
        printf("A altura deve ser no mínimo 4.");
    }
    else{
       for (linha = 1; linha <= altura-1; linha++){
        // quantidade de espaços em branco
        for (esp = altura - linha; esp>0; esp--){
            printf(" ");
        }
        // quantidade de asteriscos(copa da árvore)
        for (esp = 1; esp <= 2 * linha - 1; esp++){ // a cada linha dois asteriscos são adicionados.
            printf("*");
        }
        printf("\n");
    }
    
    for(esp = altura-1; esp>0 ;esp--){
        printf(" ");
    }
    printf("*\n"); 
    }
    return 0;
}