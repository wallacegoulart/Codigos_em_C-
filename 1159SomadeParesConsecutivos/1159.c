#include<stdio.h>

int main (void){
	int n  , i ;
	
	while( 1 ){
		scanf("%d",&n);
		if(n == 0 ) break;
		int soma = 0;
		for(i= 0 ; i < 5 ; ){
			if( n % 2 == 0){
				soma += n ;
				 i++;}
			n++;
		}
		printf("%d\n",soma);
	}
	return 0;
}
