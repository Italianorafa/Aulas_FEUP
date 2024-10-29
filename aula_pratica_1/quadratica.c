#include <stdio.h>
#include <math.h>

int main(){

    int a=1, b=-5, c=6, x1, x2, delta;

    delta = ((b*b) - (4*a*c));
    x1 = ((-b) + sqrt(delta))/(2*a);
    x2 = ((-b) - sqrt(delta))/(2*a);

    printf("O primeiro x é %d e o segundo x é %d\n", x1, x2);

    return 0;
}