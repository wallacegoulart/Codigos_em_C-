#include <stdio.h>

int main (void){
	int x = 1 , i;

	while(x != 0){
		scanf("%d%*c",&x);
		for(i = 1 ; i <= x ; i++){
			printf("%d", i);
			if(i != x)
				printf(" ");
			} 
		if( x != 0)
			printf("\n");	
	}

	return 0;
}
