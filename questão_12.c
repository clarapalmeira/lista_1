#include <stdio.h>

int main () {

int A;
int B;
int C;

    printf("Escreva o valor de A: ");
    scanf("%d" , &A);

    printf("Escreva o valor de B: ");
    scanf("%d" , &B);

    C = A;
    A = B;
    B = C;

    printf("O novo valor de A é: %d\n", A);
    printf("O novo valor de B é: %d\n", B);

    return 0;

}
