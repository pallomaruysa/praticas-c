// leia um vetor e 6 posições e mostre a soma dos números ímpares;

#include <stdio.h>

int main()
{
    int x[6], i, soma=0;
    
    for(i=0;i<6;i++)
    {
        printf("Digite um valor inteiro\n");
        scanf("%d", &x[i]);
    }
    
    for(i=0;i<6;i++)
    {
        if(x[i]%2==1)
        {
            soma = soma + x[i];
        }
        
    }
    
    printf("\n");
    printf("A soma dos números ímpares: %d\n",soma);

     
}
