// Leia o ano de nascimento de 20 pessoas e diga se é maior ou menor de idade.

#include<stdio.h>

main()

{
    int i, at, an, idade;
    for(i=1;i<=20;i++)
    {
        printf("Digite o ano atual\n");
        scanf("%d", &at);
        printf("Digite seu ano de nascimento\n");
        scanf("%d", &an);
        
        idade = at-an;
        
        if(idade<18)
        {
            printf("Menor de idade: %d\n", idade);
        }
        
        else
        {
            printf("Maior de idade: %d\n", idade);
        }
        
    }
}