#include<stdio.h>

void preenchendoMatriz(float m[][12], int n ){
	int i , j ;
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < n ; j++)
			scanf("%f%*c", &m[i][j]); 
}

float resultado(float m [][12], int n , char t , int linha){
	int i , j  ;
	float result = 0  ;

	for(i = linha ; i <= linha ; i ++)
		for(j = 0 ; j < n ; j++)
			result+= m[i][j];
	
	if( t == 'S'){
		return result;
	}
	
	else if( t == 'M'){
		result = result/(float)12.0 ;
		return result;
	}
}

int main (void){
	int linha;
	char t;
	float m[12][12];
	
	scanf("%d%*c",&linha);
	scanf("%c%*c", &t);
	
	preenchendoMatriz(m,12);
	printf("%.1f\n", resultado(m,12,t,linha) );
	
	return 0 ;	
}
