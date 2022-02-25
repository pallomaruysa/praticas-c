// leia dois valores; mostre o maior multplicado por 5 e o  menor multplicado por 10 ; caso iguais mostre

#include<stdio.h>

main()

{
    float v1,v2;
    printf("Digite um valor\n");
    scanf("%f", &v1);
    printf("Digite um valor\n");
    scanf("%f", &v2);
    
    if (v1>v2)
    {
        printf("O valor maior será multplicado por 5: %.1f x 5 = %.1f\n",v1, v1*5);
        printf("O valor menor será multplicado por 10: %.1f x 10 = %.1f",v2, v2*10);
    }
    
    else
    
    if (v1<v2)
    {
        printf("O valor maior será multplicado por 5: %.1f x 5 = %.1f\n",v2, v2*5);
        printf("O valor menor será multplicado por 10: %.1f x 10 = %.1f",v1, v1*10);
    }
    
    else
    {
        printf("Os valores são iguais %.1f = %.1f", v1, v2);
        
    }
}