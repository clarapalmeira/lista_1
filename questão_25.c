#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, d;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("A distancia entre os pontos (%.2lf, %.2lf) e (%.2lf, %.2lf) eh: %.4lf\n",
           x1, y1, x2, y2, d);

    return 0;
}
