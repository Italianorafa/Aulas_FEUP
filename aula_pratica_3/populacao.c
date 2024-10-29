#include <stdio.h>

int main(){
    float Pa, Pb, Ta, Tb, count;
    count = 0;
    scanf("%f %f", &Pa, &Ta);
    scanf("%f %f", &Pb, &Tb);

    if (Pa > Pb && Ta < Tb){
        while (Pa > Pb){
            Pa += Pa*(Ta/100);
            Pb += Pb*(Tb/100);
            count++;
        }
        printf("População de B ultrapassa a de A em %d anos\n", (int)count);
    }
    else{
        printf("Os valores inseridos não estão corretos.");
    }
     
    return 0;
}