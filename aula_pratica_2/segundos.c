#include <stdio.h>

int main(){

    int dia, hrs, min, seg;

    printf("Quantos segundos? ");
    scanf("%d", &seg);

    dia = seg/86400;
    seg = seg%86400;
    hrs = seg/3600;
    seg = seg%3600;
    min = seg/60;
    seg = seg%60;

    printf("%d segundos corresponde a %d dia(s), %d hora(s), %d minuto(s), %d segundo(s)\n", seg, dia, hrs, min, seg);

    return 0;
}