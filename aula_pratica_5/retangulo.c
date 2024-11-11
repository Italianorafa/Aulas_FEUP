#include <stdio.h>

void retangulo(char c,int lin,int col){
    int i, j;
    
    for (i = 0; i<lin; i++){
        for (j=0;j<col;j++){
            if (i == 0 || i == lin - 1){
                printf("%c", c);
            }
            else if (j == 0 || j == col-1){
                printf("%c",c);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


int main (){
    char caract;
    int linhas, colunas, i;

    printf("Introduza um caracter: ");
    scanf(" %c", &caract);
    printf("Introduza o número de linhas: ");
    scanf("%d", &linhas);
    printf("Introduza o número de colunas: ");
    scanf("%d", &colunas);

    retangulo(caract, linhas, colunas);
    return 0;
}