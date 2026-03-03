#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    int Nlido, i;
    printf("Digite o número de elementos que o vetor terá: ");
    scanf("%d", &Nlido);
    printf("\n");
    int vetor[Nlido];
    int acc=0;
   
    srand(time(NULL));
   
    for(i=0; i<Nlido; i++) {
        vetor[i] = rand() % 100 + 1;
        if(vetor[i]>acc) {
            acc = vetor[i];
        }
    }
    for(i=0; i<Nlido; i++) {
        printf("Posição [%d] = %d\n", i, vetor[i]);
    }
    printf("\nO maior valor armazenado no vetor foi = %d\n", acc);
   
    return 0;
}