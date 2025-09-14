#include <stdio.h>

int main() {
int x;
    printf("Entre com o valor: ");
    scanf("%d", &x);
    printf("Triplo: %d\n", 3 * x);
    printf("Quadrado: %d\n", x * x);
    printf("Meio: %.1f\n", x / 2.0);
    return 0;
}
