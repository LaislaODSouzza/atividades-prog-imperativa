#include <stdio.h>
#include <string.h>

int main() {
   
    char nome[80];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("\nOlá, %s!", nome);
   
    return 0;
}