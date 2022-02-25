// Ler 2 valores (A e B) efetuar a troca dos valores de forma que A vire B e vice versa 

#include <stdio.h>

main()

{
    float A,B,x;
    printf("Digite um valor para A\n");
    scanf("%f",&A);
    printf("Digite um valor para B\n");
    scanf("%f",&B);
    x = A;
    A = B;
    B = x;
   
    printf("O novo valor de A = %.1f\nO novo valor de B = %.1f",A,B);
}
