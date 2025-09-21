#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double mediaAritmetica, mediaGeometrica;

    printf("Digite tres numeros em ponto flutuante: ");
    scanf("%lf %lf %lf", &a, &b, &c);

  
    mediaAritmetica = (a + b + c) / 3.0;

   
    mediaGeometrica = pow(a * b * c, 1.0 / 3.0);

    printf("Media aritmetica = %.4lf\n", mediaAritmetica);
    printf("Media geometrica = %.4lf\n", mediaGeometrica);

    return 0;
}
