#include <stdio.h>

int main() {

    /*
        Crie um programa em C que:

        Peça ao usuário para digitar 10 números inteiros e armazene em um vetor.

        Depois:

        Mostre todos os números digitados.

        Mostre quantos deles são pares.

        Mostre a soma de todos os números ímpares.

        Mostre o maior número digitado.


    */

    int numbers[10];
    int i,j;
    int pares = 0;
    int impares = 0;
    int maiorNumero;
    
    printf("Digite 10 numeros: \n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

        if (numbers [i] % 2 == 0)
        {
            pares ++;
        }

        if (numbers [i] % 2 != 0) {
            impares += numbers[i];
        }

        if (i == 0 || numbers[i] > maiorNumero) {
            maiorNumero = numbers[i];
        }
    }
   
    for (j = 0; j < 10; j++) {
        printf("%d ", numbers[j]);
        
    }

    printf("\n%d sao pares\n", pares);
    printf("soma dos impares: %d\n", impares);
    printf("Maior numero: %d\n", maiorNumero);
   
    
    return 0;
}