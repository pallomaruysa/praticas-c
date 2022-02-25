/* Receba idade e quantidade de livros, ano 2016; Leia os dados de 100 pessoas; calcule: 

a) A quantidade de pessoas que leram 5 livros ou mais;
b) A média de idade da pessoas que leram menos de 5 livros;
c) A quantidade total de livros lidos pelos entrevistados menores de 10 anos.*/


#include <stdio.h>

main()
{
    int i, idade, quantlivros,soma1=0, soma2=0;
    float media,quant1=0, quant2=0;
    for(i=1;i<=2;i++)
    {
    printf("Digite a idade\n");
    scanf("%d", &idade);
    printf("Digite a quantidade de livros lidos em 2016\n");
    scanf("%d", &quantlivros);
    
    if(quantlivros>=5)
    {
        quant1++;
    }
    else
    {
        quant2++;
        soma1 = soma1+idade;
        media = soma1/quant2;
    }
    if(idade<10)
    {
        soma2 = soma2 + quantlivros;
    }
    
    }
    
    printf("A quantidade de pessoas que leram 5 livros ou mais: %.2f\n", quant1++);
    printf("A média de idade da pessoas que leram menos de 5 livros: %.2f\n", media);
    printf("A quantidade total de livros lidos pelos entrevistados menores de 10 anos\n: %d", soma2);
    
    
}

