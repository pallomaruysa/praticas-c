// Faça um algorítimo que receba dois números e ao final mostre a soma, a subtração, a multiplicação e divisão dos valores lidos.

#include <stdio.h>

main ()
{
    float n1,n2,s,sub,mult,divi;
    printf("Digite um número\n");
    scanf("%f", &n1);
    printf("Digite um número\n");
    scanf("%f", &n2);
    s = n1+n2;
    sub = n1-n2;
    mult = n1*n2;
    divi = n1/n2;
    printf("A soma desses números = %.2f\n A subtração desses números = %.2f\n A multiplicação desses números = %.2f\n A divisão desses números = %.2f\n",s,sub,mult,divi);
}

