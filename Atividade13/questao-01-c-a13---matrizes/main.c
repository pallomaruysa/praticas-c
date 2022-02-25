//Leia 2 matrizes bidimensionais (2,2). Adicione valores a essas matrizes e depois imprima na tela os valores de cada uma.

#include<stdio.h>

main()

{
    int mat1[2][2],i,j, mat2[2][2],r,s;
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Digite um valor para a primeira tabela\n");
            scanf("%d", &mat1[i][j]);
        }
    }
    for(r=0;r<2;r++)
    {
        for(s=0;s<2;s++)
        {
            printf("Digite um valor para a segunda tabela\n");
            scanf("%d", &mat2[r][s]);
        }
    }
    
    printf("Primeira Tabela (i,j)\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",mat1[i][j]);
            
        }
    }
    printf("\n");
    printf("Seguda Tabela (r,s)\n");
    
    for(r=0;r<2;r++)
    {
        for(s=0;s<2;s++)
        {
            printf("%d\t",mat2[r][s]);
        }
    }
}