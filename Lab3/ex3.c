#include <stdio.h>
#include <unistd.h> // para fork(), sleep() e execlp()
#include <sys/types.h> // para pid_t
#include <sys/wait.h> // para wait()

int ex3() {
    pid_t pid = fork(); // Cria um processo filho

    if (pid < 0) {
        printf("Falha na criação do processo filho.\n");
        return 1;
    } else if (pid == 0) {
        printf("Processo filho: PID = %d\n", getpid());
        execlp("ls", "ls", "-l", NULL); 
        printf("Erro ao executar o comando ls.\n");
    } else {
        wait(NULL);
        printf("Processo filho terminou. Processo pai continua.\n");
    }
    return 0;
}
