#include<stdio.h>


int main (void){
	int vPar[5] , vImpar[5], n , i , tamVetorPar = 0 , tamVetorImpar = 0 , j ;

	for(i = 0; i < 15 ; i++){
		scanf("%d%*c", &n);
		
		if( n % 2 == 0 ){
			vPar[tamVetorPar] = n;
			tamVetorPar++;
		}
		
		else{
			vImpar[tamVetorImpar] = n;
			tamVetorImpar++;
		}

		if(tamVetorPar == 5){
			for( j = 0 ; j < 5 ; j++)
				printf("par[%d] = %d\n", j , vPar[j]);
				tamVetorPar = 0; 
		}
		
		else if(tamVetorImpar == 5){
				for( j = 0 ; j < 5 ; j++)
				printf("impar[%d] = %d\n", j , vImpar[j]); 
				tamVetorImpar = 0;
		} 
			

	}

	for(i = 0 ; i <tamVetorImpar ; i++)
		printf("impar[%d] = %d\n", i , vImpar[i]);

	for(i = 0 ; i <tamVetorPar ; i++)
		printf("par[%d] = %d\n", i , vPar[i]);

	return 0;
}
