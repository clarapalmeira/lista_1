#include <stdio.h>

int main () {

int x;
int y;

    printf("Escreva um valor: ");
    scanf("%d" , &x);

    printf("Escreva outro valor: ");
    scanf("%d" , &y);

    printf("Soma: %d\n" , x + y);
    printf("Produto: %d\n" , x * y);
    printf("Diferença: %d\n" , x / y);
    printf("Resto da divisão: %d\n" , x % y);

    return 0;


}
