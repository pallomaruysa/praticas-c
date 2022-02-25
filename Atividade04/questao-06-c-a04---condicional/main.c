//Receba valores de 1 a 7; 1 domingo e assim por diante até 7 sábado.

#include<stdio.h>

main()

{
    int v;
    printf("Digite um número de 1 a 7\n");
    scanf("%d",&v);
    
    if (v==1)
    
    {
        printf("Domingo: %d",v);
    }
    
    else
    
    if (v==2)
    {
        printf("Segunda - Feira: %d",v);
    }
    
    else
    
    if (v==3)
    {
        printf("Terça - Feira: %d",v);
    }
    
    else
    
    if (v==4)
    {
        printf("Quarta - Feira: %d",v);
    }
    
    else
    
    if (v==5)
    {
        printf("Quinta - Feira: %d",v);
    }
    
    else
    
    if (v==6)
    {
        printf("Sexta - Feira: %d",v);
    }
    
    else
    
    if (v==7)
    {
        printf("Sábado: %d",v);
    }
    
    else
    {
        printf("Código Inválido: %d - Digite um número de 1 a 7",v);
    }
}
