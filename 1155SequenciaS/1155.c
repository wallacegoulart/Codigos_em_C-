#include<stdio.h>

float s ( int n ){
	if(n == 1 ) return 1;
	else  return (float)1/(float)n + s(n-1);
} 

int main (void){
	
	printf("%.2f\n", s(100) );

	return 0;
}
