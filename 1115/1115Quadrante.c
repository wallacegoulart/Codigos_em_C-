#include<stdio.h>
#include<math.h>

void ordenada(float num1 , float num2){
	
	if(num1 >0 && num2 > 0)printf("Q1\n");
	else if(num1 > 0 && num2 < 0)printf("Q4\n");
	else if(num1 < 0 && num2 < 0)printf("Q3\n");
	else if(num1 < 0 && num2 > 0)printf("Q2\n");
	else if(num1 == 0 && num2 == 0)printf("Origem\n");
	else if(num1 == 0 && num2 !=0)printf("Eixo Y\n");
	else if(num1 != 0 && num2 ==0)printf("Eixo X\n");
}


int main (void){
	float num1 , num2;		
	scanf("%f %f%*c",&num1 ,&num2);
	ordenada(num1,num2);
	

	return 0;
}
