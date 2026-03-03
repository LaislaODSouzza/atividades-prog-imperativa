#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    int Nlido, i;
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &Nlido);
    int vetor[Nlido];
   
    srand(time(NULL));
   
    for(i=0; i<Nlido; i++) {
        vetor[i] = rand() %100 + 1;
    }
    printf("\nOs %d valores aleatórios sorteados:\n", i);
    for(i=0; i<Nlido; i++) {
        printf("Posição [%d] = %d\n", i, vetor[i]);
    }
   
    return 0;
}