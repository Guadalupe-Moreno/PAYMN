#include <stdio.h> //para printf, scanf, getchar
#include <stdlib.h> //para calloc

void lee_matriz(int **m, int reng, int col);
void imprime_matriz(int **m, int reng, int col);
int **reserva_matriz(int reng, int col);

int main(int argc, char* argv[])
{
	int **matriz= NULL;
	int reng, col, conde;
	
	printf("Programa de matriz \n\n");
	printf("Cuantos renglones: ");
	scanf("%d", &reng);
	printf("\n Cuantas columnas: ");
	scanf("%d", &col);
	
	matriz=(int**)calloc(reng,sizeof(int*));
	for(conde=0; conde<reng; conde++)
	{
		matriz[conde]= (int*)calloc(col,sizeof(int));
	}
	
	imprime_matriz(matriz, reng, col);
	
	lee_matriz(matriz, reng, col);
	
	imprime_matriz(matriz, reng, col);
	
	for(conde=0; conde<reng; conde++)
		free(matriz[conde]);
	free(matriz);
	
	getchar();
	getchar();
	return 0;
}

void lee_matriz(int **m, int reng, int col)
{
	int r, c;
	
	for(r=0; r<reng; r++)
	{
		for(c=0; c<col; c++)
		{
			printf("Ingresa el elemento[%d][%d]: ",r+1, c+1);
			scanf("%d", (*(m+r)+c));
		}
	}
	
}

void imprime_matriz(int **m, int reng, int col)
{
	int r, c;
	
	for(r=0; r<reng; r++)
	{
		for(c=0; c<col; c++)
		{
			printf("%5d  ", *(*(m+r)+c));
		}
		printf("\n");
	}	
}
