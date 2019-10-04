#include<stdio.h>
#include<stdlib.h>
main (){
     int n,x,y,z;
     int i,g;
	do{
     printf("Dame el numero n de terminos ");
     scanf("%d",&n);
     
     x=1;
     y=1;
     printf("1\n\n1\n");
     
     for(i=1;i<=n-2;i++){
        z=x+y;
        x=y;
        y=z;
        
        printf("\n%d\n",z);
        }
    printf("\n\nQuieres calcular de nuevo?\n\nSi - presiona 1\n\nNo - introduce cualquier otra tecla \n");
	scanf("%d", &g);
	system("cls");
	
    }
    while(g==1);
    system("pause");
}
