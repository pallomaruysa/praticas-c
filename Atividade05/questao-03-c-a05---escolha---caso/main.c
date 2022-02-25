//Escolha do usuário; Área do quadrado; Área do triângulo; Área do retângulo; Cubo de um número;

#include<stdio.h>

main()
{
    int op, L, B, H, C;
    
    printf("Escolha uma opção\n");
    printf("1- Área do quadrado\n");
    printf("2- Área do triângulo\n");
    printf("3- Área do retângulo\n");
    printf("4- Cubo de um número\n");
    scanf("%d",&op);
        
    switch(op)
    {
        case 1: 
            printf("Digite o valor de um dos lados do quadrado\n");
            scanf("%d",&L);
            printf("Área do quadrado: %d", L*L); break;
        case 2: 
            printf("Digite o valor da base do triângulo\n");
            scanf("%d",&B);
            printf("Digite o valor da altura do triângulo\n");
            scanf("%d",&H);
            printf("Área do triângulo: %d", (B*H)/2); break;
        case 3: 
            printf("Digite o valor da base do retângulo\n");
            scanf("%d",&B);
            printf("Digite o valor da altura do retângulo\n");
            scanf("%d",&H);
            printf("Área do triângulo: %d", B*H); break;
        case 4: 
            printf("Digite o valor que deseja elevar ao cubo\n");
            scanf("%d",&C);
            printf("Número ao cubo: %d", C*C*C); break;
        
        default: 
            printf("Opção Inválida");
    
    }

}



