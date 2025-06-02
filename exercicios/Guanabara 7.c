#include <stdio.h>

int main(){
	
	float n, dobro, terco;
	
	printf("Informe um numero: \n");
	scanf("%f", &n);
	
	dobro = 2 * n;
	terco = n / 3;
	
	printf("O dobro do numero %.2f e %.2f.\n", n, dobro);
	printf("A terca parte do numero %.2f e %.3f.", n, terco);
	
	return 0;
}
