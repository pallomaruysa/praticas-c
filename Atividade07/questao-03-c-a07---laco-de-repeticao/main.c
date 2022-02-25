//Calcule a média de idades de uma turma de 30 alunos;

#include<stdio.h>

main()

{
    int i, idade, cont=0;
    float media;
    
    for(i=1;i<=30;i++)
    {
        printf("Digite a idade\n");
        scanf("%d",&idade);
    cont = cont + idade;
    media = cont/30;
    }
    printf("Média de idades da Turma: %d",media);
}