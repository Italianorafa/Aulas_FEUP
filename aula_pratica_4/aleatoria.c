#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n_quatros(int x){
    int i, cont = 0, n;
    for (i = 0; i < x; i++){
        n = rand()%6;
        if (n==4){
            cont++;
        }
    } 
    return cont;
}

int main(){
    int lanc;

    printf("Quantos lançamentos? ");
    scanf("%d", &lanc);

    printf("A face quatro saiu %d vezes", n_quatros(lanc));

    return 0;
}