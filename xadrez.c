#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    const int torre = 5;
    const int bispo = 5;
    const int rainha = 8;

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

    return 0;
}