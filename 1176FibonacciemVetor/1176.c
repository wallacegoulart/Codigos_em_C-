#include<stdio.h>

int fib(int num1){
	if ( num1 == 0) return 0;
	if ( num1 < 3) return 1; 
	else return fib(num1-1) + fib(num1-2); 
}

int main (void){
	int n , num1 , i ; 
	scanf("%d%*c", &n);

	for(i = 0 ; i < n ; i++){
		scanf("%d%*c", &num1);
		printf("Fib(%d) = %d\n",  num1, fib(num1) );
	}		

	return 0;
}
