#include <stdio.h> //printf, scanf, getchar
#include <stdlib.h> //malloc, free, exit

void leer_arreglo(short *arreglo, int cuantos);
void imprimir_arreglo(short *arreglo, int cuantos);

int main(int argc, char* argv[])
{
	short *apuntador= NULL;
	int cuadritos;
	
	printf("Programa de arreglo dinamico: \n\n");
	
	printf("Dime cuantos cuadritos: ");
	scanf("%d", &cuadritos);
	
	apuntador= (short*)malloc(cuadritos*sizeof(short));
	
	if(apuntador==NULL)
	{
		printf("No pude reservar la memoria :( ");
		getchar();
		exit(0); //termina la ejecución justo aquí
	}
	
	//aqui leía
	leer_arreglo(apuntador, cuadritos);

	//aqui imprimía
	imprimir_arreglo(apuntador, cuadritos);
	
	free(apuntador); //libera la memoria
	
	getchar(); //atrapa el enter
	getchar(); //mantiene estática
	return 0;
}

void leer_arreglo(short *arreglo, int cuantos)
{
	int conde;
	
	for(conde=0; conde<cuantos; conde++)
	{
		printf("Ingresa el dato %d: ", conde+1);
		scanf("%hd", (arreglo+conde));
	}
}

void imprimir_arreglo(short *arreglo, int cuantos)
{
	int conde;
	
	for(conde=0; conde<cuantos; conde++)
		printf("\n\t El dato %d es: %hd", conde+1, *(arreglo+conde));
}


