#include <stdio.h>


int main (void){
	int num ; 
	int i = 1;
	scanf("%d", &num);

	for(i ; i <= num ; i++)
		if( i % 2 == 0 )
			printf("%d^2 = %d\n", i , i*i); 

	return 0;
}
