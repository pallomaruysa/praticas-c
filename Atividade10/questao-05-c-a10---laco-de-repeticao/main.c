//Mostre a soma dos valores que estão no intervalo entre 100 e 200; 

#include<stdio.h>

main()
{
    int i=100, soma=0;
    while(i<=200)
    {
        soma = soma + i;
    i++;
    }
    printf("A soma de todos os valores de 100 a 200: %d\n", soma);
}