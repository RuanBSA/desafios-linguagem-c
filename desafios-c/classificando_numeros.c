#include <stdio.h>

int main() {

    /*
        Crie um programa em C que:

        Peça ao usuário para digitar 10 números inteiros e armazene em um vetor.

        Depois, mostre:

        Todos os números digitados.

        Quantos são positivos.

        Quantos são negativos.

        Quantos são iguais a zero.

        A média dos números positivos.
    */

    int numeros[10];

    int numerosPositivos = 0,
        numerosNegativos = 0,
        numerosIgual_0 = 0,
        somaPositivos = 0;

    printf("Digite 10 numeros inteiros:\n");

    int i,j;
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        
        if (numeros[i] > 0) {
            somaPositivos += numeros[i];
            numerosPositivos++;


        } else if (numeros[i] < 0) {
            numerosNegativos++;

        } else {
            numerosIgual_0++;
        }
    }

    printf("Numeros digitados:\n");

    for (j = 0; j < 10; j++) {
        printf("%d ", numeros[j]);
    }

    printf("\nPositivos: %d ", numerosPositivos);
    printf("\nNegativos: %d ", numerosNegativos);
    printf("\nZero: %d ", numerosIgual_0);

    if (numerosPositivos > 0) {
        float media = (float)somaPositivos / numerosPositivos;
        printf("\nMedia dos positivos: %.2f\n", media);

    } else {
        printf("\nNao ha numeros positivos");
    }

    return 0;

}