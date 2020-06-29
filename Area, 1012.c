#include<stdio.h>

int main()
{
    double A, B, C;
    scanf("%.1lg %.1lg %.1lg", &A, &B, &C);
    double TRIANGULO, TRAPIZIO, CIRCULO, QUADRADO, RETANGULO;
    TRIANGULO = (1/2.0)*A*C;
    TRAPIZIO = (1/2.0)*(A+B)*C;
    CIRCULO = 3.14159 * C * C;
    QUADRADO = B*B;
    RETANGULO = A*B;
    printf("TRIANGULO: %.3lg\n", TRIANGULO);
    printf("CIRCULO: %.3lg\n", CIRCULO);
    printf("TRAPIZIO: %.3lg\n", TRAPIZIO);
    printf("QUADRADO: %.3lg\n", QUADRADO);
    printf("RETANGULO: %.3lg\n", RETANGULO);

    return 0;
}
