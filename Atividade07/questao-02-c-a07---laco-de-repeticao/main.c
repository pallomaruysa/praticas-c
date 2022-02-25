//Leia a idade de 50 pessoas e diga quantas são maiores de idade

#include<stdio.h>

main()
{
    int i, idade, Tmi=0; // Tmi = Total de maiores de idade
    for(i=1;i<50;i++)
    {
        printf("Digite sua idade\n");
        scanf("%d", &idade);
        
        if (idade<18)
        {
            printf("Menor de idade: %d\n",idade);
        }
        else
        {
            Tmi++;
            printf("Maior de idade: %d\n",idade);
        }
    }
    
    printf("Essa é a quantidade de maiores de idade: %d",Tmi);


}