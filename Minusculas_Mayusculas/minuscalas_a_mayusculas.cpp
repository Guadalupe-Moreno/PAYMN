
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

char dminm();
char dmaym();
char respu,respus;//Otra forma de declarar las variables de mismo tipo

main() {
       printf("1)Minusculas a mayusculas\n2)Mayusculas a minusculas\n\n>>");
       gets(&respu);
       printf("\nEscribe una palabra\n>>");
       gets(&respus);
       
                         if (respu == '1'){
                         system("cls");
                            dminm();}
                           
                            
                         if (respu == '2'){
                         system("cls");
                            dmaym();}
                           

       system("pause");
       }

char dminm() {
     printf("En mayusculas: %s \n\n",strupr(&respus));//Convierte de minusculas a mayusculas
     }
     
   char dmaym() {
      printf("En minusculas: %s \n\n",strlwr(&respus));//Convierte de mayusculas a minusculas
     }   

