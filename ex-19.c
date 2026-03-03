#include <stdio.h>
#include <string.h>

int main() {
   
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = 0;
    printf("\n");
    printf("Frase invertida: ");
    for(int i = strlen(frase)-1; i >= 0; i--) {
        printf("%c", frase[i]);
    }
   
    return 0;
}