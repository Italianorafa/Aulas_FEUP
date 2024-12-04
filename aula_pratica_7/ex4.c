#include <stdio.h>
#include <ctype.h>
//tolower->minusculas / toupper-> maiusculas
/** 
 *  @brief  Determinar o total de vogais de um vetor de caracteres.
 *  @param  vec Vetor de caracteres.
 *  @param  n Número de elementos do vetor.
 *  @return Número total de vogais do vetor.
 */
int totalVogais(char vec[], int n)
{
    int result = 0;
    if (n<0){
        return -1;
    }
    else if (n==0){
        return 0;
    }
    else if (vec[n-1] == 'a' ||vec[n-1] == 'A' ||vec[n-1] == 'e' ||vec[n-1] == 'E' ||vec[n-1] == 'i' ||vec[n-1] == 'I' ||vec[n-1] == 'o' ||vec[n-1] == 'O' ||vec[n-1] == 'u' ||vec[n-1] == 'U'){
        result++;
        return result + totalVogais(vec, n-1);
    }
    else{
        return totalVogais(vec, n-1);
    }
}

void printVector(char vec[], int n)
{
    printf("Vetor: { ");
    for (int i = 0; i < n; i++) printf("%c ", vec[i]);
    printf("}\n");
}
 
int main()
{ 
    char vec_chars[] = {'a', 'd', ' ', '3', 'B'}; 
    printVector(vec_chars, 5);
    printf("Total vogais: %d\n", totalVogais(vec_chars, 5)); 
    return 0; 
}