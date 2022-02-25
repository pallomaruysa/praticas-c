// leia dois valores e mostre em ordem decrescente.

#include<stdio.h>

main ()

{
    float v1, v2;
    printf("Digite um valor\n");
    scanf("%f",&v1);
    printf("Digite um valor\n");
    scanf("%f",&v2);
    
    if(v1>v2)
    {
        printf("Os valores na ordem decrescente ficam: %.1f, %.1f", v1, v2);
    }
    
    else
    
    if(v1<v2)
    {
         printf("Os valores na ordem decrescente ficam: %.1f, %.1f", v1, v2);
    }
    
    else
    {
        printf("Os valores são iguais: %.1f = %.1f", v1, v2);
    }
}