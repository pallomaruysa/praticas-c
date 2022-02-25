// Leia dois nC:meros inteiros, multiplicando o primeiro por 4 e o segundo por 3 e depois mostre

#include<stdio.h>

main ()
{
  float n1, n2;
  printf ("Digite um número\n");
  scanf ("%f", &n1);
  printf("Digite um número\n");
  scanf("%f", &n2);
  printf("O primeiro será multiplicado por 5: %.1f x 5 = %.1f\n",n1,n1*5);
  printf("O segundo será multiplicado por 3: %.1f x 3 = %.1f",n2,n2*3);
  
}
