#include <stdio.h>

int main (void){
	int num1,i = 0;
	scanf("%d%*c", &num1);
	
	for( i ; i <=num1 ; i++)
		if(i % 2 != 0 ) printf("%d\n",i);


	return 0;
}
