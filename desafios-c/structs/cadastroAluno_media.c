#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

/*
Objetivo:
Criar uma struct para armazenar informações de alunos, calcular e exibir suas médias.

Regras:

Crie uma struct chamada Aluno com os seguintes campos:

nome (até 50 caracteres)

nota1 (float)

nota2 (float)

media (float)

No main, crie um array de 3 alunos.

Preencha os dados dos alunos manualmente (não precisa pedir pro usuário ainda).

Para cada aluno:

Calcule a média entre nota1 e nota2.

Armazene a média no campo media.

Depois, exiba o nome, as duas notas e a média de cada aluno.

Bônus (opcional):

Ao exibir, escreva se o aluno está Aprovado ou Reprovado.
(Considere aprovado se a média for >= 7.0).

Resumo do que precisa fazer:
Criar struct Aluno.

Criar array de alunos (alunos[3]).

Preencher notas manualmente.

Calcular e salvar a média.

Mostrar tudo na tela.

(Bônus) Mostrar "Aprovado" ou "Reprovado".

*/

struct Aluno {
    char nome[50];
    float nota1;
    float nota2;
    float media;

};

int main() {

    setlocale(LC_ALL,"portuguese");

    struct Aluno aluno[3];

    //Aluno1
    strcpy(aluno[0].nome,"Pedro");
    aluno[0].nota1 = 3;
    aluno[0].nota2 = 4;
    aluno[0].media = (aluno[0].nota1 + aluno[0].nota2) /2;

    //Aluno2
    strcpy(aluno[1].nome,"Carlos");
    aluno[1].nota1 = 7;
    aluno[1].nota2 = 7;
    aluno[1].media = (aluno[1].nota1 + aluno[1].nota2) /2;

    //Aluno3
    strcpy(aluno[2].nome,"Pablo");
    aluno[2].nota1 = 9;
    aluno[2].nota2 = 4;
    aluno[2].media = (aluno[2].nota1 + aluno[2].nota2) /2;

    for(int i = 0; i < 3; i++) {
        printf("Aluno: %s\n", aluno[i].nome);
        printf("Nota 1 = %.2f\n", aluno[i].nota1);
        printf("Nota 2 = %.2f\n", aluno[i].nota2);
        printf("Media = %.2f\n", aluno[i].media);
        
        if(aluno[i].media >= 7.0) {
            printf("APROVADO!\n");
        } else {
            printf("REPROVADO!\n");
        }

    }

    printf("\n");

    return 0; 
}

