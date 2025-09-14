#include <stdio.h>

int main () {


int comprimento;
int largura;
int altura;

    printf("Escreva o valor do comprimento da caixa: ");
    scanf("%d" , &comprimento);

    printf("Escreva o valor da largura da caixa: ");
    scanf("%d" , &largura);

    printf("Escreva o valor da altura da caixa: ");
    scanf("%d" , &altura);

    printf("O volume da caixa é igual a: %d\n" , comprimento * largura * altura);


    return 0;



}
