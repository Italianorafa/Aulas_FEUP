#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float aleatoriedade(int max, int min){
    float n;
    srand(time(NULL));
    n = min+(rand()%max + 1);

    return n;
}

int main(){
    float maxi, mini, num;

    printf("Insira o mínimo: ");
    scanf("%f", &mini);
    printf("Insira o máximo: ");
    scanf("%f", &maxi);

    num = aleatoriedade(maxi, mini);
    printf("%.2f", num);
    return 0;
}