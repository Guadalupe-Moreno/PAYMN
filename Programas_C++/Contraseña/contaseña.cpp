#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#define password "1234"

int main(void){
	char pwd[50];
	printf("Ingrese la contrase�a: ");
	scanf("%s",&pwd);
		if(strcmp(pwd,password)==0){
			printf("Contrase�a correcta");
		}
		else
			printf("Contrase�a incorrecta");
	getch();
	return 0;
}
