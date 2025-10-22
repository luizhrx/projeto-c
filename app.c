#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4  // tamanho reduzido do mapa

int main() {
    // 1. LUIZ — Parte de inicialização e lógica principal
    char mapa[TAM][TAM];
    int linhaTesouro, colunaTesouro;
    int opcao, tentativas;

    srand(time(NULL)); // gera números aleatórios diferentes a cada execução

    printf("===== CAÇA AO TESOURO =====\n");

    do {
        printf("\n1 - Jogar\n");
        printf("2 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            // Luiz inicializa o mapa e sorteia o tesouro
            for (int i = 0; i < TAM; i++) {
                for (int j = 0; j < TAM; j++) {
                    mapa[i][j] = '~'; // representa água
                }
            }

            linhaTesouro = rand() % TAM;
            colunaTesouro = rand() % TAM;
            tentativas = 0;

            printf("\nO jogo começou! O tesouro está escondido em algum lugar...\n");

            // 2. ARTHUR — Parte de interação com o jogador
            while (1) {
                int linha, coluna;

                printf("\nDigite as coordenadas (linha e coluna de 0 a %d): ", TAM - 1);
                scanf("%d %d", &linha, &coluna);

                // Validação das entradas
                if (linha < 0 || linha >= TAM || coluna < 0 || coluna >= TAM) {
                    printf("Coordenadas inválidas! Tente novamente.\n");
                    continue;
                }

                tentativas++;

                // 3. NETO — Parte de exibição do mapa
                printf("\n   ");
                for (int j = 0; j < TAM; j++)
                    printf("%d ", j);
                printf("\n");

                for (int i = 0; i < TAM; i++) {
                    printf("%d  ", i);
                    for (int j = 0; j < TAM; j++) {
                        printf("%c ", mapa[i][j]);
                    }
                    printf("\n");
                }

                // LUIZ — Verifica se o jogador achou o tesouro
                if (linha == linhaTesouro && coluna == colunaTesouro) {
                    mapa[linha][coluna] = 'T'; // marca o tesouro
                    printf("\n🎉 Parabéns! Você encontrou o tesouro!\n");

                    // 4. JÚNIOR — Finalização e resultado do jogo
                    printf("\nVocê conseguiu encontrar o tesouro em %d tentativas!\n", tentativas);

                    // Neto mostra o mapa final com o tesouro revelado
                    printf("\nMapa final:\n");
                    printf("\n   ");
                    for (int j = 0; j < TAM; j++)
                        printf("%d ", j);
                    printf("\n");

                    for (int i = 0; i < TAM; i++) {
                        printf("%d  ", i);
                        for (int j = 0; j < TAM; j++) {
                            printf("%c ", mapa[i][j]);
                        }
                        printf("\n");
                    }

                    // Júnior encerra o jogo
                    printf("\nVoltando ao menu principal...\n");
                    break;
                } else {
                    mapa[linha][coluna] = 'X'; // marca erro
                    printf("Nada aqui... continue procurando!\n");
                }
            }
        }
    } while (opcao != 2);

    // JÚNIOR — Mensagem final do programa
    printf("\nObrigado por jogar o Caça ao Tesouro!\n");

    return 0;
}
