# include <stdio.h> //para printf y gatchar

int  main(int argc, char* argv[])
{
     int   enter;
     char  letra;
     float flota;
     short corto;
     
	printf("\nEste programa lee y muestra\n");//imprimir msj
        printf("\nIngrese un valor entero: ");//imprimir msj
        scanf("%d", &enter);
        printf("\n\t El valor entero es: %d \n",enter);//imprimir msj
        
        printf("\nIngrese un valor flotante: ");//imprimir msj
        getchar();
        scanf("%f", &flota);
        printf("\n\t El valor flotante es: %f \n",flota);//imprimir msj
        
        printf("\nIngrese una letra: ");//imprimir msj
        getchar();
        scanf("%c", &letra);
        printf("\n\t La letra es: %c\n",letra);//imprimir msj
        
        printf("\nIngrese un short: ");//imprimir msj
        getchar();
        scanf("%hd", &corto);
        printf("\n\t El valor short es: %hd\n",corto);//imprimir msj
     
     getchar();//atrapa el enter del escanf
     getchar();//mantiene ejecucuion estatica
     return 0;//terminar la ejecucion devolviendo cero
}//ciera f principal

