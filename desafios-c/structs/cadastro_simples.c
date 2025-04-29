#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
    DESAFIO 1: Cadastro Simples de Pessoa
Objetivo:

Criar uma struct para armazenar informações de uma pessoa.

Preencher os dados de uma pessoa e exibir essas informações.

Regras:

Crie uma struct chamada Pessoa com os seguintes campos:

nome (até 50 caracteres)

idade (inteiro)

altura (float)

No main, crie uma variável do tipo Pessoa.

Preencha os dados manualmente no código (não precisa pedir para o usuário digitar ainda).

Depois, imprima todas as informações dessa pessoa na tela.

*/

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main(){
    setlocale(LC_ALL,"portuguese");

    typedef struct Pessoa Pessoa;
    Pessoa pessoa = {"João", 25, 1.75};

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %.2f\n",pessoa.altura);

    return 0;
}