#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    float conta;
    int acc = 0;
    int linhas = 7, colunas = 7;
    int matriz[linhas][colunas];
   
    srand(time(NULL));
   
    for(int i=0; i<linhas; i++) {
        for(int j=0; j<colunas; j++) {
            matriz[i][j] = rand() % 100 + 1;
            acc = acc + matriz[i][j];
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    conta = acc/(7.0*7);
    printf("\nA MÉDIA DOS VALORES DA MATRIZ = %.2f\n", conta);

    return 0;
}