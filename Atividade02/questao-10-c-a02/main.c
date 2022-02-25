// Receba a quantidade de horas trabalhadas durante o mês e calcule o salário mensal(hora trabalhada = R$35,00)

#include <stdio.h>

main()

{
    float quant;
    printf("Digite a quantidade de horas trabalhadas no mês\n");
    scanf("%f", &quant);
    printf("Esse é o salário mensal: R$ %.2f", quant*35);
}