#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Função auxiliar para verificar se um número é primo
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i<=sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Não é primo
        }
    } return 1; // É primo
}

int main() {
   
    int Nlido, i;
    int acc = 0; // Contador de números primos
   
    printf("Digite o tamanho que o vetor deve ter (elementos): ");
    scanf("%d", &Nlido);
   
    // Alerta caso o usuário digite um tamanho inválido
    if (Nlido <= 0) {
        printf("Tamanho do vetor invalido.\n");
        return 1;
    }

    int vetor[Nlido];
    srand(time(NULL));
   
    printf("\nVETOR ORIGINAL: -----------------------------------\n");
    for(i=0; i<Nlido; i++) {
        vetor[i] = rand() % 100 + 1;
    }
    for(i=0; i<Nlido; i++) {
        printf("Posicao [%d] = %d\n", i, vetor[i]);
    }
   
    printf("\nELEMENTOS DO VETOR PRIMOS: ------------------------\n");
    for(i=0; i<Nlido; i++) {
        // Passa o valor do elemento do vetor para a função isPrime
        if(isPrime(vetor[i])) {
            printf("Posicao [%d] = %d\n", i, vetor[i]);
            acc+=1;
        }
    }
    printf("\nQUANTIDADE DE ELEMENTOS PRIMOS: %d\n", acc);
   
    return 0;
}