// Calcule a média de idades de uma turma de 30;
#include<stdio.h>

main()
{
    int i=0, idade, soma=0, media;
    while(i<30)
    {
        printf("Digite a idade do aluno\n");
        scanf("%d", &idade);
        
        soma = soma + idade;
        media = soma/2;
        
    i++;
    }
    printf("Média da idade dos alunos da turma: %d", media);
}
