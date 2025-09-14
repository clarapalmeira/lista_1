#include <stdio.h>

int main() {
    float x;
    printf("Entre com o valor em reais da conta: ");
    scanf("%f", &x);
    printf("Valor da taxa para o garçom: %.2f\n", 0.1 * x);
    printf("Valor a ser pago: %.2f\n", 0.9 * x);
   
    return 0;
}
