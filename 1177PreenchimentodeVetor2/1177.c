#include<stdio.h>


void preenchendoVetor(int v[] , int n, int rep){
	int i , j = 0 ;
	for(i = 0 ; i < n ; i ++){
		if( i % rep == 0  && i != 0) j = 0;
		v[i] = j ;
		j++; } 
}

void exibi (int v[] , int n ){
	int i ;
	for(i = 0 ; i < n ; i ++)
		printf("N[%d] = %d\n", i , v[i]); 	
}

int main (void){
	int rep, n = 1000 , v[1000]; 
	scanf("%d", &rep);
	
	preenchendoVetor(v,n,rep);
	exibi(v,n);

	return 0;
}
