#include<stdio.h>
#include<stdlib.h>

main(){
	int n,m,i=1;
	
	printf("Ingresa un numero: \n");
	scanf("%d",&n);
	
	printf("los MCM de %d son:\n",n);
	
	for(i=1;i<=n;i++){
		m=n%i;
		if(m==0){
			printf("%d\n",i);
		}
	}
	
	system("pause");
}
