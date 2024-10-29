#include <stdio.h>
#define tonelada 10*10*10*10*10*10

int main(){
    int ano, anomax,anoredu;
    float qttotal, qtagro, totalCO2, agroCO2, percentagro, auxmax = 0, auxredu = 1000000000;

    printf("Contribuição da agricultura para as emissões de N2O:\n");
    while(scanf("%d %f %f", &ano, &qttotal, &qtagro) != EOF){
        totalCO2 = qttotal*tonelada*265;
        agroCO2 = qtagro * tonelada *265;
        percentagro = (agroCO2/totalCO2)*100;
        printf("%d:\t%.1f%%\n", ano, percentagro);
        if(percentagro>auxmax){
            anomax = ano;
            auxmax = percentagro;
        }
        if(totalCO2<auxredu){
            anoredu = ano;
            auxredu = totalCO2;
        }
    }
    printf("Ano em que a agricultura mais contribuiu para as emissões de N2O per capita: %d\nAno em que as emissões de N2O per capita foram mais reduzidas: %d\n", anomax, anoredu);

    return 0;
}