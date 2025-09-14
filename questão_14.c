#include <stdio.h>

int main() {

    int dias;
    float bonus = 0.0;
    float salario;
    float valor;
    float desconto;

    printf("Escreva a quantidade de dias trabalhados pelo vendedor: ");
    scanf("%d", &dias);

    salario = dias * 50.25;

    if (dias > 10 && dias <= 20) {
        bonus = 1.2 * salario;
    } else if (dias > 20) {
        bonus = 1.3 * salario;
    }

    valor = salario + bonus;

    desconto = 0.9 * valor;

    printf("O valor líquido a ser pago é: %.2f\n", desconto);

    return 0;
}
