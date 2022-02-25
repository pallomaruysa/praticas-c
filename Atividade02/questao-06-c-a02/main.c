// Fazer um algorítimo que receba o ano de nascimento e mostre a idade

#include <stdio.h>

main()

{
    float AT,AN,IDADE;
    printf("Digite o ano atual\n");
    scanf("%f",&AT);
    printf("Digite o seu ano de nascimento\n");
    scanf("%f",&AN);
    IDADE = AT - AN;
    printf("Sua idade é %.0f.", IDADE);
}