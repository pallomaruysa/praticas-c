// Leia um vetor de 10 posições e mostre a quantidade de números pares;

#include <stdio.h>

int main()

{
    int x[10], i, cont=0;
    
    for(i=0;i<10;i++)
    {
        printf("Digite um valor inteiro\n");
        scanf ("%d", &x[i]);
    }
    
    for(i=0;i<10;i++)
    {
       if(x[i]%2==0)
       {
           cont++;
       }
    }
    
    printf("\n");
    printf("Quantidade de números pares: %d\n", cont);
}
