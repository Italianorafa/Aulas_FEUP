#include <stdio.h>

int main(){

    int num1, num2;

    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);

    if (num1%num2 == 0){
        printf("%d é múltiplo de %d\n", num1, num2);
    }
    else{
        printf("%d não é múltiplo de %d\n", num1, num2);
    }

    return 0;
    
}