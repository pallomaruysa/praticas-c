// Leia a altura de 20 pessoas; diga a altura da pessoa mais baixa;

#include<stdio.h>

main()

{
    float altura, menor=0;
    int i;
    
    for(i=1;i<=20;i++)
    
    {
        printf("Digite a altura\n");
        scanf("%f",&altura);
        
        if(i==1)
        {
           menor = altura;
        }
        else
        {
            if (altura<menor)
            {
                menor = altura;
            }
            else
            {
                menor = menor;
            }
        }
    }
    printf("A altura menor = %.2f\n", menor);
}