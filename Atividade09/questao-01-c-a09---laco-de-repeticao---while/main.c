//Leia 20 números; mostrar o maior número digitado;

#include<stdio.h>

main()

{
    int i=1, n, maior;
    while(i<=5)
    {
        printf("Digite um número\n");
        scanf("%d", &n);
        
        if(n>maior)
        {
            maior = n;
        }
        else
        {
            maior = maior;
        }
        
        i++;
        }
    printf("Maior número: %d\n", maior);
}