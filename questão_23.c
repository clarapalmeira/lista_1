#include <stdio.h>

int main() {
    int x, n, resultado;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // produto usando deslocamento de bits
    resultado = x << n;

    printf("%d * 2^%d = %d\n", x, n, resultado);

    return 0;
}
