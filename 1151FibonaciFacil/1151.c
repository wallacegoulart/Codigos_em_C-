#include<stdio.h>

/*
int fib (int n ){
	if ( n == 0 ) return 0;
	if ( n ==1 || n == 2 )  return 1;
	else  return fib(n-1) + fib(n-2) ;
}
*/
long long int fib (int n){
	 long long int  a = 1,b = 0 ,c ;
	for(int i = 0 ; i < n ; i++){
		c = a + b;
		a = b; 
		b = c;
	}
	return b ;
}


int main (void){
	int t, n , i ;
	scanf("%d",&t);

	for(i = 0 ; i < t; i++){
		scanf("%d",&n);
		printf("Fib(%d)= %Ld\n",n,fib(n));
	}

	return 0 ;
}
