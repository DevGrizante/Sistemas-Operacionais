#include <stdio.h>
#include <limits.h> // Para usar INT_MAX

int main() {
    int n;

    // Leitura do tamanho da matriz quadrada
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);

    // Declaração da matriz
    int matriz[n][n];

    // Leitura dos elementos da matriz
    for (int i = 0; i < n; i++) {
        printf("Digite os elementos da linha %d separados por espaço: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializa variáveis para encontrar o menor número e sua linha correspondente
    int menor_valor = INT_MAX;
    int linha_menor_valor = -1;

    // Percorre a matriz para encontrar o menor valor e sua linha
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] < menor_valor) {
                menor_valor = matriz[i][j];
                linha_menor_valor = i;
            }
        }
    }

    // Imprime o número da linha que contém o menor número
    printf("A linha que contém o menor número é: %d\n", linha_menor_valor + 1);

    return 0;
}
