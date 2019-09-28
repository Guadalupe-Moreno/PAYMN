#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
main(){
float x[100], media;
int i,n;

printf("Dame el numero de datos:"); 
scanf("%d",&n);
printf("Proporciona la muestra dato traz dato\n");

for(i=1;i<=n-1;i++){
      printf("elemento x[%2d]:",i);
      scanf("%f",&x[i]);
      }
      printf("elemento x[%2d]:",i);
      scanf("%f",&x[i]);
      media=0.0;
      for(i=1;i<=n;i++)
            {
            media+=x[i];
            }
            media=media/n;
            printf("La media es:%f",media);
            getch();
            return 0;
}
