#include<stdio.h>


int main (void){
	float nota1, nota2, cont1 = 0 , cont2 = 0 , i = 0 ;

	do{
		scanf("%f%*c", &nota1);
		cont1++;
	  } while(nota1 < 0 || nota1 > 10); 
	

	do{
		scanf("%f%*c", &nota2);
		cont2++;
	  } while(nota2 < 0 || nota2 >10); 


	for(i; i < (cont1+cont2)-2 ; i++)
		printf("nota invalida\n");

	printf("media = %.2f\n", (nota1+nota2)/2 );


	return 0;
}
