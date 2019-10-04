#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define p printf
#define sc scanf
main(){
    int N,g;
    float a, b, c, j, e, f, s ,r, m,den;
    double i, res;


Menu:
    system("cls");
    p("Selecciona el numero de la operacion a realizar\n");
       p("1- Suma \n");
       p("2- Resta\n");
       p("3- Multiplicacion\n");
       p("4- Division\n");
     
     sc ("%d",&N);
/*Seleccion de la operacion del menu */
    switch (N)
    {
        case 1:
            p ("Introduzca el primer numero complejo: \n");
            sc ("%f,%f",&a ,&b);
            p ("Introduzca el segundo numero complejo: \n");
            sc ("%f,%f",&c ,&j);
            e=(a+b);
            f=(c+j);
            p("Resultado: %f+%fi",e,f);
            break;
        case 2:
            p ("Introduzca el primer numero complejo: \n");
            sc ("%f,%f",&a ,&b);
            p ("Introduzca el segundo numero complejo: \n");
            sc ("%f,%f",&c ,&j);
            e=(a-b);
            f=(c-j);
            p("Resultado: %f+%fi",e,f);
            break;
        case 3:
            p ("Introduzca el primer numero complejo: \n");
            sc ("%f,%f",&a ,&b);
            p ("Introduzca el segundo numero complejo: \n");
            sc ("%f,%f",&c ,&j);
             e=a*c-b*j;
             f=b*c+a*j;
            p("Resultado: %f+%fi",e,f);
            break;
        case 4:
        /*Condicion para poder realizar la division*/
            p ("Introduzca el primer numero complejo: \n");
            sc ("%f,%f",&a ,&b);
            p ("Introduzca el segundo numero complejo: \n");
            sc ("%f,%f",&c ,&j);
            den=pow(c,2)+j*j;
                          e=(a*c-b*j)/den;
                          f=(b*c+a*j)/den;
                          p("Resultado: %f+%fi",e,f);
                          break;
            default:
            p("opcion no valida");

    }
     p ("\nSi desea regresar al menu precione 1 sino presione 0 \n");
     sc("%d",&g);
     if (g==1)
        goto Menu;

     getch();
     return 0;

}
