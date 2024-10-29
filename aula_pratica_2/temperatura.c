#include <stdio.h>

int main(){

    float kelvin, fahrenheit, celsius;

    printf("Insira o valor em graus celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    fahrenheit = ((celsius * 9)/5) + 32;

    printf("%.2f C = %.2f K\n%.2f C = %.2f F\n",celsius, kelvin, celsius, fahrenheit);

    return 0;
}