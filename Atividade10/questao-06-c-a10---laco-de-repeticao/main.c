// Leia a altura de 20 pessoas; altura da pessoa mais baixa;

#include<stdio.h>

main()
{
    int i;
    float altura, menor=0;
    i=1;
    while(i<=20)
    {
        printf("Valor da altura menor: %.2f\n", menor);
        printf("Ordem digitada: %d\n", i);
        
        
        printf("Digite a altura da pessoa\n");
        scanf("%f", &altura);
        
        if(i==1)
        {
            menor = altura;
        }
        else
        {
            if(altura<menor)
            {
                menor = altura;
            }
            else
            {
                menor = menor;
            }
            
        }
        
        i++;
    }
    printf("A altura menor = %.2f", menor);
}
