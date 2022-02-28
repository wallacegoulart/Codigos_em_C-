#include<stdio.h>

void preenchendoVetor(  double v[] , int n , double num1){
	int i ;
	for(i = 1 ; i < n ; i++)
		v[i] =  v[i-1] / 2.0;
}


void exibi (double v[] , int n){
	int i ; 
	for(i = 1 ; i < n ; i++)
		printf("%N[%d] = %.4lf\n", i , v[i]);
}

int main (void){
	double num1  , v[100];
	scanf("%lf",&v[0]);
	printf("N[0] = %.4lf\n",v[0]);
	preenchendoVetor(v,100, num1);
	exibi(v,100);

	return 0;
}

/*
#include<stdio.h>
int main(){
    int i;
    double n[100];
    scanf("%lf",&n[0]);
    printf("N[0] = %.4lf\n",n[0]);
    i=1;
    for(;i<100;i++){
        n[i]=n[i-1]/2.0;
        printf("N[%i] = %.4lf\n",i,n[i]);
    }
    return 0;
}
*/


