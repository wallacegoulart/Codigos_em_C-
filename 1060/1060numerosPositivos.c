/* numerosPositivos.c - */

#include<stdio.h>


int main(void){
	float num1,num2,num3,num4,num5,num6, soma = 0;
	int cont = 0 ;
	scanf("%f%*c", &num1);
	scanf("%f%*c", &num2);
	scanf("%f%*c", &num3);
	scanf("%f%*c", &num4);
	scanf("%f%*c", &num5);
	scanf("%f%*c", &num6);
	
	if(num1 >= 0){cont++; soma+=num1;}
	if(num2 >= 0){cont++; soma+=num2;}
	if(num3 >= 0){cont++; soma+=num3;}
	if(num4 >= 0){cont++; soma+=num4;}
	if(num5 >= 0){cont++; soma+=num5;}
	if(num6 >= 0){cont++; soma+=num6;}
	
	printf("%d valores positivos\n",cont);
	printf("%.1f\n",(soma/cont));

	return 0;
}
