#include <stdio.h>

int compacta(char orig[], int N, char dst[]) {
    int j = 0;
    if (N > 0) {
        dst[j++] = orig[0];
        for (int i = 1; i < N; i++) {
            if (orig[i] != orig[i - 1]) {
                dst[j++] = orig[i];
            }
        }
    }
    return j;
}

int main() {
    char orig[100], dst[100];
    int i = 0;

    char c;
    while ((c = getchar()) != '.') {
        orig[i++] = c;
    }
    orig[i] = '\0'; // Adiciona o terminador de string

    int tamanho_dst = compacta(orig, i, dst);
    dst[tamanho_dst] = '\0'; // Adiciona o terminador de string

    printf("%s\n", dst);

    return 0;
}