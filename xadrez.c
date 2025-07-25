#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Programa que simula o movimento de três peças de xadrez: Torre, Bispo e Rainha
// Cada peça utiliza uma estrutura de repetição diferente para simular seu movimento

int main() {
    // Declaração de constantes para o número de casas que cada peça irá se mover
    const int casas_torre = 5;  // Torre move 5 casas para a direita
    const int casas_bispo = 5;  // Bispo move 5 casas na diagonal (cima e direita)
    const int casas_rainha = 8; // Rainha move 8 casas para a esquerda

    // Variáveis auxiliares para controle dos loops
    int i, contador;

    printf("=== SIMULACAO DE MOVIMENTOS DAS PECAS DE XADREZ ===\n\n");

    // A Torre move-se em linha reta (horizontal ou vertical)
    // Simulando movimento de 5 casas para a direita
    printf("Torre movendo 5 casas para a direita:\n");
    for (i = 1; i <= casas_torre; i++)
    {
        printf("Direita\n");
    }
    printf("\n");

    // O Bispo move-se na diagonal
    // Simulando movimento de 5 casas na diagonal (cima e direita)
    printf("Bispo movendo 5 casas na diagonal (cima e direita):\n");
    contador = 1;
    while (contador <= casas_bispo)
    {
        printf("Cima, Direita\n");
        contador++;
    }
    printf("\n");

    // A Rainha move-se em todas as direções
    // Simulando movimento de 8 casas para a esquerda
    printf("Rainha movendo 8 casas para a esquerda:\n");
    contador = 1;
    do
    {
        printf("Esquerda\n");
        contador++;
    } while (contador <= casas_rainha);
    printf("\n");

    // O Cavalo move-se em "L": duas casas em uma direção e uma casa perpendicularmente
    // Simulando movimento de 2 casas para baixo e 1 casa para a esquerda
    // Loop externo (for): controla as duas casas para baixo
    // Loop interno (while): controla a uma casa para a esquerda
    printf("Cavalo movendo em L (2 casas para baixo, 1 casa para a esquerda):\n");

    // Constantes para o movimento do Cavalo
    const int casas_cavalo_vertical = 2;   // Duas casas para baixo
    const int casas_cavalo_horizontal = 1; // Uma casa para a esquerda

    // Primeiro, move duas casas para baixo usando loop FOR
    for (i = 1; i <= casas_cavalo_vertical; i++)
    {
        printf("Baixo\n");
    }

    // Depois, move uma casa para a esquerda usando loop WHILE
    contador = 1;
    while (contador <= casas_cavalo_horizontal)
    {
        printf("Esquerda\n");
        contador++;
    }
    printf("\n");

    printf("=== FIM DA SIMULACAO ===\n");

    return 0;
}
