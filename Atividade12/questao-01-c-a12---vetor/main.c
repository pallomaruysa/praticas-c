// Leia 50 números e mostre a média dos valores existentes no intervalo de 10 e 150

#include <stdio.h>

main()
{
    int i, x[5], cont=0;
    float soma=0, media;
    
    for(i=0;i<5;i++)
    {
        printf("Digite um valor inteiro\n");
        scanf ("%d", &x[i]);
    }
    
    printf("Números entre 10 e 150:\n");
    
    for(i=0;i<5;i++)
    {
        if(x[i]>10 && x[i]<150)
        {
            cont++;
            soma = soma + x[i];
            printf("%d\n",x[i]);
        }
    }
    media = soma/cont;
    printf("Média dos números entre 10 e 150: %.2f\n", media);
   
    
}
