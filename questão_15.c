#include <stdio.h>

int main() {

    int horas;
    float valor_horas;
    float desconto;
 
    float salario_bruto;
    float salario_liquido;
    float valor;
   

    printf("Escreva a quantidade de horas trabalhados pelo professor no mês: ");
    scanf("%d", &horas);

     printf("Escreva o valor da hora da aula: ");
    scanf("%f", &valor_horas);

      printf("Escreva o valor do percentual de desconto do INSS: ");
    scanf("%f", &desconto);

    salario_bruto = horas * valor_horas;
    salario_liquido = salario_bruto - (desconto * salario_bruto / 100);
   
    printf("O valor do salário bruto a ser pago é: %f\n", salario_bruto);
    printf("O valor do salário líquido a ser pago é: %f\n", salario_liquido);

    return 0;
}
