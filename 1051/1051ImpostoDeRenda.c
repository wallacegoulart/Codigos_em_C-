#include<stdio.h>


int main (void){
	float sal,a, b ,c ,d ,e;
	scanf("%f",&sal);

	if( 0 <= sal && sal <= 2000.0) printf("Isento\n");

	else if( 2000.01 <= sal && sal <= 3000.0) { 
		a = sal - 2000.00;  
		b = (a*0.08);
		printf("R$ %.2f\n", b) ; 
		}


	else if( 3000.01 <= sal && sal <= 4500.0){ 
		a = sal - 2000;
		b = (a - 1000) * 0.18;
		c = 1000 *0.08; 
		d = c + b;
		printf("R$ %.2f\n", d);
		}

	else if( 4500.00 < sal ){
		a = sal - 2000;
		b = 1000 *0.08;
		c = 1500 * 0.18;
		d = (a - 2500) *0.28;
		e = c + b + d;
		printf("R$ %.2f\n", e);
		};	


	return 0;
}
