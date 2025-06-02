#include <stdio.h>

int main(){
	
	int A, B, C, Delta;
	
	printf("Resolvendo uma equacao de 2 grau.\n");
	printf("Informe o valor de A: ");
	scanf("%d", &A);
	printf("Informe o valor de B: ");
	scanf("%d", &B);
	printf("Informe o valor de C: ");
	scanf("%d", &C);
	
	Delta = B * B - (4 * A * C);
	
	printf("O valor de Delta e %d.", Delta);
	
	return 0;
}
