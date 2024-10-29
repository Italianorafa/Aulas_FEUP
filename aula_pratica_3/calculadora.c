#include <stdio.h>

int main(){
    char sinal, operador;
    float op1, op2, result;

    printf("Escolha a operação: ");
    scanf(" %c", &sinal);
    switch (sinal) {
        case '-':
            printf("Operador (u)nario ou (b)inario? ");
            scanf(" %c", &operador);
            if (operador == 'u'){
                printf("Introduza o operando: ");
                scanf("%f", &op1);
                result = (-1) * (op1);
                printf("O resultado é igual a %.2f\n", result);
                break;
            }
            else if(operador == 'b'){
                printf("Introduza um operando: ");
                scanf("%f", &op1);
                printf("Introduza outro operando: ");
                scanf("%f", &op2);
                result = op1 - op2;
                printf("O resultado é igual a %.2f\n", result);
                break;
                }
        case '+' :
            printf("Introduza um operando: ");
            scanf("%f", &op1);
            printf("Introduza outro operando: ");
            scanf("%f", &op2);
            result = op1 + op2;
            printf("O resultado é igual a %.2f\n", result);
            break;
        case '*':
            printf("Introduza um operando: ");
            scanf("%f", &op1);
            printf("Introduza outro operando: ");
            scanf("%f", &op2);
            result = op1 * op2;
            printf("O resultado é igual a %.2f\n", result);
            break;
        case '/':
            printf("Introduza um operando: ");
            scanf("%f", &op1);
            printf("Introduza outro operando: ");
            scanf("%f", &op2);
            if (op2 == 0){
                printf("Impossível eftuar a divisão por 0.\n");
                break;
            }
            else{
                result = op1 / op2;
                printf("O resultado é igual a %.2f\n", result);
                break;
            }
        case '%':
            printf("Introduza um operando: ");
            scanf("%f", &op1);
            printf("Introduza outro operando: ");
            scanf("%f", &op2);
            if (op1 < 0  || op2 < 0){
                op1 = -1 * op1;
                result = (int)op1 % (int)op2;
                printf("O resultado é igual a %.2f\n", result);
                break;
            }
            else if(op2 == 0){
                printf("Impossível eftuar a divisão por 0.\n");
                break;
            }
            else{
                result = (int)op1 % (int)op2;
                printf("O resultado é igual a %.2f\n", result);
            }
            break;
        defaut:
            printf("operação inválida.\n");
            return 1;
    } 
    return 0; 
}