#include<stdio.h>


int main (void){
	float nota1 , nota2 , nota3 , nota4 , media , rec , recMed;
	scanf("%f %f %f %f%*c", &nota1 , &nota2 , &nota3 , &nota4);
	media = (nota1*2 + nota2*3 + nota3*4 +nota4*1)/10;

	printf("Media: %.1f\n",media);
	
	if(media >= 7.0 ) printf("Aluno aprovado.\n");
	
	else if(media >= 5.0 && media <= 6.9){
			printf("Aluno em exame.\n");
			scanf("%f%*c", &rec);
			printf("Nota do exame: %.1f\n",rec);
			recMed = (rec+media)/2; 
			if(recMed >= 5.0)printf("Aluno aprovado.\n");
			else printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n" , recMed); }
	
	else printf("Aluno reprovado.\n");

	return 0;
}
