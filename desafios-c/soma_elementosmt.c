#include <stdio.h>

/*
    Crie um programa em C que:

    Peça ao usuário para digitar os 9 elementos de uma matriz 3x3.

    Armazene esses valores em uma matriz.

    Mostre a matriz no formato tradicional 3x3.

    Calcule e exiba a soma de todos os elementos da matriz.


*/

int main(){

    int matriz[3][3];
    int i, j, soma = 0;
    

    printf("Digite os elementos da matriz 3x3");


    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nMatriz digitada:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos: %d\n", soma);

    return 0;
}