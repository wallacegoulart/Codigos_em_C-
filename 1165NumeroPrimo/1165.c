#include<stdio.h>

int primo (int num1){
	int i;
	for(i = 2; i <= num1/2; i++){
		if( num1 % i == 0) return 0;
	}  
	return 1;
}


int main (void){
	int n , i , num1;
	scanf("%d",&n);
	
	for( i = 0 ; i < n ; i++){
		scanf("%d",&num1);
		if(primo(num1))printf("%d eh primo\n", num1);
		else printf("%d nao eh primo\n", num1);
 		}

	return 0;
}
