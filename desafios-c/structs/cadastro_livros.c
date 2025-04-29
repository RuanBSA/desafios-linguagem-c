#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

/*
Desafio 2: Cadastro de Livros
Objetivo:
Criar uma struct para armazenar informações sobre livros e implementar um sistema simples para cadastrar e exibir os livros cadastrados.

Regras:

Crie uma struct chamada Livro com os seguintes campos:

Título (uma string de até 100 caracteres)

Autor (uma string de até 50 caracteres)

Ano de Publicação (um inteiro)

Preço (um número de ponto flutuante, tipo float)

No main, crie uma variável do tipo Livro.

Preencha os dados do livro manualmente (não precisa pedir para o usuário digitar ainda).

Imprima as informações do livro na tela.

Bônus (opcional):

Crie um segundo livro, e um terceiro, e mostre todos os livros cadastrados.

Use um laço for ou while para exibir as informações de cada livro.

O que deve ser feito:
Defina a struct Livro com os campos mencionados.

Preencha os dados de pelo menos 3 livros manualmente.

Exiba as informações desses livros na tela.


*/

struct Livros {
    char titulo[100];
    char autor[50];
    int ano_publicacao;
    float preco;
};

int main() {

    setlocale(LC_ALL,"portuguese");

   struct Livros livros[3];

   //Livro 1
   strcpy(livros[0].titulo, "O Senhor dos Anéis");
   strcpy(livros[0].autor, "J.R.R. Tolkien");
   livros[0].ano_publicacao = 1954;
   livros[0].preco = 59.90;

   //Livro 2
   strcpy(livros[1].titulo, "Dom Casmurro");
   strcpy(livros[1].autor, "Machado de Assis");
   livros[1].ano_publicacao = 1899;
   livros[1].preco = 39.90;

   //Livro 3
   strcpy(livros[2].titulo, "Harry Potter e a Pedra Filosofal");
   strcpy(livros[2].autor, "J.K. Rowling");
   livros[2].ano_publicacao = 1997;
   livros[2].preco =  49.90;

   for(int i = 0; i < 3; i++) {
    printf("Título: %s\n", livros[i].titulo);
    printf("Autor: %s\n", livros[i].autor);
    printf("Ano de Publicação: %d\n", livros[i].ano_publicacao);
    printf("Preço: %.2f\n", livros[i].preco);
   }
   

    return 0;
}