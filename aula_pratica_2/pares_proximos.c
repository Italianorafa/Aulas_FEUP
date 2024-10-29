#include <stdio.h>

int main(){

    float num;
    int par1, par2, num2;

    printf("Insira um número: ");
    scanf("%f", &num);
    num2 = (int) num;

    if (num2 % 2 == 0){
        par1 = num2 - 2;
        par2 = num2 + 2;
        printf("%d %d\n", par1, par2);
    }
    else{
        par1 = num2 - 1;
        par2 = num2 + 1;
        printf("%d %d\n", par1, par2);
    }

    return 0;
}