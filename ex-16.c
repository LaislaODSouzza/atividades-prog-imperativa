#include <stdio.h>

int main() {

    int N;
    printf("Digite a ordem da matriz n linhas por n colunas: ");
    scanf("%d", &N);
    int linhas = N, colunas = N;
    int matriz[linhas][colunas];
    printf("\n");
   
   
    for(int i=0; i<linhas; i++) {
        for(int j=0; j<colunas; j++) {
            if (i==j) {
                printf("1 ", matriz[i][j]);
            } else {
                printf("0 ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}