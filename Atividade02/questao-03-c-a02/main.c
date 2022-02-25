// Ler a temperatura em Celsius e mostrar a conversão em Fahrenheit (F=9*C+160)/5

#include <stdio.h>

main()

{
    float C,F;
    printf("Digite a temperaura em Celsius\n");
    scanf("%f",&C);
    F = (9*C+160)/5;
    printf("A temperatura em Celsius = %.1f \nA temperatura em Fahrenheit = %.1f",C,F);
    
}