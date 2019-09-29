#include<stdio.h>
#include<stdlib.h>

main(){
	int a,b,c;
	
	printf("\nIngresar 3 numeros enteros diferentes: \n");
	printf("Primer numero: ");
	scanf("%d",&a);
	printf("Segundo numero: ");
	scanf("%d",&b);
	printf("Tercer numero: ");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf("El numero mayor es &d \n",a);
	}
	
	else if(b>a && b>c){
		printf("El numero mayor es %d \n",b);
	}
	
	else if(c>a && c>b){
		printf("El numero mayor es %d \n",c);
	}
	
	system("pause");
}
