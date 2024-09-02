#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Passo 1: Abra o arquivo de origem em modo leitura
    int origem_fd = open("lab2_ex3_origem.txt", O_RDONLY);
    if (origem_fd == -1) {
        perror("Erro ao abrir o arquivo de origem");
        return 1;
    }

    // Passo 2: Abra ou crie o arquivo de destino em modo escrita
    int destino_fd = open("lab2_ex3_destino.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (destino_fd == -1) {
        perror("Erro ao abrir ou criar o arquivo de destino");
        close(origem_fd); // Feche o arquivo de origem antes de sair
        return 1;
    }

    char buffer[128]; // Buffer de 128 bytes para leitura/escrita
    ssize_t bytesRead; // Quantidade de bytes lidos
    ssize_t bytesWritten; // Quantidade de bytes escritos

    // Passo 3: Ler do arquivo de origem e escrever no arquivo de destino
    while ((bytesRead = read(origem_fd, buffer, sizeof(buffer))) > 0) {
        bytesWritten = write(destino_fd, buffer, bytesRead);
        if (bytesWritten == -1) {
            perror("Erro ao escrever no arquivo de destino");
            close(origem_fd);
            close(destino_fd);
            return 1;
        }
    }

    if (bytesRead == -1) {
        perror("Erro ao ler do arquivo de origem");
    }

    // Passo 4: Feche ambos os arquivos
    close(origem_fd);
    close(destino_fd);

    return 0;
}
