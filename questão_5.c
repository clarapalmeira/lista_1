#include <stdio.h>

int main() {
    float x;
    char y;
    printf("Entre com a sua altura: ");
    scanf("%f", &x);
    printf("Entre com o seu sexo (F/M): ");
    scanf(" %c", &y);

    if (y == 'M' || y == 'm') {
        printf("Peso ideal (homens): %.2f\n", 72.7 * x - 58);
    } else if (y == 'F' || y == 'f') {
        printf("Peso ideal (mulheres): %.2f\n", 62.1 * x - 44.7);
    } else {
        printf("Sexo inválido.\n");
    }

    return 0;
}
