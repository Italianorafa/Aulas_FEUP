#include <stdio.h>

void ordena(int *A, int *B, int *C){
    int aux = 0;
    for (int i=0; i<3; i++){
        if (*A > *B){
            aux = *A;
            *A = *B;
            *B = aux;
        }
        else if(*B > *C){
            aux = *B;
            *B = *C;
            *C = aux;
        }
        else if(*A>*C){
            aux = *A;
            *A = *C;
            *C = aux;
        }
        else{
            continue;
        }
}
}

int main(){
    int a, b, c;

    printf("Insira três valores: ");
    scanf("%d %d %d", &a, &b, &c);
    ordena(&a,&b,&c);
    printf("Os valores a,b,c ordenados por ordem crescente: %d %d %d\n", a,b,c);

    return 0;
}