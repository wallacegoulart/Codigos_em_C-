#include<stdio.h>


int par (int n[], int m){
	int i = 0 , cont = 0 ;
	for(i ; i < m ;i++)
		if( n[i] % 2 == 0)cont++;
	return cont;
}

int impar (int n[], int m) {
	int i = 0 , cont = 0 ;
	for(i ; i < m ; i++)
		if (n[i] % 2 != 0 ) cont++;
	return cont; 
}

int positivo(int n[], int m){
	int i = 0 , cont = 0 ;
	for(i ; i < m ; i++)
		if( n[i] > 0) cont++;
	return cont; 
}

int negativo(int n[], int m){
	int i = 0, cont = 0 ;
	for(i ; i < m ; i++)
		if( n[i] < 0 ) cont++;
	return cont ; 
}

int main(void){
	int i = 0 , n[4];
	for(i; i < 5 ; i++)
		scanf("%d%*c", &n[i]);
	
	printf("%d valor(es) par(es)\n", par(n,5) );
	printf("%d valor(es) impar(es)\n", impar(n,5) );
	printf("%d valor(es) positivo(s)\n", positivo(n,5) );
	printf("%d valor(es) negativo(s)\n", negativo(n,5) );

	return 0;
}
