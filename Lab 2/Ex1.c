#include <stdio.h>
#include <stdlib.h>

int main() {
    // Passo 1: Abra o arquivo em modo leitura
    FILE *file = fopen("lab2_ex1.txt", "r");
    
    // Passo 2: Verifique se o arquivo foi aberto com sucesso
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1; // Encerra o programa com código de erro
    }

    // Passo 3: Declare o buffer e leia o conteúdo do arquivo para o buffer
    char buffer[128];
    size_t bytesRead = fread(buffer, 1, sizeof(buffer) - 1, file);

    // Adicione um caractere nulo ('\0') ao final do buffer após a leitura
    buffer[bytesRead] = '\0';

    // Passo 4: Exiba o conteúdo lido na tela
    printf("Conteúdo do arquivo:\n%s", buffer);

    // Passo 5: Feche o arquivo após a leitura
    fclose(file);

    return 0; // Encerra o programa com sucesso
}
