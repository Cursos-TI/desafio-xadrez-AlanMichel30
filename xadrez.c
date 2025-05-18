#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int i = 1; 
   
    // Implementação de Movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    while (i <= 5) { //O movimento do Bispo cinco casas na diagonal para cima e à direita.
        printf("Cima Direita\n");
        i++;
    }

    // Implementação de Movimentação da Torre.
    i = 1;
    printf("\nMovimento da Torre:\n");
    do{
        printf("Direita\n");
        i++;
    }while (i < 5); // O movimento da Torre cinco casas para a direita.
    
    // Implementação de Movimentação da Rainha.
    printf("\nMovimento da Rainha:\n");
    for(int i = 1; i <= 8; i++){
        printf("Esquerda\n");
    }

    // loops aninhados (um loop dentro do outro) para simular esse movimento.
    int movimentoDoCavalo = 1; //a movimentação do Cavalo em L.
    
    printf("\nMovimento do Cavalo:\n");
    while(movimentoDoCavalo--){ // Movimentação horizontal. 
        for(int i = 0; i < 2; i++){ // Movimentação vertical.
            printf("Baixo\n"); // Imprime "Baixo" duas vezes.
        }
        printf("Esquerda\n"); // Imprime "Esquerda" uma vez. 
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas
    // Exemplo: Crie uma função recursiva para o movimento do Bispo

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
