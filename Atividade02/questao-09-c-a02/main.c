// Receba o valor de um produto e mostre ele em 10% de desconto

#include <stdio.h>

main()

{
    float VP,desc;
    printf("Digite o valor do produto\n");
    scanf("%f",&VP);
    desc = VP - ((VP * 10)/100);
    printf("Esse produto tem um desconto de 10%, ficando agora no valor de %.2f",desc);
}