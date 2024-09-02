#include <stdio.h>
#include <stdlib.h>

int main() {
    // Passo 1: Abra o arquivo em modo leitura
    FILE *file = fopen("lab2_ex2.txt", "r");
    
    // Verifique se o arquivo foi aberto com sucesso
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    char buffer[128]; // Buffer de 128 bytes para leitura do arquivo
    int line_count = 0; // Contador de linhas

    // Passo 2: Ler o arquivo em partes e contar as quebras de linha (\n)
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Percorre o buffer para contar '\n'
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (buffer[i] == '\n') {
                line_count++;
            }
        }
    }

    // Passo 3: Exiba o número total de linhas na tela
    printf("Número total de linhas no arquivo: %d\n", line_count);

    // Feche o arquivo
    fclose(file);

    return 0;
}
