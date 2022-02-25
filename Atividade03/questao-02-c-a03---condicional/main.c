// Leia dois números e diga qual é o menor

#include <stdio.h>

main()

{
    float n1, n2;
    printf("Digite um número\n");
    scanf("%f",&n1);
    printf("Digite um outro número\n");
    scanf("%f",&n2);
    
    if (n1>n2)
    {
        printf("Esse é o menor número: %.2f",n2);
    }
    else
    {
        printf("Esse é o menor número: %.2f",n1);
    }
}
