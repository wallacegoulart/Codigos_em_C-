#include<stdio.h>

void preenchendo(int v[] , int n , int num1){
	int i  ;
	v[0] = num1; 

	for(i = 1 ; i < n ; i++)
		v[i] = v [i-1]*2; 
}

void exibi (int v[] , int n){
	int i ;

	for( i = 0 ; i < n ; i++)
		printf("N[%d] = %d\n", i , v[i]);
}

int main (void){
	int num1 , v[10];
	scanf("%d",&num1);

	preenchendo(v,10, num1);
	exibi(v,10);

	return 0;
}
