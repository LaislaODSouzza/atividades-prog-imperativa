#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int linhas = 7, colunas = 7;
    int matriz[linhas][colunas];
   
    srand(time(NULL));
   
    for(int i=0; i<linhas; i++) {
        for(int j=0; j<colunas; j++) {
            matriz[i][j] = rand() % 100 + 1;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}