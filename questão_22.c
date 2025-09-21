#include <stdio.h>

int main() {
    int numero, d1, d2, d3, invertido;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &numero);

    // separa os dígitos
    d1 = numero / 100;        // primeiro dígito (centena)
    d2 = (numero / 10) % 10;  // segundo dígito (dezena)
    d3 = numero % 10;         // terceiro dígito (unidade)

    // monta o número invertido
    invertido = d3 * 100 + d2 * 10 + d1;

    printf("Numero invertido: %d\n", invertido);

    return 0;
}
