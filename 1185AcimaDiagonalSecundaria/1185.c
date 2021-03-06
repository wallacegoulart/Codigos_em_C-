#include<stdio.h>
#include<ctype.h>

void lerMatriz(float m[][12], int n ){
	int i , j ;
	for( i = 0 ; i < n ; i++)
		for( j = 0 ; j < n ; j ++)
			scanf("%f%*c", &m[i][j]);  
}

float diagonalAcima( float m [][12], int n , char s){
	int i , j ; 
	float total = 0 , cont = 0  ,linha = n - 1;

	for(i = 0; i < n ; i++){
		for(j = 0; j < linha ; j++){ 
			total+= m[i][j];
			cont++;}
		linha--;}  

	if(toupper(s) == 'S') return total;
	else return total / cont ;

}

int main (void){
	float m[12][12];
	char s ; 
	scanf("%c", &s );

	lerMatriz(m,12);
	printf("%.1f\n",diagonalAcima(m,12,s) );

	return 0 ;
}
