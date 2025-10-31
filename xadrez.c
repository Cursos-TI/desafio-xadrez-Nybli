#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    const int torre = 5;  // Movimento direita
    const int bispo = 5;  // Movimento em diagonal = cima / direita
    const int rainha = 8; // Movimento esquerda
    const int cavalo = 1; // Movimento em 'L' = baixo, baixo / esquerda

    int i;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Mover o Bispo na diagonal 5 casas para cima e para a direita usando o while
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= bispo)
    {
        printf("Cima, Direita\n");
        i++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Mover a Torre 5 casas para a direita usando o for
    printf("\nMovimento da Torre:\n");
    for (i = 1; i <= torre; i++)
    {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Mover a Rainha 8 casas para a esquerda usando o do-while
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i <= rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Mover o Cavalo 2 casas para baixo e 1 casa a esquerda usando loop aninhado
    printf("\nMovimento do Cavalo:\n");
    int movimentoCavalo = cavalo;
    while (movimentoCavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n"); // Imprime "Baixo" duas vezes
        }
        printf("Esquerda\n"); // Imprime "Esquerda" uma vez
    }

    return 0;
}