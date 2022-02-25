// Receba a idade de 75 pessoas; mostre a mensagem "maior de idade" e "menor de idade"; >=18 - maior de idade

#include<stdio.h>

main ()

{
    int i, idade;
    for(i=1;i<=75;i++)
    {
        printf("Digite a idade\n");
        scanf("%d", &idade);
        
        if(idade<18)
        {
            printf("Essa pessoa é menor de idade: %d anos\n", idade);
        }
        else
        {
            printf("Essa pessoa é maior de idade: %d anos\n", idade);
        }
    }
    
}