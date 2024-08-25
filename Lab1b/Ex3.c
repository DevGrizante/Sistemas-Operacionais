#include <stdio.h>

int main() {
    int limite, espacos;

    do {
        printf("Digite um numero (impar): ");
        scanf("%d", &limite);
    } while (limite % 2 == 0); 

    int meio = limite/2 + 1;
    for (int i = 1; i <= meio; i++) {
        for (espacos = 1; espacos < i; espacos++) {
            printf("  ");
        }
        for (int j = i; j <= limite - i + 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
