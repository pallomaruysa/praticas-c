// Leia dois valores e diga quem é o maior ou se são iguais.

#include <stdio.h>

main ()

{
    float v1, v2;
    printf("Digite um valor\n");
    scanf("%f",&v1);
    printf("Digite um valor\n");
    scanf("%f",&v2);
    
    if(v1>v2)
    {
        printf("O primeiro valor é o maior: %.1f",v1);
    }
    
    else
    
    if(v1<v2)
    {
        printf("O segundo valor é o maior: %.1f",v2);
    }
    
    else
    {
        printf("Os dois valores são iguais: %.1f = %.1f",v1,v2);
    }
    
}