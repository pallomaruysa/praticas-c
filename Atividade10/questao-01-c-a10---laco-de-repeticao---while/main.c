// Leia o ano de nascimento de 20 pessoas; diga se é maior ou menor de idade;

#include<stdio.h>

main()
{
    int i=0, an, at, idade;
    
    while(i<20)
    {
        printf("Digite o ano de nascimento\n");
        scanf("%d", &an);
        
        printf("Digite o ano atual\n");
        scanf("%d", &at);
        
        idade = at - an;
        
        if(idade<18)
        {
            printf("Essa pessoa é menor de idade: %d\n anos", idade);
        }
        else
        {
            printf("Essa pessoa é maior de idade: %d\n anos", idade);
        }
        
        i++;
    }
}
