#include <stdio.h>

// Desafio de Xadrez - MateCheck - Versão Avançada
// Programa que simula o movimento de peças de xadrez utilizando:
// - Funções recursivas para Torre, Bispo e Rainha
// - Loops complexos com múltiplas variáveis para o Cavalo
// - Loops aninhados para implementação alternativa do Bispo

// =====================================================
// FUNÇÕES RECURSIVAS PARA MOVIMENTAÇÃO DAS PEÇAS
// =====================================================

/**
 * Função recursiva para movimentação da Torre
 * @param casas_restantes: número de casas ainda a serem percorridas
 * A Torre move-se em linha reta (horizontal ou vertical)
 */
void mover_torre_recursivo(int casas_restantes)
{
    // Caso base: quando não há mais casas para mover
    if (casas_restantes <= 0)
    {
        return;
    }

    // Imprime o movimento atual
    printf("Direita\n");

    // Chamada recursiva para a próxima casa
    mover_torre_recursivo(casas_restantes - 1);
}

/**
 * Função recursiva para movimentação da Rainha
 * @param casas_restantes: número de casas ainda a serem percorridas
 * A Rainha move-se em todas as direções
 */
void mover_rainha_recursivo(int casas_restantes)
{
    // Caso base: quando não há mais casas para mover
    if (casas_restantes <= 0)
    {
        return;
    }

    // Imprime o movimento atual
    printf("Esquerda\n");

    // Chamada recursiva para a próxima casa
    mover_rainha_recursivo(casas_restantes - 1);
}

/**
 * Função recursiva para movimentação do Bispo
 * @param casas_restantes: número de casas ainda a serem percorridas
 * O Bispo move-se na diagonal
 */
void mover_bispo_recursivo(int casas_restantes)
{
    // Caso base: quando não há mais casas para mover
    if (casas_restantes <= 0)
    {
        return;
    }

    // Imprime o movimento atual (diagonal)
    printf("Cima, Direita\n");

    // Chamada recursiva para a próxima casa
    mover_bispo_recursivo(casas_restantes - 1);
}

/**
 * Implementação alternativa do Bispo usando loops aninhados
 * Loop externo controla o movimento vertical, loop interno o horizontal
 * @param casas_vertical: número de casas para mover verticalmente
 * @param casas_horizontal: número de casas para mover horizontalmente
 */
void mover_bispo_loops_aninhados(int casas_vertical, int casas_horizontal)
{
    int i, j;

    // Loop externo: controla o movimento vertical (cima)
    for (i = 1; i <= casas_vertical; i++)
    {

        // Loop interno: controla o movimento horizontal (direita) para cada movimento vertical
        for (j = 1; j <= casas_horizontal; j++)
        {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Declaração de constantes para o número de casas que cada peça irá se mover
    const int casas_torre = 5;  // Torre move 5 casas para a direita
    const int casas_bispo = 5;  // Bispo move 5 casas na diagonal (cima e direita)
    const int casas_rainha = 8; // Rainha move 8 casas para a esquerda

    // Constantes para o movimento do Cavalo em "L"
    const int cavalo_vertical = 2;   // Duas casas para cima
    const int cavalo_horizontal = 1; // Uma casa para a direita

    printf("SIMULACAO AVANCADA DE MOVIMENTOS DAS PECAS DE XADREZ\n\n");

    // TORRE - Utilizando função recursiva
    printf("Torre movendo 5 casas para a direita (recursivo):\n");
    mover_torre_recursivo(casas_torre);
    printf("\n");

    // BISPO - Utilizando função recursiva
    printf("Bispo movendo 5 casas na diagonal (recursivo):\n");
    mover_bispo_recursivo(casas_bispo);
    printf("\n");

    // BISPO - Implementação alternativa com loops aninhados
    // Loop externo: movimento vertical, Loop interno: movimento horizontal
    printf("Bispo movendo 5 casas na diagonal (loops aninhados):\n");
    mover_bispo_loops_aninhados(casas_bispo, 1); // 1 casa horizontal para cada vertical
    printf("\n");

    // RAINHA - Utilizando função recursiva
    printf("Rainha movendo 8 casas para a esquerda (recursivo):\n");
    mover_rainha_recursivo(casas_rainha);
    printf("\n");

    // CAVALO - Utilizando loops complexos com múltiplas variáveis
    // Movimento em "L": duas casas para cima e uma para a direita
    // Demonstra uso de continue e break para controle de fluxo
    printf("Cavalo movendo em L (2 casas para cima, 1 casa para a direita):\n");

    int movimento_completo = 0; // Flag para controlar se o movimento foi completado
    int fase = 1;               // Fase do movimento (1: vertical, 2: horizontal)
    int casas_movidas_vertical = 0;
    int casas_movidas_horizontal = 0;

    // Loop principal que controla todo o movimento do Cavalo
    while (!movimento_completo)
    {

        // Loop aninhado para a fase vertical (movimento para cima)
        for (int tentativa = 1; tentativa <= 3; tentativa++)
        {

            // Se ainda estamos na fase vertical e não completamos o movimento vertical
            if (fase == 1 && casas_movidas_vertical < cavalo_vertical)
            {
                printf("Cima\n");
                casas_movidas_vertical++;

                // Se completamos o movimento vertical, pula para a próxima fase
                if (casas_movidas_vertical >= cavalo_vertical)
                {
                    fase = 2;
                    break; // Sai do loop for para mudar de fase
                }
                continue; // Continua no loop para próximo movimento vertical
            }

            // Se estamos na fase horizontal e não completamos o movimento horizontal
            if (fase == 2 && casas_movidas_horizontal < cavalo_horizontal)
            {
                printf("Direita\n");
                casas_movidas_horizontal++;

                // Se completamos o movimento horizontal, termina o movimento
                if (casas_movidas_horizontal >= cavalo_horizontal)
                {
                    movimento_completo = 1;
                    break; // Sai do loop for
                }
            }
        }

        // Condição de segurança para evitar loop infinito
        if (casas_movidas_vertical >= cavalo_vertical && casas_movidas_horizontal >= cavalo_horizontal)
        {
            movimento_completo = 1;
        }
    }
    printf("\n");

    printf("=== FIM DA SIMULACAO AVANCADA ===\n");

    return 0;
}
