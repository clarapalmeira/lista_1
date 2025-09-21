#include <stdio.h>

int main() {
    // Retângulo
    printf("Retangulo:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // Elipse (simplificada como triângulo)
    printf("Elipse:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Seta
    printf("\n");
    printf("Seta:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Losango
    printf("\n");
    printf("Losango:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 3; i >= 0; i--) {
        for (int j = 0; j < 4 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
