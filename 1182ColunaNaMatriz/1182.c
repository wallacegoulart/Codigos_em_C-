#include<stdio.h>

void preencherMatriz ( float m[][12] , int n){
	int i , j;

	for(i = 0 ; i < n ; i++)
		for( j = 0 ; j < n ; j++)
			scanf("%f%*c", &m[i][j]);
}

void resultado( float m [][12] , int n , int coluna , char t ){
	int i , j ; 
	float result = 0 , saida ;

	for(i = 0 ; i < n ; i++ )
		for( j = coluna ; j <= coluna ; j++)
			result+= m[i][j];

	if( t == 'S')
		saida = result;
	else
		saida = result / (float)12.0;

	printf("%.1f\n", saida);

} 


int main (void){
	int coluna; 
	char t;
	float m[12][12];

	scanf("%d%*c", &coluna);
	scanf("%c%*c", &t);

	preencherMatriz(m,12);
	resultado(m,12,coluna,t);


	return 0;
}
