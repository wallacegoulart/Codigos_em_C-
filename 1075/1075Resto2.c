#include<stdio.h>

int main (void){
	int num1 , i = 1 ;
	scanf("%d", &num1);
	
	for(i ; i <= 10000 ; i++)
		if(i % num1 == 2) printf("%d\n",i);

	return 0;
}
