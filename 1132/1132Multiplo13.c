#include<stdio.h>
#include<math.h>

int main (void){
	int num1 , num2 , dif , i = 0, soma = 0 , num ;
	scanf("%d%*c", &num1);
	scanf("%d%*c", &num2);
 	
	dif = abs(num1-num2);
	if(num1 < num2) num = num1;
	else num = num2;

	for(i; i <= dif ; i++){
		if( num % 13 != 0) soma = soma + num;
		num++;}
	
	printf("%d\n",soma);

	return 0;
}
