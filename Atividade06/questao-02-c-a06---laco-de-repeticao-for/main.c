// Leia 20 números; verifique se é par ou ímpar;

#include<stdio.h>

main()

{
    int i, n;
    
    for (i=1;i<=20;i++)
    {
    printf("Digite um número\n");
    scanf("%d", &n);
    
        if (n%2==0)
        {
            printf("Esse número é par: %d\n", n);
        }
        else
        {
            printf("Esse número é ímpar: %d\n", n);
        }
    }
}