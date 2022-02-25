// Loja vendendo a 5 prestações sem juros. Faça um algorítimo que receba um valor de uma compra e mostre o valor das prestações. 

#include <stdio.h>

main()

{
    float VC;
    printf("Digite o valor das compras\n");
    scanf("%f",&VC);
    printf("O valor total das compras = %.2f, com as 5 prestações = %.2f",VC,VC/5);
}
