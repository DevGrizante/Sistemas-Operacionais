#include <stdio.h>
#include <unistd.h> // para fork() e sleep()
#include <sys/types.h> // para pid_t

int ex1() {
    pid_t pid = fork();

    if (pid < 0) {
        printf("Falha na criação do processo filho.\n");
        return 1;
    } else if (pid == 0) {

        printf("Processo filho: PID = %d\n", getpid());
        for (int i = 0; i < 5; i++) {
            printf("Mensagem %d do processo filho.\n", i+1);
            sleep(1);
        }
    } else {
        printf("Processo pai: PID = %d, Processo filho: PID = %d\n", getpid(), pid);
    }
    return 0;
}