//Declarar 1 matriz de 3x3, pedir los valores al usuario y mostrarla, 
//indicar cuantos elementos son cero, cuantos positivos y negativos. 
#include<stdio.h>
main()
{
	int A[3][3],positivos=0,negativos=0,nulos=0,i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			printf("Ingrese el elemento [%d][%d] de la matriz: ",i+1,j+1);
				scanf("%d",&A[i][j]);
					if(A[i][j]!=0){
						if(A[i][j]<0){
							negativos++;
						}
						else{
							positivos++;
						}
					}
					else{
						nulos++;
					}}
printf("\nLa matriz que usted ingreso es la siguiente:\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d\t",A[i][j]);
			printf("\n");}
printf("\n\nUsted ingreso\n\nPositivos: %d \nNegativos: %d \nNulos: %d", positivos, negativos, nulos);		
}
