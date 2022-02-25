/******************************************************************************

Você foi convidado para desenvolver um sistema de cadastro e armazenamento de dados para 50
alunos em um vetor.
Cada aluno deverá possuir (matricula, nome, idade, nota 1, nota 2, nota 3). Criar Struct (0,5)
O sistema deverá possuir as seguintes funções:
1- Cadastrar Aluno (cadastrar todos os alunos) (0,5)
2- Consultar aluno pela matricula (apresentar todos os dados do aluno) (1,0)
3- Imprimir todos os alunos (imprimir todos os dados de todos os alunos) (0,5)
4- Mostrar as médias de cada aluno (apresentar o nome do aluno e sua média) (1,0)
5- Mostrar os dados do aluno mais velho (1,5)
Desenvolva o código em C utilizando, Struct, Funções e as outras estruturas mais simples vistas em
aula.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int i;

typedef struct
{
    int matricula;
    char nome[50];
    int idade;
    float nota1, nota2, nota3;
}dadosAluno;

void cadastro(dadosAluno x[], int y)
{
    for(i=0; i<y; i++)
    {
        printf("Digite a matricula do(a) aluno(a)\n");
        scanf("%d", &x[i].matricula);
        printf("Digite o nome do(a) aluno(a)\n");
        scanf("%s", &x[i].nome);
        printf("Digite a idade do(a) aluno(a)\n");
        scanf("%d", &x[i].idade);
        printf("Digite a nota 01 do(a) aluno(a)\n");
        scanf("%f", &x[i].nota1);
        printf("Digite a nota 02 do(a) aluno(a)\n");
        scanf("%f", &x[i].nota2);
        printf("Digite a nota 03 do(a) aluno(a)\n");
        scanf("%f", &x[i].nota3);
    }
}

void consulta(dadosAluno x[], int y, int z)
{
    for (i=0; i<y; i++)
    {
        if(x[i].matricula == z)
        {
            printf("Matricula do(a) aluno(a): %d\n", x[i].matricula);
            printf("Nome do(a) aluno(a): %s\n", x[i].nome);
            printf("Idade do(a) aluno(a): %d\n", x[i].idade);
            printf("Nota 01 do(a) aluno(a): %.2f\n", x[i].nota1);
            printf("Nota 02 do(a) aluno(a): %.2f\n", x[i].nota2);
            printf("Nota 03 do(a) aluno(a): %.2f\n", x[i].nota3);
        }
    }
}

void impressao(dadosAluno x[], int y)
{
    for(i=0; i<y; i++)
    {
        printf("Matricula do(a) aluno(a): %d\n", x[i].matricula);
        printf("Nome do(a) aluno(a): %s\n", x[i].nome);
        printf("Idade do(a) aluno(a): %d\n", x[i].idade);
        printf("Nota 01 do(a) aluno(a): %.2f\n", x[i].nota1);
        printf("Nota 02 do(a) aluno(a): %.2f\n", x[i].nota2);
        printf("Nota 03 do(a) aluno(a): %.2f\n", x[i].nota3);
    }
}

void media(dadosAluno x[], int y)
{
    float soma = 0;
    
    for(i=0; i<y; i++)
    {
        soma = x[i].nota1 + x[i].nota2 + x[i].nota3;
        printf("Media do(a) aluno(a) %s: %.2f\n\n", x[i].nome, soma/3);
    }
}

void alunoVelho(dadosAluno x[], int y)
{
    int velho = 0, p = 0;
    
    for(i=0; i<y; i++)
    {
        if(x[i].idade > velho)
        {
            velho = x[i].idade;
            p = i;
        }
    }
    
        printf("Matricula do(a) aluno(a): %d\n", x[p].matricula);
        printf("Nome do(a) aluno(a): %s\n", x[p].nome);
        printf("Idade do(a) aluno(a): %d\n", x[p].idade);
        printf("Nota 01 do(a) aluno(a): %.2f\n", x[p].nota1);
        printf("Nota 02 do(a) aluno(a): %.2f\n", x[p].nota2);
        printf("Nota 03 do(a) aluno(a): %.2f\n", x[p].nota3);
}



int main()
{
    int z;
    dadosAluno vet[50];
    
    cadastro(vet, 50);
    printf("\n");
    printf("Digite a matricula que deseja consultar: ");
    scanf("%d", &z);
    consulta(vet, 50, z);
    printf("\n");
    printf("Mostrando os cadastros de todos os alunos\n\n");
    impressao(vet,50);
    printf("\n");
    media(vet, 50);
    printf("\n");
    printf("Cadastro do aluno mais velho:\n");
    printf("\n");
    alunoVelho(vet, 50);
}
