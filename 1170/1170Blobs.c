#include<stdio.h>


int main (void){
	int n , i , j ; 
	float	comida;
 
	scanf("%d",&n);

	for( i = 0 ; i < n ; i++){
		scanf("%f", &comida);
		 int dias = 0;
		while(comida > 1){
			comida = comida / 2 ;
			dias++; } 	
	
		printf("%d dias\n",dias);
	}

	return 0;
}
