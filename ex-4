#include <stdio.h>

int somquad(int N) {
    if (N==1) {
        return 1;
    } else {
        return N*N + somquad(N-1);
    }
}

int main() {
   
    int N;
    printf("Digite um número: ");
    scanf("%d", &N);

    if (N<=0) {
        printf("Este número não é positivo e diferente de zero\n");
    } else {
        int resultado = somquad(N);
        printf("\nResultado = %d\n", resultado);
    }
    return 0;
}