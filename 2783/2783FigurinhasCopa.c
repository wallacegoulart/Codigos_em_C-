#include<stdio.h>


int main (void){
	int n , c , m ;
	scanf("%d %d %d", &n ,&c, &m);

	int carimbadas[c] , compradas[m] , i = 0  , j = 0, total = c ;

	for(i ; i < c ; i++)
		scanf("%d",&carimbadas[i] );

	for(j; j < m ; j++)
		scanf("%d",&compradas[j] );

	i = j = 0; 

	for(i ; i<c ; i++)
		for(j ; j < m ; j++){
			if( carimbadas[i] == compradas[j])
				total--; }

	printf("%d\n",total);

	return 0 ;
}
