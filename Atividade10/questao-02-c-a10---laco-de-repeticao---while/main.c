// leia a idade de 50 pessoas; diga quantos são maiores de idade;

#include<stdio.h>

main()
{
    int i=0, idade, cont=0;
    
    while(i<2)
    {
        printf("Digite a idade da pessoa\n");
        scanf("%d", &idade);
        
        if(idade<18)
        {
            printf("Esse é menor de idade: %d anos\n\n\n",idade);
        }
        else
        {
            cont++;    
            printf("Esse é maior de idade: %d anos\n\n\n",idade);
        }
       
        i++;
    }
     printf("Essa é a quantidade de maiores de idade: %d",cont);

}
