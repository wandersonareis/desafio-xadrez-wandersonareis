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

    printf("FIM DA SIMULACAO\n");

    return 0;
}
