#include <stdio.h>

int bissexto(int ano){
    if (ano%4==0 && ano%100!=0 || ano%400 ==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int ano, qtdia, mes;

    printf("Insira um mês: ");
    scanf("%d", &mes);
    printf("Insira um ano: ");
    scanf("%d", &ano);

    if (mes == 2){
        if (bissexto(ano) == 1){
        qtdia = 29;
        printf("O mês %d do ano %d tem %d dias.\n", mes, ano, qtdia);
        }
        else{
            qtdia = 28;
            printf("O mês %d do ano %d tem %d dias.\n", mes, ano, qtdia);
        }
    }
    else{
        if (mes<=7){
            if (mes%2==0){
                qtdia = 30;
                printf("O mês %d do ano %d tem %d dias\n.", mes, ano, qtdia);
            }
            else{
                qtdia = 31;
                printf("O mês %d do ano %d tem %d dias.\n", mes, ano, qtdia);
            }
        }
        else{
            if (mes%2==0){
                qtdia = 31;
                printf("O mês %d do ano %d tem %d dias.\n", mes, ano, qtdia);
            }
            else{
                qtdia = 30;
                printf("O mês %d do ano %d tem %d dias.\n", mes, ano, qtdia);
            } 
        }
    }
    return 0;
}