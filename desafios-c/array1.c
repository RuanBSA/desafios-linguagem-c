#include <stdio.h>

/*
    Crie um programa em C que:

        Peça ao usuário para informar o tamanho de um array.

        Depois, peça para o usuário digitar os elementos desse array.

        Ao final, o programa deve mostrar:

        Todos os elementos digitados.

        A soma de todos os elementos.
*/

int main(){

    // Declaracao de variaveis
    int valorDigitado;
    int i;
    int j;
    int elemento = 1;
    int somaElementos = 0;


    // Usuario definindo tamanho do array
    printf("Digite o tamanho do array:\n");
    scanf("%d", &valorDigitado);

    int tamanhoArray[valorDigitado];

    // usuario digitando os elementos do array, e os valores sendo somados a variavel somaElementos
    for(i = 0; i < valorDigitado; i++) {
        printf("digite o elemento de numero %d\n", elemento);
        scanf("%d", &tamanhoArray[i]);
        elemento++;
        somaElementos += tamanhoArray[i];
    }
    
    // mostrando execucao
    printf("Elementos digitados: ");
    for(j = 0; j < valorDigitado; j++) {
        printf("%d ", tamanhoArray[j]);
    }

    printf("\nSoma dos elementos: %d", somaElementos);


    return 0;
}