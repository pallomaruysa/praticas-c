// Leia um vetor de 20 posições e mostre a posição dos números pares;

#include <stdio.h>

int main()
{
    int x[5], i;
    for(i=0;i<5;i++)
    {
        printf("Digite um valor inteiro\n");
        scanf("%d", &x[i]);
    }
    
    printf("Posições dos números pares:\n");
    
    for(i=0;i<5;i++)
    {
        if(x[i]%2==0)
        {
            
            printf("Vetor: %d\t",i);
            printf("Número: %d\n",x[i]);
        }
        
    }

}
