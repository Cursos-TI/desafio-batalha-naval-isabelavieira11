#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios - com algumas incrementações 

    int tabuleiro[10][10] = {0}; // Tabuleiro 10x10 inicializado com 0
    int linhabase = 1; // Linha base para posicionar os navios

    printf("Tabuleiro de Batalha Naval - Nível Novato\n");
    printf("Tabuleiro inicial:\n");

    // Exibir o tabuleiro inicial
    printf("    A B C D E F G H I J \n");
    printf("    ___________________\n");
    for (int i = 0; i < 10; i++) {
        if (linhabase < 10) {
            printf(" %d |", linhabase);
        } else {
            printf("%d |", linhabase);
        }
        linhabase++;
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Posicionamento do navio 1 (horizontal)
    printf("Indique a posição do navio 1 (horizontal):\n");
    printf("Linha (1-10): ");
    int linhaNavio1;
    scanf("%d", &linhaNavio1);

    printf("Coluna (A-J): ");
    char colunaNavio1;
    scanf(" %c", &colunaNavio1);

    int colunaIndex1 = colunaNavio1 - 'A'; // Converter letra para índice

    // Verificar se a posição é válida
    if (linhaNavio1 < 1 || linhaNavio1 > 10 || colunaIndex1 < 0 || colunaIndex1 > 9) {
        printf("Posição inválida!\n");
        return 1;
    }

    // Posicionar o navio 1
    for (int i = colunaIndex1; i < colunaIndex1 + 3; i++) {
        if (i < 10) {
            tabuleiro[linhaNavio1 - 1][i] = 3; // Marcar a posição do navio
        }
    }
    // Exibir o tabuleiro após posicionar o navio 1
    printf("Tabuleiro após posicionar o navio 1:\n");
    printf("    A B C D E F G H I J \n");
    printf("    ___________________\n");
    linhabase = 1; // Reiniciar a linha base para exibição
    for (int i = 0; i < 10; i++) {
        if (linhabase < 10) {
            printf(" %d |", linhabase);
        } else {
            printf("%d |", linhabase);
        }
        linhabase++;
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Posicionamento do navio 2 (vertical)
    printf("Indique a posição do navio 2 (vertical):\n");
    printf("Linha (1-10): ");
    int linhaNavio2;
    scanf("%d", &linhaNavio2);

    printf("Coluna (A-J): ");
    char colunaNavio2;
    scanf(" %c", &colunaNavio2);

    int colunaIndex2 = colunaNavio2 - 'A'; // Converter letra para índice

    // Verificar se a posição é válida
    if (linhaNavio2 < 1 || linhaNavio2 > 10 || colunaIndex2 < 0 || colunaIndex2 > 9) {
        printf("Posição inválida!\n");
        return 1;
    }

    // Posicionar o navio 2
    for (int i = linhaNavio2 - 1; i < linhaNavio2 + 2; i++) {
        if (i < 10) {
            if (tabuleiro[i][colunaIndex2] != 3) { // Verificar se a posição já não está ocupada
                tabuleiro[i][colunaIndex2] = 3; // Marcar a posição do navio
            } else {
                printf("Posição já ocupada por outro navio!\n");
                return 1;
            }   
        }
    }
    // Exibir o tabuleiro após posicionar o navio 2
    printf("Tabuleiro após posicionar o navio 2:\n");
    printf("    A B C D E F G H I J \n");
    printf("    ___________________\n");
    linhabase = 1; // Reiniciar a linha base para exibição
    for (int i = 0; i < 10; i++) {
        if (linhabase < 10) {
            printf(" %d |", linhabase);
        } else {
            printf("%d |", linhabase);
        }
        linhabase++;
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    // Fim do jogo
    printf("Fim do jogo!\n");
    printf("Navios posicionados com sucesso!\n");
    return 0;
}           
