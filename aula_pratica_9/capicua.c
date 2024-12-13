#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LEN 50

void inverte(char *str, char *strinvertida){
    int j = 0;;
    for (int i = strlen(str); i>0; i--){
        strinvertida[j] = str[i];
        j++;
    }
}

int capicua(char *str){
    char strinvert[strlen(str)];
    inverte(str, strinvert);
    strinvert[strlen(strinvert)] = '\0';
    for (int i = 0; i<strlen(str); i++){
        if (str[i] != strinvert[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str[MAX_LEN];

    printf("Insira a palavra: ");
    fgets(str, MAX_LEN, stdin);
    str[strlen(str)] = '\0';
    if (capicua(str) == 1){
        printf("Essa palavra é capicua.\n");
    }
    else{
        printf("Essa palavra não é capicua.\n");
    }
}