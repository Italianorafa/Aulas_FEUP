#include <stdio.h>

int main(){

    int b1,b2,b3,b4,dec,oct,hex;

    printf("Insira o 1º dígito do nº binário: ");
    scanf("%d", &b1);
    
    printf("Insira o 2º dígito do nº binário: ");
    scanf("%d", &b2);

    printf("Insira o 3º dígito do nº binário: ");
    scanf("%d", &b3);

    printf("Insira o 4º dígito do nº binário: ");
    scanf("%d", &b4);

    dec = (b1 * 8) + (b2 * 4) + (b3 * 2) + (b4 * 1);
    printf("O valor na base decimal: %d\nO valor na base octal: %o\n O valor na base hexadecimal: %x\n", dec, dec, dec);
    
    return 0;
}