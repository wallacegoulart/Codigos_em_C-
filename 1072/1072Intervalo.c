#include<stdio.h>

int dentro(int n[], int num){
	int i = 0 , soma = 0;
	for (i ; i < num ; i++)
		if(  n[i] >= 10 &&  n[i] <= 20 ) soma++; 
	return soma;
}	

int fora(int n[], int num){
	int i = 0 , soma = 0;
	for (i ; i < num ; i++)
		if(   n[i] < 10 ||  n[i] > 20 ) soma++; 
	return soma;
}


int main (void){
	int n[10000] , num , i = 0 ;
	scanf("%d%*c", &num);
	
	for(i ; i < num ; i ++)
		scanf("%d%*c", &n[i]);

	printf("%d in\n",dentro(n,num));
	printf("%d out\n",fora(n,num));

	return 0;
}
