#include <stdio.h>

 float peso(float altura, char sexo){
    float p;
    
    if(sexo == 'M' || sexo == 'm'){
        p = (72.7*altura) - 58;
        return p;
    }
    else{
        p = (62.1*altura) - 44.7;
        return p;
    }
}
int main(){
    float alt; char s;

    printf("Insira a altura da pessoa:");
    scanf("%f", &alt);
    printf("insira o sexo da pessoa (M/F):");
    scanf(" %c", &s);

    printf("O peso ideal seria de %.2f quilos.", peso(alt,s));
}