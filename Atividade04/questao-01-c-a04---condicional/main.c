//Leia um valor e diga se é maior, menor ou igual a 50

#include<stdio.h>

main()

{
    float v;
    printf("Digite um valor\n");
    scanf("%f", &v);
    
    if (v>50)
    {
        printf("Esse valor é maior que 50.");
    }
    else
    if (v<50)
    {
        printf("Esse valor é menor que 50.");
    }
    else
    {
        printf("Esse valor é igual a 50.");
    }
}