#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main(){
       
       int n; 
       float c;
      
      menu:
       printf("Dame la calificacion:");
       scanf("%f",&c);
       if(c<0 || c>10)
       printf("\n\tIntroduce una cantidad entre 0 y 10");
       else if(c<=6) printf("\n\t*****Reprobado*****");
        else if(c<=6.5) printf("\n\t6");
         else if(c<=7.5) printf("\n\t7");
            else if(c<=8.5) printf("\n\t8");
                else if(c<=9.5) printf("\n\t9");
                         else if(c<=10||9.6) printf("10");
        printf("\nDeseas dar otra calificación 1 para si y 0 para no:");  
        scanf("%i",&n);               
        if(n==1)             
        goto menu;                 
         getch();
       return 0;                
      }
