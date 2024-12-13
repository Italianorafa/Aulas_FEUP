#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int max_value, max_terms, choice;

    printf("Pretende usar numero maximo de valores (1) ou valor maximo (2)? ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Introduza um numero maximo de valores: ");
        scanf("%d", &max_terms);

        for (int i = 0; i < max_terms; i++) {
            printf("%d ", fibonacci(i));
        }
    } else if (choice == 2) {
        printf("Introduza o valor maximo: ");
        scanf("%d", &max_value);

        int n = 0;
        while (fibonacci(n) <= max_value) {
            printf("%d ", fibonacci(n));
            n++;
        }
    }

    printf("\n");
    return 0;
}