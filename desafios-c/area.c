#include <stdio.h>

/*
Faça um programa que leia três valores de ponto flutuante: A, B e C. Em seguida, calcule e mostre:

a) a área do triângulo retângulo que tem como base A e altura C.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B como bases, e C como altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada
O arquivo de entrada contém três valores do tipo double com uma casa decimal.

Saída
O arquivo de saída deve conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com uma mensagem correspondente (em português) e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 casas decimais.

*/

int main(){

    float A, B, C;

    scanf("%f%f%f", &A, &B, &C);

    float area_triangulo = (A*C)/2;
    float area_circulo = 3.14159 * C * C;
    float area_trapezio = (A + B) *C /2;
    float area_quadrado = B * B;
    float area_retangulo =  A * B;

    printf("TRIANGULO: %.3f\n", area_triangulo);
    printf("CIRCULO: %.3f\n", area_circulo);
    printf("TRAPEZIO: %.3f\n", area_trapezio);
    printf("QUADRADO: %.3f\n", area_quadrado);
    printf("RETANGULO: %.3f\n", area_retangulo);



    return 0;
}