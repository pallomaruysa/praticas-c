// Leia 10 valores e guarde em um vetor; crie mais dois vetores Cubo e Quadrado e preencha com os valore do primeiro vetor; calcule o cubo dos valores do primeiro vetor e guarde em Cubo; faça o mesmo com  o Quadrado;


#include <stdio.h>

main()
{
    int i, x[5], cubo[5], quadrado[5];
    
    for(i=0;i<5;i++)
    {
        printf("Digite um valor inteiro\n");
        scanf ("%d", &x[i]);
    }
    
    for(i=0;i<5;i++)
    {
        cubo[i] = x[i]*x[i]*x[i];
        quadrado[i] = x[i]*x[i];
    }
    
    printf("Primeiro Vetor\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",x[i]);
    }
    
    printf("Vetor Cubo\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",cubo[i]);
    }
    
    printf("Vetor Quadrado\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",quadrado[i]);
    }




}
