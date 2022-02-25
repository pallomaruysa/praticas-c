// Fazer um algorítimo que leia seu salário fixo e o total de vendas efetuadas no mês (15% de comissão/venda). Informar salário fixo e salário no final do mês.  

#include <stdio.h>

main()

{
    float SF, TV, ST;
    printf("Digite seu salário fixo\n");
    scanf("%f", &SF);
    printf("Digite o total de vendas efetuadas\n");
    scanf("%f", &TV);
    ST = SF + (TV * 15)/100;
    printf("Seu salário fixo = %.2f\nSeu salário no final do mês = %.2f", SF,ST);
}