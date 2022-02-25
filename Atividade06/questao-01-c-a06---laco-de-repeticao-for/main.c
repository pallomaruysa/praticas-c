// Cakcule a média de 2 notas; 10 alunos; (for)

#include<stdio.h>

main ()
{
    int i;
    float n1, n2, media;
    
    for(i=1;i<=10;i++)
    {
    printf("Digite a nota do aluno\n");
    scanf("%f", &n1);
    printf("Digite a nota do aluno\n");
    scanf("%f", &n2);
    
    media = (n1 + n2)/2;
    
    printf("Média do aluno: %.2f\n", media);
    }
}