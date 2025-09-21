#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

   
    printf("%s\n", (b != 0 && a % b == 0) ? "Multiplo" : "Nao multiplo");

    return 0;
}
