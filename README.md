# 🎯 Projeto: Caça ao Tesouro

## 📘 Descrição
O **Caça ao Tesouro** é um jogo simples desenvolvido em **linguagem C**, cujo objetivo é encontrar a posição secreta do tesouro em um mapa.  
O jogador escolhe coordenadas (linha e coluna) até encontrar o tesouro escondido.

O projeto foi desenvolvido para praticar **lógica de programação**, **estruturas de repetição**, **condições** e o uso da função **rand()** para gerar números aleatórios.

Pra garantir que o tesouro mude de lugar a cada partida, o jogo gera uma **nova semente aleatória** toda vez que ele é iniciado.  
A gente faz isso usando o comando: srand(time(NULL));

Essa função usa o horário atual do computador como base pra criar a semente
```c


---

## 🧠 Integrantes e Funções
| Integrante | Responsabilidade |
|------------|------------------|
| **Luiz**   | Lógica principal, inicialização do jogo e verificação do tesouro |
| **Arthur** | Interação com o jogador (entrada de dados) |
| **Neto**   | Exibição do mapa durante o jogo |
| **Júnior** | Finalização e exibição do resultado |

---

## ⚙️ Funcionalidades
- Menu principal com opções de **Jogar** e **Sair**  
- Geração aleatória da posição do tesouro  
- Exibição visual do **mapa 4x4** (facilitado)  
- Contagem de tentativas até o jogador encontrar o tesouro  
- Mensagens de feedback (“Nada aqui...”, “Parabéns, você encontrou!”)

---

## 🕹️ Como Jogar
1. Execute o programa.
2. No menu inicial, escolha a opção **1 - Jogar**.
3. Digite as coordenadas (linha e coluna) entre **0 e 3**.
4. Continue tentando até encontrar o tesouro.
5. O jogo mostrará o número de tentativas e o **mapa final** com o tesouro revelado.

---

## 🧩 Estrutura do Código
O código está dividido logicamente entre os participantes:

```c
// 1. LUIZ — Inicialização e lógica principal
// 2. ARTHUR — Interação com o jogador
// 3. NETO — Exibição do mapa
// 4. JÚNIOR — Finalização e resultado
