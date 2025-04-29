#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*

 Cadastro de Funcionários e Endereços
Objetivo:
Trabalhar com struct dentro de struct para organizar melhor as informações.

O que você vai fazer:

Crie uma struct chamada Endereco, com:

rua (string de até 50 caracteres)

numero (inteiro)

cidade (string de até 50 caracteres)

Crie uma struct chamada Funcionario, com:

nome (string de até 50 caracteres)
cargo (string de até 30 caracteres)

salario (float)

endereco (que é uma variável do tipo Endereco)

No main():

Crie um array de 2 funcionários (funcionarios[2]).

Preencha manualmente os dados de cada funcionário e também o endereço.

Depois, mostre na tela todas as informações de cada funcionário, inclusive o endereço.

Bônus (se quiser tentar depois):
Mostrar o salário com duas casas decimais (%.2f).

Deixar um espaço (\n) entre a impressão dos dois funcionários.

Resumão:
Agora cada Funcionario vai ter um Endereco dentro dele, beleza? 
*/

struct Endereco {
    char rua[50];
    int numero;
    char cidade[50];

};

struct Funcionario {
    char nome[50];
    char cargo[30];       
    float salario;

    struct Endereco endereco;
};


int main() {

    setlocale(LC_ALL,"portuguese");

    struct Funcionario funcionario[2];

    //Funcionario1
    strcpy(funcionario[0].nome,"Pedro");
    strcpy(funcionario[0].cargo,"Programador");
    funcionario[0].salario = 12000;
    strcpy(funcionario[0].endereco.rua,"Rua Dr.Rafael Parisi");
    funcionario[0].endereco.numero = 603;
    strcpy(funcionario[0].endereco.cidade,"Santos");

    //Funcionario2
    strcpy(funcionario[1].nome,"Claudio");
    strcpy(funcionario[1].cargo,"Designer Grafico");
    funcionario[1].salario = 8600;
    strcpy(funcionario[1].endereco.rua,"Rua Francisco Ferdinando");
    funcionario[1].endereco.numero = 212;
    strcpy(funcionario[1].endereco.cidade,"Sao Paulo");

    //Informacoes dos Funcionarios
    for(int i = 0; i < 2; i++) {
        printf("Nome: %s\n", funcionario[i].nome);
        printf("Cargo: %s\n", funcionario[i].cargo);
        printf("Salario: %.2f\n", funcionario[i].salario);
        printf("Rua: %s\n", funcionario[i].endereco.rua);
        printf("Numero: %d\n", funcionario[i].endereco.numero);
        printf("Cidade: %s\n", funcionario[i].endereco.cidade);

    }

    return 0;
}