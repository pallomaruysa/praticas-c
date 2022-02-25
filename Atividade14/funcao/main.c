#include <stdio.h>

linha()
{
    int i;
for(i=0;i<24;i++) 
    {
        printf("*");
    }
    printf("\n");
}
main()
{
    int i;
    
    linha();
    printf("Números de 1 a 5\n");
        
    linha();
    
    for(i=1;i<=5;i++)
    {
      printf("%d\n",i);
    }

   linha();
}
