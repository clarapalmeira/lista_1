#include <stdio.h>

int main() {
    int x;
     int y;
     int z;
    printf("Entre com a quantidade de horas: ");
    scanf("%d", &x);
    printf("Entre com a quantidade de minutos: ");
    scanf(" %d", &y);
      printf("Entre com a quantidade de segundos: ");
    scanf(" %d", &z);

    
        printf("Total em segundos: %d\n" , 3600 * x + 60 * y + z);


    return 0;
}
