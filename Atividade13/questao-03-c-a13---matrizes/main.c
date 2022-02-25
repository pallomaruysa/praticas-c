//leia 2 matrizes bidimensionais (6,6). Adicione valores a essas matrizes. Some as duas matrizes e adicione em outra matriz. Verifique se os números da matriz resultado são pares ou impares e imprima na tela.

#include<stdio.h>

main()
{
    int mat1[2][2],i,j, mat2[2][2],r,s, mat3[0][0],m,n, soma=0, soma2=0, somat;
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Digite um valor para a primeira tabela\n");
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("\n\n");
    
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
            soma = soma + mat1[i][j];
        }
    }
    printf("\n");
    printf("Seguda Tabela (r,s)\n");
    
    for(r=0;r<2;r++)
    {
        for(s=0;s<2;s++)
        {
            printf("%d\t",mat2[r][s]);
            soma2 = soma2 + mat2[r][s];
        }
    }
    
    somat = soma + soma2;
    mat3[m][n] = somat;
    
    
    printf("\n");
    printf("A soma das Matrizes (Matriz 3) = %d;\n",mat3[m][n]);
    
    if (mat3[m][n]%2==0)
    {
         printf("A  Matriz 3 é par.");
    }
    
    else
    {
         printf("A Matriz 3 é ímpar.");
    }
    
           
}