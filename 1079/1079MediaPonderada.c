#include<stdio.h>


int main (void){
	int num , i = 0 ;
	scanf("%d%*c", &num);

	float valor1 , valor2, valor3;

	for(i; i< num ; i++){
		scanf("%f %f %f%*c", &valor1 , &valor2 , &valor3);
		printf("%.1f\n", (valor1*2 + valor2*3 + valor3*5 )/10);}

	return 0;
}
