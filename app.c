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

        
}