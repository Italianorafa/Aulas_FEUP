#include <stdio.h>
#define tonelada 10*10*10*10*10*10

int main(){

    int popP, popC, ano=2000, anopass;
    float CO2P, CO2C, capitaP, capitaC;

    printf("Emissões de CO2 per capita:\nANO\tPT\tCN\n");
    while(scanf("%d %f %d %f", &popP, &CO2P, &popC, &CO2C) != EOF){
        capitaP = (CO2P*tonelada)/popP;
        capitaC = (CO2C*tonelada)/popC;
        printf("%d\t%.2f\t%.2f\n", ano, capitaP, capitaC);
        ano++;
        if (capitaP>capitaC){
            anopass = ano;
        }
    }
    printf("Ano em que a China ultrapassou Portugal: %d\n", anopass);
    return 0;
}