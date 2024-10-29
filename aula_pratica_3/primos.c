#include <stdio.h>
#include <math.h>
int main(){
   int quantidade, i, primo = 2, cont = 0;

    printf("Insira a quantidade de números primos que pretende: ");
    scanf("%d", &quantidade);
    printf("Os primeiros %d números primos são:\n", quantidade);
    while (cont < quantidade){
        for(i = 2; i <= sqrt(primo); i++) { // dividir o numero de dois ate sua raiz
            if (primo%i == 0){ //a divisao nao pode ser exata
                break;
            }
        }
        if (i > sqrt(primo)){
            printf("%d\n", primo);
            cont++;
        }
        primo++;
    }
    return 0;
}