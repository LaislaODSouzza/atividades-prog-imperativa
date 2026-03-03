#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Necessário para usar time(NULL) e garantir números aleatórios diferentes a cada execução

int main() {
    int vetor[5];
    int i;

    // Inicializa o gerador de números aleatórios (semente).
    // Usar time(NULL) garante que uma semente diferente seja usada
    // a cada execução do programa, gerando números diferentes.
    srand(time(NULL));

    // Preenche o vetor com números inteiros aleatórios
    for (i = 0; i < 5; i++) {

        vetor[i] = rand() % 100 + 1;
    }

    // Imprime o vetor preenchido
    printf("Vetor preenchido com números aleatórios:\n");
    for (i = 0; i < 5; i++) {
        printf("Posição %d: %d\n", i, vetor[i]);
    }

    return 0;
}