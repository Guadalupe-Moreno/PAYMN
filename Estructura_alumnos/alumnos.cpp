/*Programa de arreglo de estructura de cajas*/
#include<stdio.h>
   int main(int argc,char *argv[]){
       struct alumno{
              char nombre[50];
              int edad;
              };
       struct alumno alu[3];
       int i;
       printf("Programa de estructura de alumni: \n\n");
       
       for(i=0;i<=2;i++){
             
       printf("Ingresa el nombre de alu[%d]: ",i+1);
       scanf(" %[^\n]",alu[i].nombre);
       
       printf("Ingresa la edad de alu[%d]: ",i+1);
       scanf("%d",&alu[i].edad);
       }
      for(i=0;i<=2;i++){ 
       printf("\n\n\t Nombre %d: %s \t Edad %d: %d",i+1,alu[i].nombre,i+1,alu[i].edad);
       }
      
     getchar(); //atrapa el enter
     getchar(); //mantiene estatica la pantalla
     return 0;
	}
