#include<stdio.h>

int main (void){
	int qtdDivisao, num1 , num2 , i = 0 ;
	float n1 , n2;
	scanf("%d", &qtdDivisao);

	for(i; i < qtdDivisao ; i++){
		scanf("%f %f%*c", &n1 , &n2);
		if(n2 == 0) printf("divisao impossivel\n");
		else printf("%.1f\n", n1/n2); }


	return 0;
}
