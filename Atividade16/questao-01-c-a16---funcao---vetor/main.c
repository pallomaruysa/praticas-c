//Guarde 10 valores inteiros em um vetor;

#include <stdio.h>

int vetor(int a [10])
{
    int i;
    
    for(i=0;i<10;i++)
    {
        printf("Digite um valor inteiro\n");
        scanf("%d", & a[i]);
    }
   
}

main()
{
    int i, x[10];
    
   vetor(x);
}
