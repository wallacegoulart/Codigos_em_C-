#include<stdio.h>
#include<ctype.h>

void lerMatriz(double  m[][12] , int n){
	int i , j ;
	for(i = 0 ; i < n ; i++)
		for( j = 0 ; j < n ; j++)
			scanf("%lf%*c", &m[i][j]);
}


double areaSuperior(double m [][12], int n , char s){
	int i , j ; 
	double total = 0 , cont = 0  ;
	
	for(i = 0 ; i < 5 ; i++){
		int linha = n  ;
		for( j = 0 ; j < linha ; j ++){
			if( j > i ){
				total+= m[i][j];
				cont++;}
			else linha--;
	}
	}
	 
	if(toupper(s) == 'S') return total;
	else return total / cont; 

}

int main (void){
	double  m[12][12];
	char s; 
	scanf("%c", &s);

	lerMatriz(m , 12);
	
	printf("%.1lf\n", areaSuperior(m , 12 , s) );

	return 0;
}
