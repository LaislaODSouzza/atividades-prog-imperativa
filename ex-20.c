#include <stdio.h>

int fatorial (int n) {
    if(n <= 1) {
        return 1;
    }
    int resultado = n*fatorial(n-1);
    return resultado;
}

int main() {
    int n;
    printf("Digite o número (fatorial): ");
    scanf("%d", &n);
    printf("\n%d! = ");
    printf("%d\n", fatorial(n));
}