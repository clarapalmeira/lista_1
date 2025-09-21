#include <stdio.h>

int main() {
    int numero;

   printf("Digite um número: ");
    scanf("%d", &numero);

    printf("Esse é um número ");
    printf("%s\n", (numero % 2 == 0) ? "Par" : "Ímpar");

    return 0;
}
