#include <stdio.h>


int main (void){
	int num, i = 0;
	scanf("%d%*c", &num);
	
	for(i ; i < 6; ){
		if(num % 2 != 0){ 
			printf("%d\n", num);
			i++;}
		
		num++; }

	return 0;
}
