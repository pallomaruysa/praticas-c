#include <stdio.h>

main()
{
    float n1, n2;
    printf("Digite um valor\n");
    scanf("%f",&n1);
    printf("Digite um valor\n");
    scanf("%f",&n2);
    printf("O primeiro valor, %.0f, é dividido por 2 = %.2f\n",n1,n1/2);
    printf("O segundo valor, %.0f, é multiplicado por 3 = %.2f\n",n2,n2*3);
}