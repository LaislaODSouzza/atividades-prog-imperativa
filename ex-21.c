#include <stdio.h>

int fibonacci(int n) {
    if (n <= 2){
        return 1;
    }
    int resultado = fibonacci(n-1) + fibonacci(n-2);
    return resultado;
}

int main() {
    int n;
    printf("Digite um número (posição na sequência de fibonacci): ");
    scanf("%d", &n);
    printf("\nO %dº número da sequência é: ");
    printf("%d\n", fibonacci(n));
    return 0;
}