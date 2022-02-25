//Leia 2 notas; calcule a média de cada um; diga se está aprovado ou reprovado;

#include<stdio.h>

main()

{
    int n1, n2, media, cursos;
    
    printf("Digite sua nota\n");
    scanf("%d", &n1);
    printf("Digite sua nota\n");
    scanf("%d", &n2);
    
    printf("Escolha o seu curso digitando o número que o acompanha\n");
    printf("1- Sistema de Informação: Média 7,0\n");
    printf("2- Administração: Média 5,0\n");
    printf("3- Fisioterapia: Média 8,0\n");
    printf("4- Direito: Média 9,0\n");
    scanf("%d", &cursos);
    
    media = (n1+n2)/2;
    
    switch(cursos)
    {
        case 1: 
            printf("Curso: Sistema de Informação; Média = %d\n", media);
            
                if (media>=7)
                {
                    printf("Parabéns, você está aprovado :-D");break;
                }
                else
                {
                    printf("Que pena, você está reprovado :-("); break;
                }
        case 2: 
            printf("Curso: Administração; Média = %d\n", media);
            
                if (media>=5)
                {
                    printf("Parabéns, você está aprovado :-D");break;
                }
                else
                {
                    printf("Que pena, você está reprovado :-(");break;
                }
        case 3: 
            printf("Curso: Fisioterapia; Média = %d\n", media);
            
                if (media>=8)
                {
                    printf("Parabéns, você está aprovado :-D"); break;
                }
                else
                {
                    printf("Que pena, você está reprovado :-("); break;
                }
        case 4: 
            printf("Curso: Direito; Média = %d\n", media);
            
                if (media>=9)
                {
                    printf("Parabéns, você está aprovado :-D"); break;
                }
                else
                {
                    printf("Que pena, você está reprovado :-("); break;
                }
        default:
            printf("Opção Inválida");
          
    }
}
