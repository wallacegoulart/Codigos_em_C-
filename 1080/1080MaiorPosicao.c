#include<stdio.h>


int main (void){
	int v[99] , i = 0 , num = 0 , pos = 0   , j = 0;
	
	for(i ; i < 100 ; i++){
		scanf("%d%*c", &v[i]);}	

	for( j ; j < 100 ; j++){
		 if(v[j] > num ){ 
			num = v[j];
			pos = j+1;}
	}
	
	printf("%d\n",num);
	printf("%d\n",pos);	
	
	return 0;
}
