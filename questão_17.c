#include <stdio.h>

int main() {
    float raio;

    printf("Escreva o raio do círculo: ");
    scanf("%f", &raio);


    printf("Diametro: %f\n", 2 * raio);
    printf("Circunferencia: %f\n", 2 * 3.14159 * raio);
    printf("Area: %f\n", 3.14159 * raio * raio);

    return 0;
}
