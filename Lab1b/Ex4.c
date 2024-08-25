#include <stdio.h>
#include <string.h>

int main(){
    char nome1[100],nome2[100];
    printf("Insira o 1 nome: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Insira o 2 nome: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    if (strcmp(nome1, nome2) > 0) {
        printf("%s\n%s\n", nome2, nome1);
    } else {
        printf("%s\n%s\n", nome1, nome2);
    }
}