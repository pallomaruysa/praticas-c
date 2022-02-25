// Some dois números e diga se o resultado é par ou impar

#include <stdio.h>

main()
{
    int n1,n2,s;
    printf("Digite um número inteiro e diferente de 0\n");
    scanf ("%d", &n1);
    printf("Digite um número inteiro e diferente de 0\n");
    scanf ("%d", &n2);
    s = n1+n2;
    
    if (s%2==0)
    {
        printf("A soma desses números é par: %d", s);
    }
    else
    {
        printf("A soma desses números é ímpar: %d", s);
    }
}