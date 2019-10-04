#include<stdlib.h>
#include<stdio.h>
main(){
	float x[100],media;
	int i,n;
		printf("\n\t\tEste programa calcula la media de una serie de numeros");
		printf("\n\n\tDeme el numero de datos: ");
		scanf("%d",&n);
		printf("\n\n\tDeme dato tras dato\n");
	    media=0.0;
	    
			for(i=0;i<=n-1;i++){
				printf("\n\t\tIngrese el dato x[%d): ",i);
				scanf("%f",&x[i]);
				media=media+x[i]; 
			}
			media=media/n;
			printf("\n\n\tLa media es: %.2f",media);
			printf("\n");
			getchar();
			return 0;
} 
