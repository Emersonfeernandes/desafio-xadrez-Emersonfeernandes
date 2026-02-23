#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


void bispoRecursivo(int i, int limite){
    if (i > limite){
        return;
    }

    printf("\nBispo: %d casa na diagonal", i);
    bispoRecursivo(i + 1, limite);
}

void funcCavalo(char direcao1, char direcao2){
    int horizontal, vertical;

    switch (direcao1)
    {
    case 'F':
    case 'f':
        if (direcao2 == 'D' || direcao2 == 'd'){
            for (horizontal = 1; horizontal <= 1; horizontal++){
                for (vertical = 1; vertical <= 2; vertical++){
        
                    
                    if (horizontal == 0 && vertical == 0)
                        continue;

                        printf("Cavalo: %d vertical\n", vertical);        
                }
                printf("Cavalo: %d horizontal direita\n", horizontal);
            }
        } else if (direcao2 == 'E' || direcao2 == 'e'){
            for (horizontal = 1; horizontal <= 1; horizontal++){
                for (vertical = 1; vertical <= 2; vertical++){
        
                    
                    if (horizontal == 0 && vertical == 0)
                        continue;

                        printf("Cavalo: %d vertical\n", vertical);        
                }
                printf("Cavalo: %d horizontal esquerda\n", horizontal);
            }
        }
        break;
    case 'D':
    case 'd':
        if (direcao2 == 'F' || direcao2 == 'f')

        for (vertical = 1; vertical <= 1; vertical++){
            for (horizontal = 1; horizontal <= 2; horizontal++){
    
                
                if (horizontal == 0 && vertical == 0)
                    continue;

                    printf("Cavalo: %d horizontal direita \n", horizontal);        
            }
            printf("Cavalo: %d vertical\n", vertical);
        }
        break;
    case 'E':
    case 'e':
        if (direcao2 == 'F' || direcao2 == 'f')            
        
        for (vertical = 1; vertical <= 1; vertical++){
            for (horizontal = 1; horizontal <= 2; horizontal++){
    
                
                if (horizontal == 0 && vertical == 0)
                    continue;

                    printf("Cavalo: %d horizontal esquerda\n", horizontal);        
            }
            printf("Cavalo: %d vertical\n", vertical);
        }
        break;
    default:
        break;
    }
}

void funcBispo(int i, char direcao){
    int x = 1;

    do
    {
        switch (direcao)
        {
        case 'D':
        case 'd':
            printf("\nBispo: %d casa na diagonal direita", x);
            break;
        
        case 'E':
        case 'e':
            printf("\nBispo: %d casa na diagonal esquerda", x);
            break;
        default:
            break;
        }
        x++;
    } while (x <= i);
}

void funcRainha(int i, char direcao){
    int x = 1;

    do
    {
        switch (direcao)
        {
            case 'D':
            case 'd':
                printf("\nRainha: %d casa para direita ", x);
                break;
            case 'E':
            case 'e':
                printf("\nRainha: %d casa para esquerda ", x);
                break;
            case 'F':
            case 'f':
                printf("\nRainha: %d casa para frente ", x);
                break;

            case 'T':
            case 't':
                printf("\nRainha: %d casa para trás ", x);
                break;
            
            default:
                break;
        }
        x++;
    } while (x <= i);
}

void funcTorre(int i, char direcao){
    int x = 1;

    do
    {
        switch (direcao)
        {
            case 'D':
            case 'd':
                printf("\nTorre: %d casa para direita ", x);
                break;
            case 'E':
            case 'e':
                printf("\nTorre: %d casa para esquerda ", x);
                break;
            case 'F':
            case 'f':
                printf("\nTorre: %d casa para frente ", x);
                break;

            case 'T':
            case 't':
                printf("\nTorre: %d casa para trás ", x);
                break;
            
            default:
                break;
        }
        x++;
    } while (x <= i);
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casaBispo;
    int casaTorre;
    int casaRainha;
    char peca, direcao;
    
    do {
        printf("\nR - Rainha\nB - Bispo\nT - Torre\nC - Cavalo\nS - Sair\n");
        scanf(" %c", &peca);

        switch (peca)
        {
            case 'r':
            case 'R':
                printf("\nDigite quantas casas\nD para direita\nE para esquerda\nF para frente\nT para trás\n");
                scanf("%d %c", &casaRainha, &direcao);
                funcRainha(casaRainha, direcao);
                break;

            case 't':
            case 'T':
                printf("\nDigite quantas casas\nD para direita\nE para esquerda\nF para frente\nT para trás\n");
                scanf("%d %c", &casaTorre, &direcao);
                funcTorre(casaTorre, direcao);
                break;

            case 'b':
            case 'B':
                printf("\nDigite quantas e D para direita, E para esquerda, F para frente\n");
                scanf("%d %c", &casaBispo, &direcao);
                funcBispo(casaBispo, direcao);
                break;
            case 'c':
            case 'C':
                printf("\nDigite quantas e D para direita, E para esquerda, F para frente\n");
                scanf(" %c %c", &peca, &direcao);
                funcCavalo(peca, direcao);
                break;
        default:
            break;
        }


    } while (peca != 's' && peca != 'S');
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //funcBispo(i, casaBispo);
    bispoRecursivo(1, 5);
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //funcTorre(i, casaTorre);


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //funcRainha(i, casaRainha);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    //movimentoCavalo();
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
