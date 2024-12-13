#include <stdio.h>

int hoursMin(int totalmin, int *horas, int *min){
    while(totalmin/60 != 0){
        *horas = *horas + 1;
        totalmin -= 60;
    }
    *min = totalmin;
    if (*horas >= 24) return 1;
    else return 0;
}

int main(){
    int totalmin, horas = 0, min = 0;

    printf("Insira o tempo total em minutos: ");
    scanf("%d", &totalmin);
    if (hoursMin(totalmin, &horas, &min) == 1){
        printf("%d minutos correspondem a %dh:%dm e é superior a 1 dia\n", totalmin, horas, min);
    }
    else{
        printf("%d minutos correspondem a %dh:%dm e não é superior a 1 dia\n", totalmin, horas, min);
    }

    return 0;
}