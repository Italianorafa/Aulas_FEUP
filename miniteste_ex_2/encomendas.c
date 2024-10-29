#include <stdio.h>

int main(){
    int numero, tempo_med, tempo = 0, cont = 0; char zona; float soma_b, soma_u, resto, tempo_seg;

    while(scanf("%d	%c", &numero, &zona) != EOF){
        if (zona == 'A' || zona == 'B' || zona == 'E'){
            printf("Encomenda %d - blovo\n", numero);
            switch (zona) {
                case 'A':
                soma_b += 3.5;
                tempo += 21;
                break;
                case 'B':
                soma_b += 4.25;
                tempo += 24;
                break;
                default:
                soma_b += 4;
                tempo += 24;
                break;
            } 
        }
        else if (zona == 'C' || zona == 'D'){
            printf("Encomenda %d - uverits\n", numero);
            if (zona == 'C'){
                soma_u += 3.25;
                tempo += 15;
            }
            else{
                soma_u += 3.5;
                tempo += 23;
            }
        }
        else{
            printf("A zona inserida está inválida.\n");
        }
        cont++;
    }
    tempo_med = tempo/cont;
    resto = (tempo_med%cont) * 0.01;
    tempo_seg = resto * 60;
    printf("Custo total na uverits: %.2f euros\nSoma total na blovo: %.2f euros\nTempo médio das entregas: %d minutos %.f segundos\n", soma_u, soma_b, tempo_med, tempo_seg);

}