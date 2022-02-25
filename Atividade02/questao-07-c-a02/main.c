// Recebe um valor inteiro e mostre o dobro e triplo desse valor

#include <stdio.h>

main()

{
    int n1;
    printf("Digite um número inteiro\n");
    scanf("%d", &n1);
    printf("O dobro desse valor: %d x 2 = %d \nO triplo desse valor: %d x 3 = %d",n1, n1*2, n1, n1*3);
}