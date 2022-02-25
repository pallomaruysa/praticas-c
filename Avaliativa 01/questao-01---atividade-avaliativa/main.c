/*Foi feita uma pesquisa entre os 300 pessoas sobre os times que cada um torce.
Foi perguntado para qual time da cidade eles torciam (1-Flamengo 2 – Vasco 3 – Botafogo 4 –
Fluminense).
Faça um algoritmo que leia as informações coletadas e mostre as seguintes informações:
a) o time mais votado
b) a quantidade de torcedores do Flamengo;
c) a diferença de votos entre Vasco e Fluminense.*/

#include<stdio.h>

main()
{
    int i, times, flam=0, vas=0, bota=0, flum=0, maior;
    for(i=0;i<300;i++)
    {   
        printf("\n");
        printf("Escolha o time que você torce:\n\n");
        printf("1-Flamengo;\n");
        printf("2-Vasco;\n");
        printf("3-Botafogo;\n");
        printf("4-Fluminense;\n\n");
        scanf("%d",&times);
        
        switch(times)
        {
            case 1:
                printf("Seu time favorito é o Flamengo!\n"); 
                flam++;
                if((flam>vas) && (flam>bota) && (flam>flum))
                {
                    printf("O time mais votado foi o Flamengo\n");
                }
                break;
                
            case 2: 
                printf("Seu time favorito é o Vasco!\n"); 
                vas++;
                if((vas>flam) && (vas>bota) && (vas>flum))
                {
                    printf("O time mais votado foi o Vasco\n");
                }
                break;
                
            case 3: 
                printf("Seu time favorito é o Botafogo!\n"); 
                bota++;
                if((bota>flam) && (bota>vas) && (bota>flum))
                {
                    printf("O time mais votado foi o Botafogo\n");
                }
                break;
            case 4: 
                printf("Seu time favorito é o Fluminense!\n"); 
                flum++;
                if((flum>flam) && (flum>vas) && (flum>bota))
                {
                    printf("O time mais votado foi o Fluminense\n");
                }
                break;    
            default:
                printf("Opção Inválida, escolha novamente.\n");
        }

        
    }
    printf("\n");
    printf("A quantidade de torcedores do Flamengo: %d\n", flam);
    printf("A diferença de votos entre Vasco e Fluminense: %d\n", vas - flum);
    printf("Obs.: Se o valor sair negativo, apenas ignore o sinal (-).");
}
 
