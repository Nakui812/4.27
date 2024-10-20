#include <stdio.h>

int main() {
    int numero, i;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    if (numero > 1) {
        printf("Fattori primi di %d: ", numero);
        for (i = 2; i <= numero; i++) {
            while (numero % i == 0) {
                printf("%d ", i);
                i++;
            }
        }
        printf("\n");
    } else {
        printf("Inserisci un numero maggiore di 1.\n");
    }

    return 0;
}
