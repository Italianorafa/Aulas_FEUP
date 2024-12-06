#include <stdio.h>
#include <math.h>

int converte_codigo_cores(int cor, int pos, float *ret){
    if (pos<1 || pos>3){
        return -1;
    }
    else if (cor<0 || cor>9){
        return -1;
    }
    else {
        if (pos == 1){
            *ret = *ret + (cor*10);
        }
        else if (pos == 2){
            *ret = *ret + cor;
        }
        else{
            *ret = *ret * (pow(10,cor));
        }
        return 1;
    }
}

int main(){
    int cor, i;
    float resistor = 0.0;
    printf("Cores:\n 0 - Black \n 1 - Brown \n 2 - Red \n 3 - Orange \n 4 - Yellow \n 5 - Green \n 6 - Blue \n 7 - Violet \n 8 - Grey \n 9 - White\n\n");
    for(i = 1; i < 4; i++){
        do{
            printf("Introduza a cor da banda %d: ", i);
            scanf("%d", &cor);
        }while((cor < -1) || (cor > 12));
        
        converte_codigo_cores(cor, i, &resistor);

    }
    printf("Valor da resistencia: %.2f Ohms\n", resistor);

}