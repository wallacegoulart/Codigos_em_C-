#include<stdio.h>

int lenda (int n , int k){
	int ini[n] , fim[n] , vivos = n , j = 0 , p = k ;
	
	for(i = 0 ; i< n ; i++)
		ini[i] = i+1;
	
	while( vivos > 1){
		if( pertence(ini[p],fim[j]) ) { 
				fim[j] = ini[p];
				j++;
				vivos--; }
		
}



int main (void){
	int nc , n , k, i ;
	scanf("%d", &nc);

	for( i = 0 ; i < nc ; i++){
		scanf("%d %d%*c", &n , &k);
		printf("Case %d: %d\n",i+1,lenda(n,k) );
	} 

	return 0;
}
