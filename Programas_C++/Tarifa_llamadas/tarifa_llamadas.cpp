#include<stdio.h>
#include<stdlib.h>

main(){
	int cl,r;
	float p,t;
	
	do{
	printf("\n");
	printf("clave  zona              precio\n");
	printf("45     Sudamerica         1.0\n");
	printf("21     CentroAmerica      2.5\n");
	printf("11     Asia               2.8\n");
	printf("89     Europa             3.0\n");
	printf("17     Africa             3.5\n");
	printf("\n");
	
	printf("\nIngresa la clave a usar: ");
	scanf("%d",&cl);
	
	switch(cl){
		case 45:
			    printf("¿Cuantos minutos vas a tardar en la llamada?: ");
	            scanf("%f",&t);
			    p=t*1.0;
			     printf("El costo de la llamada sera: %f",p);
				break;
		case 21:
				printf("¿Cuantos minutos vas a tardar en la llamada?: ");
	            scanf("%f",&t);
					p=t*2.5;
			        printf("El costo de la llamada sera: %f\n",p);
			         break;
			
		case 11:
				printf("¿Cuantos minutos vas a tardar en la llamada?: ");
	            scanf("%f",&t);
					p=t*2.8;
			         printf("El costo de la llamada sera: %f\n",p);
			           break;
			
		case 89:
				printf("¿Cuantos minutos vas a tardar en la llamada?: ");
	           scanf("%f",&t);
					p=t*3.0;
			       printf("El costo de la llamada sera: %f\n",p);
			       break;
			
			case 17:
				printf("¿Cuantos minutos vas a tardar en la llamada?: ");
	            scanf("%f",&t);
					p=t*3.5;
			printf("El costo de la llamada sera: %f\n",p);
			break;
			
			default:
				printf("Esa clave no se reconoce\n");
				break;
	}
	printf("\n\n\t\t");
	printf("Deseas hacer otra llamada?:\n\t\tIngresa 1 para hacer otra o 0 para salir: ");
	scanf("%d",&r);
}while(r==1);	
}
