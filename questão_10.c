#include <stdio.h>

int main () {

float x;
float y;

    printf("Escreva o valor da cotação do dólar: ");
    scanf("%f" , &x);

    printf("Escreva a quantidade de reais que deseja converter: ");
    scanf("%f" , &y);

    printf("O valor da conversão é de: %f dólares." , x * y );


}
