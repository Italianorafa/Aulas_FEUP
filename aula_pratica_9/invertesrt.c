#include <stdio.h>
#include <string.h>
#define M_Length 50

void inverte(char *strOriginal, char *strInvertida){
    int j = 0;
    for (int i=strlen(strOriginal)-1; i>=0; i--){
        strInvertida[j] = strOriginal[i];
        j++;
    }
}

int main(){
    char original[M_Length], invertida[M_Length];

    fgets(original, M_Length, stdin);
    original[strlen(original)-1] = '\0';
    inverte(original, invertida);
    printf("%s\n", invertida);
}