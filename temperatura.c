#include <stdio.h>

int main (){
	
	double C, F;
	
	printf("Digite o valor da temperatura em F: ");
	scanf("%lf", &F);
	
	C = (F - 32.0) * (5.0 / 9.0);
	
	printf("A temperatura em Celsius e: %.2lf.\n", C);
	
	return 0;
}
