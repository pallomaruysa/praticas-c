// Mostre a soma dos valores que estão no intervalo entre 100 e 200; incluindo as extremidades;
#include<stdio.h>
main()
{
    int i, soma;
    
    for(i=100;i<=200;i++)
    
    {
       soma = soma + i;
    }
    printf("A soma da sequência de números é: %d", soma);
}