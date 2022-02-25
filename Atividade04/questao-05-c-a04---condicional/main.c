// Leia dois valores; diga qual é o maior e menor ou se são iguais

#include <stdio.h>

main()

{
    float v1,v2;
    printf("Digite um valor\n");
    scanf("%f", &v1);
    printf("Digite um valor\n");
    scanf("%f", &v2);
    
    if(v1>v2)
    {
        printf("Esse é o maior valor: %.1f e esse é o menor: %.1f",v1, v2);
    }
    
    else
    
    if(v1<v2)
    {
        printf("Esse é o maior valor: %.1f e esse é o menor: %.1f",v2, v1);
    }
    
    else
    {
        printf("Esses valores são iguais: %.1f = %.1f",v2, v1);
    }
}