#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    int lancamentos, k, i, j;
    scanf("%d", &lancamentos);
    int vetor[lancamentos];

    srand(time(NULL));
    for(k=0; k<lancamentos; k++){
        vetor[k] = (rand()%5) + 1;
    }

    for(i=0; i<lancamentos; i++){
        printf("%d - ", i+1);
        for(j=0; j<vetor[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}