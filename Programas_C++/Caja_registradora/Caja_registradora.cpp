/*Programa elabordo por:
	Moreno Madrid Maria Guadalupe*/
#include <time.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define password "1234"

int main(int argc, char *argv[]){
	int c,ca=0,r;
	float ct,co=0,cost;
	char pwd[50];
	char output[128];
	system("color C1");
	FILE* Ticket;
	Ticket=fopen("Ticket.txt","w+");
		printf("\n\t\tUNIVERCIDAD NACIONAL AUTONOMA DE MEXICO \n\t\t\tFacultad de Ingeneria \n\n\tMateria: CPI \n\tGrupo: 3 \n\n\tProyecto: Caja registradora. \n\tElaborado por: Moreno Madrid Maria Guadalupe. ");
		printf("\n\n\t\t\t\t\tIngrese la contrase%ca: ",164);
		scanf("%s",&pwd);
			if(strcmp(pwd,password)==0){
	do{
		printf("\n\tBienvenido a ZURF \n\tLa tienda de ropa y accesorios para deportes acuaticos");
		printf("\n\t\tContamos con los siguientes productos:");
		
		printf("\n\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
		printf("\n\t\t\t\t\t\t%cCODIGO  PRODUCTO    PRECIO/U %c",186,186);
		printf("\n\t\t\t\t\t\t%c 01     Googles     %c 120.00 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 02     Aletas      %c 400.50 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 03     Tapones     %c  37.10 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 04     Tabla       %c 256.00 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 05     Gorra       %c  30.50 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 06     Tualla      %c 120.00 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 07     Sandalias   %c 100.50 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 08     Bloqueador  %c  37.10 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 09     Bronceador  %c 256.00 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 10     Biquini     %c 230.50 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 11     Esnorker    %c  97.00 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 12     Inflables   %c 170.50 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 13     Pala        %c  27.10 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 14     Cubeta      %c  20.00 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 15     Rascador    %c  27.50 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 16     Balsa       %c 920.00 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 17     Sombrilla   %c 200.50 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 18     Visor       %c 137.10 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 19     Camison     %c 256.00 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c 20     Bata        %c 230.50 %c",186,36,186);
		printf("\n\t\t\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

		printf("\n\n\t\tIngrese el codigo del producto: ");
		scanf("%d",&c);
		switch(c){
			case 1:
				ca=0;
				co=0;
				fputs ("\nCODIGO  PRODUCTO    CANTIDAD    C/Ca \n\n", Ticket);
				fputs ("\n01     Googles     ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
	            fprintf(Ticket,"    %d    ", ca);	
			    		co=120.00*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 2:
				ca=0;
				co=0;
				fputs ("\n02     Aletas      ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);	
			    		co=400.50*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co); 
			    fprintf(Ticket,"    %c %.2f  ",36,co);		
					break;
			case 3:
				ca=0;
				co=0;
				fputs ("\n03     Tapones     ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=37.10*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 4:
				ca=0;
				co=0;
				fputs ("\n04     Tabla       ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=256.00*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 5:
				ca=0;
				co=0;
				fputs ("\n05     Gorra       ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=30.50*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 6:
				ca=0;
				co=0;
				fputs ("\n06     Tualla      ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=120.00*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 7:
				ca=0;
				co=0;
				fputs ("\n07     Sandalias   ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=100.50*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 8:
				ca=0;
				co=0;
				fputs ("\n08     Bloqueador  ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=37.10*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 9:
				ca=0;
				co=0;
				fputs ("\n09     Bronceador  ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=256.00*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 10:
				ca=0;
				co=0;
				fputs ("\n10     Biquini     ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=230.50*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 11:
				ca=0;
				co=0;
				fputs ("\n11     Esnorker    ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=97.00*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 12:
				ca=0;
				co=0;
				fputs ("\n12     Inflables   ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=170.50*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 13:
				ca=0;
				co=0;
				fputs ("\n13     Pala        ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d   ", ca);
			    		co=27.10*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 14:
				ca=0;
				co=0;
				fputs ("\n14     Cubeta      ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=20.00*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 15:
				ca=0;
				co=0;
				fputs ("\n15     Rascador    ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=27.50*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 16:
				ca=0;
				co=0;
				fputs ("\n16     Balsa       ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=920.00*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 17:
				ca=0;
				co=0;
				fputs ("\n17     Sombrilla   ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=200.50*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 18:
				ca=0;
				co=0;
				fputs ("\n18     Visor       ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=137.10*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 19:
				ca=0;
				co=0;
				fputs ("\n19     Camison     ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=256.00*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
			case 20:
				ca=0;
				co=0;
				fputs ("\n20     Bata        ", Ticket);
					printf("\n\t\tIngrese el numero de articulos: ");
	            			scanf("%d",&ca);
				fprintf(Ticket,"    %d    ", ca);
			    		co=230.50*ca;
			    		cost=co+cost;
			    		printf("\n\t\tCosto total de productos: %c %f",36,co);
				fprintf(Ticket,"    %c %.2f  ",36,co);
					break;
		
			default:
				printf("\n\t\tEse codigo no se reconoce\n");
				break;
			}
			printf("\n\n\tDeseas hacer otra compra:\n\tIngresa 1 para hacer otra o 0 para imprimir el Ticket de su compra\n");
			scanf("%d",&r);
			system("cls");
	}while(r==1);
		fprintf(Ticket,"\n\n\t\tTotal a pagar: %c %.2f\n", 36,cost);
		 	time_t tiempo = time(0);
    		struct tm *tlocal = localtime(&tiempo);
			strftime(output, 128, "%d/%m/%y %H:%M:%S", tlocal);
    		fprintf(Ticket,"\n\t\tFecha y Hora: %s",output);
			system("PAUSE");
    
		fclose(Ticket);
								}
									else
										printf("Contraseña incorrecta");
}
