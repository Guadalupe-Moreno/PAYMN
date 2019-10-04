#include<stdlib.h>
#include<stdio.h>

main(){
       long int x, n, m;
       printf("\n Dame un numero entero 'n':\n");
       scanf("%i", &n);
       x=0;
       m=1;
       while (x<n){
         x=x+1;
         m=m*x;
         }
       printf("\n\t Para n= %i", n);
       printf("\n\t El factorial n! es: %i\n", m);  
       system("pause");
       }
