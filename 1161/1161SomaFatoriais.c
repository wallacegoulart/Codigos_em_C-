#include <stdio.h>

float fat ( int n){
	int i = 1 , soma = 1 ;
	for(i ; i <= n ; i ++){
		soma = soma * i;}
	return soma;

}


int main ( void) {
	int n[3][3], i = 0 , j = 0 ;
	
	for( i ; i < 3 ;i++){
		int j = 0 ;
		scanf("%d %d", &n[i][j] , &n[i][j+1]);}
	

	for( int w = 0 ; w < 3 ; w++){
		int j = 0 ;
		printf("%.0f\n",  fat( n[w][j] ) + fat( n[w][j+1] )  );
	}

	return 0 ;
}
