#include <stdio.h>

int main() {
   
    int num, c50, c20, c10, c5, c1;
    int r50, r20, r10, r5, r1;
   
    printf("Digite um número para convertê-lo em cédulas: ");
    scanf("%d", &num);
   
    c50 = num/50;
    r50 = num%50;
    c20 = r50/20;
    r20 = r50%20;
    c10 = r20/10;
    r10 = r20%10;
    c5 = r10/5;
    r5 = r10%5;
    c1 = r5/1;
   
    printf("\nResultado:\n%d notas de 50,\n%d notas de 20,\n%d notas de 10,\n%d notas de 5,\n%d notas de 1.", c50, c20, c10, c5, c1);
   
    return 0;
}
