#include<stdio.h>


int main (void){
	int cont = 0 ;
	float i = 0 , j = 1 , j1 =0;

	for(cont ; cont <= 10 ; cont++){
		int  cont2 = 0 ; 
		float j = 1 + j1;
		
		for(cont2 ; cont2 < 3; cont2++){
			if(cont == 0 || cont == 5 || cont == 10) printf("I=%.0f J=%.0f\n", i , j );
			else printf("I=%.1f J=%.1f\n", i , j );
			j+=1;}
		
		i+=0.2;
		j1+=0.2; }	 	

	return 0;
}
