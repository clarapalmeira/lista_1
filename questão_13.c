#include <stdio.h>

int main () {

int F;
int C;

    printf("Escreva a temperatura em graus Celsius: ");
    scanf("%d" , &C);

    printf("A temperatura em graus Fahrenheit é: %d\n", (9 * C + 160)/5 );
  

    return 0;

}
