#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#define password "1234"

int main(void){
	char pwd[50];
	printf("Ingrese la contraseņa: ");
	scanf("%s",&pwd);
		if(strcmp(pwd,password)==0){
			printf("Contraseņa correcta");
		}
		else
			printf("Contraseņa incorrecta");
	getch();
	return 0;
}
