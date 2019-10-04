#include <stdio.h>
#include <stdlib.h>
/*Programa elaborado por: 
Maria Guadalupe Moreno Madrid*/
	main () {
		int a=0,c,fac=1;
		printf("\t\tEste programa calcula el factorial de un numero");
                     printf("\n\n\tINGRESE EL NUMERO: ");
			         scanf("%d",&c);
		for(a=1;a<=c;a++){
            fac=fac*a;
		}
        printf("\n\n\t\tEl factorial de %d es: %d\n",c,fac);
        
			getchar();
	}
