#include <stdio.h>

int main() {
    int tempo, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;            // 1 hora = 3600 segundos
    minutos = (tempo % 3600) / 60;   // pega o resto das horas e converte em minutos
    segundos = tempo % 60;           // resto final são os segundos

    printf("%d segundos equivalem a %d hora(s), %d minuto(s) e %d segundo(s).\n",
           tempo, horas, minutos, segundos);

    return 0;
}
