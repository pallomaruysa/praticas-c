// Somar os números pares < 1000; mostrar o resultado;

#include<stdio.h>

main ()

{
    int i=0, soma;
    
    while (i<1000)
    {
        printf("A ordem dos números: %d;\n", i);
        if(i%2==0)
        {
            soma = soma+i;
        }
        else
        {
            soma = soma;
        }
        
        i++;
    }
    printf("A soma dos números pares é: %d\n", soma);
}