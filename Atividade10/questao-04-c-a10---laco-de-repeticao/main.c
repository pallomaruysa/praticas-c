// Leia 15 valore inteiros; soma dos pares; quantidade dos impares;

#include<stdio.h>

main()
{
    int i=0, n1, soma=0, cont=0;
    
    while(i<15)
    {
        printf("Digite um número inteiro\n");
        scanf("%d", &n1);
        
        if(n1%2==0)
        {
            soma = soma + n1;
        }
        else
        {
            cont++;
        }
        
        i++;
    }
    printf("A soma dos números pares: %d\n", soma);
    printf("A quantidade dos números impares: %d\n", cont);
}