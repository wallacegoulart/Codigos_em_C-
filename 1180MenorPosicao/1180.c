#include<stdio.h>


int main (void){
	int n,i, menor , pos;
	scanf("%d",&n);
	int v[n];

	for(i = 0 ; i < n ; i++)
		scanf("%d%*c", &v[i]);

	menor = v[0];
	pos = 0 ;
	for(i = 1 ; i < n ; i++){
		if(v[i] < menor){ 
			menor = v[i];
			pos = i ;
		}
	}
	
	printf("Menor valor: %d\nPosicao: %d\n", menor , pos); 

	return 0;
}
