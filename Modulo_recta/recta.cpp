/*Programa de arreglo de estructura de cajas,
lee las coordenadas de dos puntos en un espacio R2 y 
da la magnitud o el modulo de la recta que se forma.*/
#include <stdlib.h>//Biblioteca para el system
#include<stdio.h> //Biblioteca que contiene el printf
#include <math.h> //Biblioteca que contiene a pow
   int main(int argc,char *argv[]){ //funcion principal
   int z,R,comX,comY; //declaracion de variables
   system("color C1");//Cambia l color de la pantalla de ejecucion a rojo
   do{
   printf("\n\n\t\t Este programa lee las coordenadas de dos puntos en un espacio R2");
   printf("\n\t\t y da la magnitud o el modulo de la recta que se forma. \n\n");
       struct punto{ //Caja Punto
              int X;
              int Y;
              };
       struct punto p[2]; //Bariables de caja punto 
       int i; //declaracion de variable contador 
       		for(i=0;i<2;i++){ 
       			printf("\n\tIngrese las componentes del punto %d sepaaradas por coma: ",i+1);
       			scanf("%d,%d",&p[i].X,&p[i].Y); //lectura de las coordenadas
       		}
   comX=pow((p[0].X-p[1].X),2); //componente dx al cuadrado
   comY=pow((p[0].Y-p[1].Y),2); //componente dy al cuadrado
   R=comX+comY;
   printf("\n\n\t\tEl moulo de la recta es: %f",sqrt(R)); //operacion de modulo
   printf("\n\n\n\tSi desea bolver a calcular, precione 1,\n\tsi no presione 0 para erminar la ejecucion: ");
   scanf("%d",&z);
   system("cls");
   }while(z==1);
     getchar(); //atrapa el enter
     getchar(); //mantiene estatica la pantalla
     return 0;
   } //cierre de la funcion principal          
												//elaborado por: Moreno Madrid Maria Guadalupe

