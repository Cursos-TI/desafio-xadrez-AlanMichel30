#include <stdio.h>

// Procedimento recursiva para mover a Torre para a direita
    void moverTorre(int casas) {
        if (casas == 0) return;
        printf("Direita\n");
        moverTorre(casas - 1);
    }

    // Procedimento recursiva para mover a Rainha para a esquerda
    void moverRainha(int casas) {
        if (casas == 0) return;
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }  

    // Procedimento recursiva para mover o Bispo na diagonal (Cima Direita)
    void moverBispoDiagonal(int casas) {
        if (casas == 0) return;
        printf("Cima Direita\n");
        moverBispoDiagonal(casas - 1);
    }
    // Procedimento com loops aninhados e recursão para o Bispo
    void moverBispoComLoops(int casas) {
        printf("\nMovimento do Bispo (com loops aninhados):\n");
            for (int i = 0; i < casas; i++) { // Movimento vertical (Cima)
                for (int j = 0; j < 1; j++) { // Movimento horizontal (Direita) - sempre 1 casa
                printf("Cima Direita\n");
            }
        }
    }

    // Procedimento com loops complexos para o Cavalo (2 cima + 1 direita)
    void moverCavalo() {
        printf("\nMovimento do Cavalo:\n");
            for (int cima = 0; cima < 2; cima++) {
               if (cima == 1) continue; // exemplo de uso de continue (ignora a 2ª repetição se condição for satisfeita)
               printf("Cima\n");
    }

    for (int direita = 0; direita < 2; direita++) {
        if (direita == 1) break; // exemplo de uso de break (interrompe no 2º loop)
        printf("Direita\n");
    }
}


    int main(){

        printf("Movimento da Torre:\n");
        moverTorre(5);

        printf("\nMovimento da Rainha:\n");
        moverRainha(8);

        printf("\nMovimento do Bispo:\n");
        moverBispoDiagonal(5);

        // Bispo com loops aninhados
        moverBispoComLoops(5);

        // Cavalo com loops complexos
        moverCavalo();
        
        return 0;
    }