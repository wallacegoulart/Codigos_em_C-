#include <stdio.h>


int main (void){
	int num , i = 0 , j = 1;
	scanf("%d",&num);
	
	for( i ; i < num ; i++){
		printf("%d %d %d PUM\n", j , j+1 , j+2);
		j = j +4; }

	return 0;
}
