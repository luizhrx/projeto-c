#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    
// LUIZ — Parte de inicialização e lógica principal

char mapa[TAM][TAM];
int linhaTesouro, colunaTesouro;
int opcao, tentativas;

srand(time(NULL)); // faz o rand() gerar números diferentes a cada execução

printf("===== CAÇA AO TESOURO =====\\n");

do {
    printf("\\n1 - Jogar\\n");
    printf("2 - Sair\\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {

        // Luiz - inicializa o mapa e sorteia o tesouro
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                mapa[i][j] = '~'; // representa água
            }
        }

        linhaTesouro = rand() % TAM;
        colunaTesouro = rand() % TAM;
        tentativas = 0;

        printf("\\nO jogo começou! O tesouro está escondido em algum lugar...\\n");

                     // ARTHUR — parte de entrada e validação das coordenadas 
// declara as variáveis para guardar as coordenadas que o usuário vai digitar
    int linha, coluna;
    int encontrou = 0;

// este é o laço principal do jogo, ele só vai parar quando a variável 'encontrou' mudar para 1
    while (encontrou == 0) {
    // pede a coordenada da linha para o usuário
    printf("\nDigite a coordenada da linha (0 a %d): ", TAM - 1);
    scanf("%d", &linha);

// VALIDAÇÃO DA LINHA:
// este laço só executa se o usuário digitar um número inválido menor que 0 ou maior/igual a TAM
// ele fica pedindo a linha de novo até que um valor válido seja inserido
    while (linha < 0 || linha >= TAM) {
        printf("Linha inválida! Digite novamente (0 a %d): ", TAM - 1);
        scanf("%d", &linha);
    }

// pede a coordenada da coluna para o usuário.
    printf("Digite a coordenada da coluna (0 a %d): ", TAM - 1);
    scanf("%d", &coluna);

// VALIDAÇÃO DA COLUNA:
// funciona da mesma forma que a validação da linha, mas para a coluna
    while (coluna < 0 || coluna >= TAM) {
        printf("Coluna inválida! Digite novamente (0 a %d): ", TAM - 1);
        scanf("%d", &coluna);
    }

// a tentativa só é contada aqui, depois que temos certeza que as coordenadas são válidas
    tentativas++;

// VERIFICAÇÃO DO ACERTO:
// compara as coordenadas do chute com as coordenadas sorteadas do tesouro.
    if (linha == linhaTesouro && coluna == colunaTesouro) {
        printf("\nParabéns! Você encontrou o tesouro em %d tentativas!\n", tentativas);


// atualiza a posição no mapa com 'T' para mostrar onde o tesouro foi encontrado
        mapa[linha][coluna] = 'T';

// altera a variável para 1 (verdadeiro), o que fará o laço 'while' principal parar na próxima verificação
        encontrou = 1;
    } else {
// se o chute estiver errado
        printf("\nNada encontrado nas coordenadas (%d, %d). Tente novamente!\n", linha, coluna);
        // marca a tentativa no mapa com um 'X' para o jogador saber onde já tentou
        mapa[linha][coluna] = 'X';
    }

   
    
     
}  
}