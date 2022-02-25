// Leia a idade dos 100 primeiros ao acessar o site; informe a quantidade de pessoas menores de idade e a média das maiores de idade

#include <stdio.h>

main()
{
    int i, x[5], cont=0, cont2=0;
    float soma=0, media;
    
    for(i=0;i<5;i++)
    {
        printf("Digite a idade\n");
        scanf("%d", &x[i]);
    }
    
    for(i=0;i<5;i++)
    
    {
        if(x[i]<18)
        {
            cont++;
        }
        
        else
        {
            soma = soma + x[i];
            cont2++;
        }
    }
    media = soma/cont2;
    
    printf("Quantidade dos menores de idade: %d\n", cont);
    printf("\n");
    printf("Média dos maiores de idade: %.2f\n", media);

}
