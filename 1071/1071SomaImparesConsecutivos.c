#include <stdio.h>
#include <math.h>

int main (void){
	int num1 , num2 , i = 0, soma = 0 ;
	scanf("%d%*c", &num1);
	scanf("%d%*c", &num2);
    int m = ( num1 - num2 ) ;
	
	for(i ; i < m-1 ; i++){
		num2++;
		if(abs(num2) % 2 != 0){
			soma += num2;} }
	
	printf("%d\n",soma);

	return 0;
}
