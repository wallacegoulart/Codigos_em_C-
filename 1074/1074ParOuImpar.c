#include<stdio.h>
#include<math.h>

int main (void){
	int repeticao, i = 0 , num ;
	scanf("%d", &repeticao);

	for(i ; i < repeticao ; i ++){
		scanf("%d%*c",&num);
		if(num == 0) printf("NULL\n");
		else if ( num >0 && num % 2 == 0)       printf("EVEN POSITIVE\n");
		else if ( num >0 && num % 2 != 0)       printf("ODD POSITIVE\n");
		else if ( num <0 && abs(num) % 2 == 0)  printf("EVEN NEGATIVE\n");
		else if ( num <0 && abs(num) % 2 != 0)  printf("ODD NEGATIVE\n");
		}

	return 0;
}
