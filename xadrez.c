#include <stdio.h>

// Desafio de Xadrez - MateCheck

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Mover a Torre 5 casas para a direita
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1); // Movimento horizontal com recursividade
    }
}

// Mover o Bispo na diagonal 5 casas para cima e para a direita
void moverBispo(int casas)
{
    if (casas > 0)
    {
        // Loop vertical (Cima)
        for (int i = 0; i < 1; i++) // iteração recursiva
        {
            printf("Cima ");
            // Loop horizontal (Direita)
            for (int j = 0; j < 1; j++)
            {
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1); // Movimento diagonal com recursividade
    }
}

// Mover a Rainha 8 casas para a esquerda
void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1); // Movimento horizontal com recursividade
    }
}

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

void moverCavalo()
{
    printf("Movimento do Cavalo:\n");

    // Mover o Cavalo 2 casas para cima e 1 para a direita
    int cavaloVertical = 0;
    int cavaloHorizontal = 0;

    // Loop externo: move o cavalo 2 casas para cima
    for (cavaloVertical = 1; cavaloVertical <= 2; cavaloVertical++)
    {
        printf("Cima\n");

        if (cavaloVertical < 2)
        {
            continue; // volta para o início do loop
        }

        // Loop interno: move o Cavalo 1 casa para a direita
        while (cavaloHorizontal < 1)
        {
            printf("Direita\n");
            cavaloHorizontal++;

            // Após mover 1 casa para a direita, sai do loop
            break;
        }
    }
}

int main()
{
    const int torre = 5;  // Movimento direita
    const int bispo = 5;  // Movimento em diagonal = cima / direita
    const int rainha = 8; // Movimento esquerda

    printf("\nMovimento da Torre:\n");
    moverTorre(torre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(bispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(rainha);

    printf("\n");
    moverCavalo();

    return 0;
}