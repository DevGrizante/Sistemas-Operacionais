
#include <stdio.h>


void criar_matriz(int linha, int coluna, int matriz[linha][coluna]){
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            printf("digite o elemento [%i][%i]: ", i, j);
            scanf("%i",&matriz[i][j]);
            
        }
    }
}
void ler_matriz(int linhas, int colunas, int matriz[linhas][colunas]){
    for(int i=0;i<linhas;i++){
        printf("\n");
        for(int j=0;j<colunas;j++){
            printf("%i ",matriz[i][j]);
        }
    }
}
void multiplicar_linha(int linhas, int colunas, int matriz[linhas][colunas], int numero, int linha_multiplicar){
    if (linha_multiplicar < 0 || linha_multiplicar >= linhas) {
        printf("Linha inválida.\n");
        return;
    }
    for(int j=0; j<colunas;j++){
        matriz[linha_multiplicar][j]=matriz[linha_multiplicar][j] * numero;
    }
}


void multiplicar_coluna(int linhas, int colunas, int matriz[linhas][colunas], int numero, int coluna_multiplicar){
    if (coluna_multiplicar < 0 || coluna_multiplicar >= colunas) {
        printf("Coluna inválida.\n");
        return;
    }
    for(int i=0; i<linhas;i++){
        matriz[i][coluna_multiplicar]=matriz[i][coluna_multiplicar] * numero;
    }
}
int main(){
    int opcao;
    int linhas, colunas, linha_multiplicar, coluna_multiplicar, numero;
    int matriz[100][100];
    do {
    printf("\nEscolha uma opção: \n1.Declarar Matriz.\n2.Ler Matriz.\n3.Multiplicar linha da matriz.\n4.Multiplicar coluna da matriz\n5.Encerrar.\n");
    printf("Opção: ");
    scanf("%i",&opcao);
    switch(opcao){
        case 1:
            printf("Digite o número de linhas da matriz: ");
            scanf("%i",&linhas);
            printf("Digite o número de colunas da matriz: ");
            scanf("%i",&colunas);
            
            criar_matriz(linhas,colunas, matriz);
            break;
            
        case 2:
            printf("\nMatriz:");
            ler_matriz(linhas, colunas, matriz);
            printf("\n");
            break;
        case 3:
            printf("\nDigite a linha da matriz a ser multiplicada: ");
            scanf("%i",&linha_multiplicar);
            printf("Digite o valor a multiplicar a linha: ");
            scanf("%i",&numero);
            multiplicar_linha(linhas, colunas, matriz, numero, linha_multiplicar);
            break;
        case 4:
            printf("\nDigite a coluna da matriz a ser multiplicada: ");
            scanf("%i",&coluna_multiplicar);
            printf("Digite o valor a multiplicar a coluna: ");
            scanf("%i",&numero);
            multiplicar_coluna(linhas, colunas, matriz, numero, coluna_multiplicar);
            break;
        case 5:
            printf("Saindo...");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }
    }while(opcao != 5);
    return 0;  
    }
    
