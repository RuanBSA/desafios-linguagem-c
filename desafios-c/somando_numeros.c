#include <stdio.h>

int main() {

    /*
        Crie um programa em C que:

        Peça ao usuário para digitar 5 números inteiros e armazene em um vetor.

        Depois, mostre:

        Todos os números digitados.

        A soma total dos 5 números.
    */

    int numbers[5];
    int i,j;
    int soma = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        soma += numbers[i];
    }


    printf("Numeros digitados: ");

    for (j = 0; j < 5; j++) {
        printf("%d ",numbers[j]);
    }

    printf("\nSoma: %d", soma);

    return 0;
}