/*Faça um algoritmo que leia a idade dos habitantes de uma cidade e determine:
- a maior idade dos habitantes
- a quantidade de indivíduos entre 18 e 35 anos
O algoritmo deve solicitar ao usuário que digite a idade e vá guardando os dados. O sistema deve
perguntar ao usuário se ele quer continuar digitando as idades ou parar.
Quando o usuário digitar 0 o algoritmo deverá parar e apresentar os resultados de acordo com os
dados recolhidos até aquele momento.*/

#include<stdio.h>


main()
{
	int i,idade,maior=0,cont=0,op;
	i=1;
	while(i==1)
	
	{
		printf("digite a idade\n");
		scanf("%d",&idade);
		
		if(idade>maior)
		{
			maior=idade;
			
			
		}
		else{
			maior=maior;
			
		}
		
		if ((idade>=18 && idade<=35))
	
		{
			cont++;
			
			
		}
		
		printf("digite 0 para parar e 1 para continuar\n");
		scanf("%d",&op);
		
		i=op;
		
		
	}
	printf("\n");
	printf("maior idade entre os habitantes: %d\n",maior);
	printf("pessoas com idade entre 18 e 35: %d\n\n",cont);
	
}

	
	