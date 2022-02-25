/******************************************************************************

Elabore um programa em C que possua um vetor de números inteiros com 20 posições.
Utilizando funções resolva as seguintes questões:

a) Crie uma função para preencher o vetor com os 20 valores inteiros (0,5)
b) Crie uma função que mostre a quantidade de valores existentes no vetor que sejam maiores
que 10(Utilizar return) (1,0)
c) Crie uma função de nome MENOR que retorne o menor valor existente no vetor (Utilizar
return) (1,0)
d) Crie uma função que mostre os valores pares e impares existentes no vetor. (1,0)
e) Crie uma função que receba um número inteiro vindo do main() e retorne quantos valores
existentes no vetor são maiores que esse número (Utilizar return) (1,5)

*******************************************************************************/
#include <stdio.h>

int vet [20];

void preencher()
{ 
    for(int i=0; i<20; i++)
    {
        printf("Digite o valor\n");
        scanf("%d", & vet[i]);
    }
}

int quantidade()
{
    int quant=0;
    for(int i=0; i<20; i++)
    {
        if(vet[i]> 10)
        {
            quant++;
        }
    }
    return quant;
}

int menor()
{
    int menor = vet[0];
    for(int i=0; i<20; i++)
    {
        if(vet[i]< menor)
        {
            menor = vet[i];
        }
    }
    return menor;
}

void paresImpares()
{
    for(int i=0; i<20; i++)
    {
        if(vet[i]%2==0)
        {
            printf("Esse valor %d é par\n", vet[i]);
        }
        else
        {
            printf("Esse valor %d é impar\n", vet[i]);
        }
    }
}

int numero(int n)
{
    int x=0;

    for(int i=0; i<20; i++)
    {
        if (vet[i]> n)
        {
            x++;
        }
    }
    return x;
}

int main()
{

    preencher();
    quantidade();
    printf("\n");
    printf("A quantidade de valores existentes no vetor maior que 10: %d\n\n", quantidade());
    menor();
    printf("O menor valor existente no vetor: %d\n\n", menor());
    paresImpares();
    numero (10);
    printf("\n");
    printf("A quantidade de valores existentes no vetor maiores que o do main (10): %d\n", numero(10));
}
