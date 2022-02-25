//Receba um valor e valor de compra; mostre as prestações (5, 10, 12 e 24);

#include<stdio.h>

main()

{
    int v, prest;
    printf ("Digite o valor da compra\n");
    scanf("%d",&v);
    
    printf("1-Caso você queira 5 prestações sem juros\n");
    printf("2-Caso você queira 10 prestações sem juros\n");
    printf("3-Caso você queira 12 prestações sem juros\n");
    printf("4-Caso você queira 24 prestações sem juros\n");
    scanf("%d",&prest);
    
    switch(prest)
    {
        case 1:
            printf("Sua compra com 5 prestações ficará: %d / 5 = %d", v, v/5);
        case 2:
            printf("Sua compra com 10 prestações ficará: %d / 10 = %d", v, v/10);
        case 3:
            printf("Sua compra com 12 prestações ficará: %d / 12 = %d", v, v/12);
        case 4: 
            printf("Sua compra com 24 prestações ficará: %d / 24 = %d", v, v/24);
        default:
            printf("Operação Inválida");
    }
   
    
}
