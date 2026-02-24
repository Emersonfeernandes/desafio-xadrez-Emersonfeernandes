#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função para Movimentação da Peça "Cavalo" usando Loops com múltiplas variáveis
void funcCavalo(char direcao1, char direcao2){
    int h, v;

    switch (direcao1)
    {
        case 'F':
        case 'f':
            if (direcao2 == 'D' || direcao2 == 'd'){
                for (v = 1, h = 3; v <= h; v++, h--){
                    printf("Cavalo: %d casa para cima \n", v);
                }
                printf("Cavalo: %d casa para direita \n", h);
            } else if (direcao2 == 'E' || direcao2 == 'e'){
                for (v = 1, h = 3; v <= h; v++, h--){
                    printf("Cavalo: %d casa para cima \n", v);
                }
                printf("Cavalo: %d casa para esquerda \n", h);
            }
            break;
        case 'D':
        case 'd':
            for (h = 1, v = 3; h <= v; h++, v--){
                printf("Cavalo: %d casa para direita \n", h);
            }
            printf("Cavalo: %d casa para cima \n", v);
            
            break;
        case 'E':
        case 'e':
            for (h = 1, v = 3; h <= v; h++, v--){
                printf("Cavalo: %d casa para esquerda \n", h);
            }
            printf("Cavalo: %d casa para cima \n", v);
            break;
        default:
            printf("\n### ENTRADA INVÁLIDA ###\n");
            break;
    }
}

// Função para Movimentação da Peça "Rainha" usando do-while
void funcRecursivoRainha(int i, int limite, char direcao){
    if (i > limite){
        return;
    }

    switch (direcao)
    {
        case 'D':
        case 'd':
            printf("\nRainha: %d casa para direita ", i);
            break;
        case 'E':
        case 'e':
            printf("\nRainha: %d casa para esquerda ", i);
            break;
        case 'F':
        case 'f':
            printf("\nRainha: %d casa para frente ", i);
            break;

        case 'T':
        case 't':
            printf("\nRainha: %d casa para trás ", i);
            break;

        case 'B':
        case 'b':
            printf("\nRainha: %d casa na diagonal ", i);
            break;
        
        default:
            printf("\n### ENTRADA INVÁLIDA ###\n");
            break;
    }

    funcRecursivoRainha(i + 1, limite, direcao);
}

// Função para Movimentação da Peça "Bispo" usando recursividade
void funcRecursivoBispo(int i, int limite, char direcao){
    if (i > limite){
        return;
    }
    switch (direcao)
    {
        case 'D':
        case 'd':
            printf("\nBispo: %d casa na diagonal direita", i);
            break;
        
        case 'E':
        case 'e':
            printf("\nBispo: %d casa na diagonal esquerda", i);
            break;

        case 'B':
        case 'b':
            printf("\nBispo: %d casa na diagonal baixo", i);
            break;
        default:
            printf("\n### ENTRADA INVÁLIDA ###\n");
            break;
    }
        
    funcRecursivoBispo(i + 1, limite, direcao);
}

// Função para Movimentação da Peça "Torre" usando recursividade
void funcRecursivoTorre(int i, int limite, char direcao){
    if (i > limite){
        return;
    }

    switch (direcao)
    {
        case 'D':
        case 'd':
            printf("\nTorre: %d casa para direita ", i);
            break;
        case 'E':
        case 'e':
            printf("\nTorre: %d casa para esquerda ", i);
            break;
        case 'F':
        case 'f':
            printf("\nTorre: %d casa para frente ", i);
            break;

        case 'T':
        case 't':
            printf("\nTorre: %d casa para trás ", i);
            break;
        
        default:
            printf("\n### ENTRADA INVÁLIDA ###\n");
            break;
    }

    funcRecursivoTorre(i + 1, limite, direcao);
}

int main() {
    // Declaração de variáveis.
    int i = 1;
    int casaBispo;
    int casaTorre;
    int casaRainha;
    char peca, direcao;
    
    // Menu interativo
    do {
        printf("\n");
        printf("\n===============================================");
        printf("\n");
        printf("\n### Escolha as peças ###\n");
        printf("\nR - Rainha\nB - Bispo\nT - Torre\nC - Cavalo\nS - Sair\n");
        scanf(" %c", &peca);

        switch (peca)
        {
            case 'r':
            case 'R':
                printf("\nDigite quantas casas\nD para direita\n");
                printf("E para esquerda\nF para frente\nT para trás\nB - na diagonal\n");
                scanf("%d %c", &casaRainha, &direcao);
                funcRecursivoRainha(i, casaRainha, direcao);
                break;

            case 't':
            case 'T':
                printf("\nDigite quantas casas\nD para direita\n");
                printf("E para esquerda\nF para frente\nT para trás\n");
                scanf("%d %c", &casaTorre, &direcao);
                funcRecursivoTorre(i, casaTorre, direcao);
                break;

            case 'b':
            case 'B':
                printf("\nDigite quantas casas\nD para direita\n");
                printf("E para esquerda\nF para frente\nB para trás\n");
                scanf("%d %c", &casaBispo, &direcao);
                funcRecursivoBispo(i, casaBispo, direcao);
                break;
            case 'c':
            case 'C':
                printf("\nD para direita\nE para esquerda\nF para frente\n");
                scanf(" %c %c", &peca, &direcao);
                funcCavalo(peca, direcao);
                break;
            default:
                (peca != 's' && peca != 'S') ? printf("\n### ENTRADA INVÁLIDA ###\n") : printf("\n");
                break;
        }


    } while (peca != 's' && peca != 'S');

    return 0;
}
