// guarde 10 valores inteiros em um vetor;

#include <stdio.h>

int main()
{
    int x[10], i;
    
    for(i=0;i<10;i++)
    {
        printf("Digite um valor inteiro\n");
        scanf("%d", &x[i]);
    }
    printf("\n");
    printf("Valores do vetor:\n");
    
    for(i=0;i<10;i++)
    
    {
        printf("Vetor: %d\t",i);
        printf("Número:%d\n", x[i]);
    }
    
    
}

