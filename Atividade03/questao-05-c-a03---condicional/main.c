//Leia um número inteiro e diga se é negativo ou positivo

#include<stdio.h>

main()

{
    float n1;
    printf("Digite um número\n");
    scanf("%f",&n1);
    
    if(n1>0)
    {
        printf("Esse número é positivo: %.1f\n",n1);
    }
    else
    {
        printf("Esse número é negativo: %.1f", n1);
    }
}