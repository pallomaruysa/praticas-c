// Receba 20 números; mstre positivo, negativo ou zero;

#include<stdio.h>

main()
{
    int i,n;
    
    for(i=1;i<=2;i++)
    {
        printf("Digite um número\n");
        scanf("%d", &n);
        
        if(n<0)
        {
            printf("Esse número é negativo\n");
        }
        
        else
        {
            if(n=0)
            {
                printf("Esse número é 0\n");
            }
            else
            {
                printf("Esse número é positivo\n");
            }
        }
     
    }
}