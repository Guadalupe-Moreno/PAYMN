#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#define password "1234"

int main(void){
	char pwd[50];
	printf("Ingrese la contraseña: ");
	scanf("%s",&pwd);
		if(strcmp(pwd,password)==0){
			printf("Contraseña correcta");
		}
		else
			printf("Contraseña incorrecta");
	getch();
	return 0;
}
