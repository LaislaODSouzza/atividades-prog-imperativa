#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    int Nlido, i;
    int acc = 0;
    int soma = 0;
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &Nlido);
    int vetor[Nlido];
   
    printf("\nVETOR ORIGINAL:-----------------\n");
    for(i=0; i<Nlido; i++) {
        vetor[i] = rand() % 100 + 1;
    }
    for(i=0; i<Nlido; i++) {
        printf("Posição [%d] = %d\n", i, vetor[i]);
    }
    printf("\nÍMPARES:-----------------\n");
    for(i=0; i<Nlido; i++) {
        if(vetor[i]%2!=0) {
            printf("Posição [%d] = %d\n", i, vetor[i]);
            acc = acc + 1;
            soma += vetor[i];
        }
    }
    printf("\nQUANTIDADE DE NÚMEROS ÍMPARES = %d\n", acc);
    printf("SOMA DOS NÚMEROS ÍMPARES = %d\n", soma);

    return 0;
}