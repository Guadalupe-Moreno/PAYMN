#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf



main(){
       int a[50], i, j, aux, opc;
       
       p("Escoge algunas de las opciones para ordenar los numeros\n 1)Ascendente\n 2)Descendente\n");
       s("%d", &opc);
       
       switch(opc)
       {
                   case 1:
                        system("cls");
                        p("Escribe los  5 numeros que deseas ordenar\n");
                        for(i=1;i<=5;i++){
                        s("%i", &a[i]);
                          }       
                          p("Los numeros que diste son: \n");
                          for(i=1;i<=5;i++){
                          p("%i\n", a[i]);
                          }       
                          for(i=1;i<=4;i++)
                          {
                                        for(j=i+1;j<=5;j++)
                                        { 
                                                            if(a[i]>a[j]) 
                                                            { 
                                                            aux=a[i]; 
                                                            a[i]=a[j]; 
                                                            a[j]=aux; 
                                                            }
                                        }
                          }
                        
                        p("Los numeros ordenados de forma ascendente son: \n");
                        for(i=1;i<=5;i++)
                        {
                                          p("%i\n", a[i]);
                        }
                        
                        break;
                   case 2:  
                        system("cls");
                        p("Escribe los  numeros que deseas ordenar\n");
                        for(i=1;i<=5;i++){
                        s("%i", &a[i]);
                          }       
                          p("Los numeros que diste son: \n");
                          for(i=1;i<=5;i++)
                          {
                                            p("%i\n", a[i]);
                          }     
                        for(i=1;i<=4;i++)
                        {
                                        for(j=i+1;j<=5;j++)
                                        { 
                                                            if(a[i]<a[j]) 
                                                            { 
                                                            aux=a[i]; 
                                                            a[i]=a[j]; 
                                                            a[j]=aux; 
                                                            }
                                        }
                        }
       
                        p("Los numeros ordenados de forma descendente son: \n");
                        for(i=1;i<=5;i++)
                        {
                                          p("%i\n", a[i]);
                        }
                        break;
                  default:
               p("No presionaste algunas de los numeros validos\n\n\n");
                        break;
               }
                          
       system("pause");
       }

