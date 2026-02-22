#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void tabuleiro(int num, char caractere){
    int col = 1;
    int row = 1;
    char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int tamanho = sizeof(letras) / sizeof(letras[0]);

    printf("\n=========================================================================\n");
    for (int i = 0; i < tamanho; i++) {
        if (col == num && letras[i] == caractere)
        {
            printf("#   %d   ", col);
        } else {        
            printf("#   %d%c   ", col, letras[i]);
        }
        if (i == 7 && row < 8)
        {
            col++;
            row++;
            i -=8;
            printf("#\n");
        }
        
    }
    printf("\n=========================================================================\n");
}

void funcBispo(int i, int casaBispo){
    do
    {
        printf("\nBispo: %d casa na diagonal ", i);
        i++;
    } while (i <= casaBispo);
}

void funcRainha(int i, int casaRainha){
    do
    {
        printf("\nRainha: %d casa para esquerda ", i);
        i++;
    } while (i <= casaRainha);
}

void funcTorre(int i, int casaTorre){
    do
    {
        printf("\nTorre: %d casa para frente ", i);
        i++;
    } while (i <= casaTorre);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casaBispo = 5;
    int casaTorre = 5;
    int casaRainha = 8;
    int i = 1;
    char letra;

    //scanf("%d %c", &i, &letra);
    //tabuleiro(i, letra);

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    funcBispo(i, casaBispo);
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    funcTorre(i, casaTorre);
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    funcRainha(i, casaRainha);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
