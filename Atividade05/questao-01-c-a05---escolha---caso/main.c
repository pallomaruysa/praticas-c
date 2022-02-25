// Receba dois números; no final mostrar soma, subtração, multiplicação e divisão; de acordo com a opção escolhida;

#include<stdio.h>

main()

{
    int n1,n2,oper;
    printf ("Digite um número inteiro\n");
    scanf ("%d", &n1);
    printf ("Digite um número inteiro\n");
    scanf ("%d", &n2);
    
    printf ("1- Caso deseje somá-los\n");
    printf ("2- Caso deseje subtraí-los\n");
    printf ("3- Caso deseje multiplicá-los\n");
    printf ("4- Caso deseje dividi-los\n");
    scanf ("%d", &oper);
    
    switch(oper)
    {
        case 1: 
            printf ("Soma: %d + %d = %d", n1, n2, n1+n2); break;
            
        case 2: 
            printf ("Subtração: %d - %d = %d", n1, n2, n1-n2); break;
        
        case 3: 
            printf ("Multiplicação: %d x %d = %d", n1, n2, n1*n2); break;
        
        case 4: 
            printf ("Divisão: %d / %d = %d", n1, n2, n1/n2); break;
        
        default:
            printf ("Opção Inválida");
    }

    
}