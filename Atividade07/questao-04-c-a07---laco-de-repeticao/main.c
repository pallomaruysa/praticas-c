// Leia 15 valores inteiros; mostre a soma dos pares e a quantidade de ímpares;

#include<stdio.h>

main()
{
    int i, n, par=0, impar=0;
    for(i=1;i<=15;i++)
    {
        printf("Digite um número inteiro\n");
        scanf("%d",&n);
        
        if(n%2==0)
        {
            par = par+n;
        }
        
        else
        {
            impar++;
        }
    }
    printf("A soma de todos os pares: %d\n",par);
    printf("A quantidade de todos os ímpares: %d",impar);
}