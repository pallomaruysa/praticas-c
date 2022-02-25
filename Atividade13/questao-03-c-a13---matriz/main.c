//Leia 2 matrizes (6,6); adicione valores a essas matrizes; some essas matrizes e adicione em outra maatriz; verifique e mostre se os números dessa matriz resultado são pares ou ímpares 


#include <stdio.h>

main()
{
    int a[2][2], b[2][2], c[2][2], i,j;
    
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Digite um valor para a linha %d e coluna %d da Primeira Matriz\n",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Digite um valor para a linha %d e coluna %d da Segunda Matriz\n",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("\n");
    printf("Soma dos valores da Primeira e Segunda Matriz\n");
    
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            
        }
    }
     for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           if(c[i][j]%2==0)
           {
                printf("A soma desses valores é par: %d\n", c[i][j]);
           }
           else
           {
                printf("A soma desses valores é ímpar: %d\n", c[i][j]);
           }
            
        }
    }
    
    
}
