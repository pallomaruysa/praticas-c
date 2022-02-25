//Leia 2 matrizes bidimensionais (4,4). Adicione valores a essas matrizes. Some as duas matrizes e adicione em outra matriz. Imprima a matriz com o resultado.

#include<stdio.h>

main()
{
    int mat1[4][4],i,j, mat2[4][4],r,s, mat3[0][0],m,n, soma=0, soma2=0, somat;
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Digite um valor para a primeira tabela\n");
            scanf("%d", &mat1[i][j]);
        }
    }
    for(r=0;r<4;r++)
    {
        for(s=0;s<4;s++)
        {
            printf("Digite um valor para a segunda tabela\n");
            scanf("%d", &mat2[r][s]);
        }
    }
    
    printf("Primeira Tabela (i,j)\n");
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",mat1[i][j]);
            soma = soma + mat1[i][j];
        }
    }
    printf("\n");
    printf("Seguda Tabela (r,s)\n");
    
    for(r=0;r<4;r++)
    {
        for(s=0;s<4;s++)
        {
            printf("%d\t",mat2[r][s]);
            soma2 = soma2 + mat2[r][s];
        }
    }
    
    somat = soma + soma2;
    mat3[m][n] = somat;
    printf("\n");
    printf("Soma das Matrizes: %d",mat3[m][n]);
            
    

}
