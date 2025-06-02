#include <stdio.h>

int main(){
	
	int n1, n2, soma;
	
	printf("Informe um numero: \n");
	scanf("%d", &n1);
	
	printf("Informe outro numero: \n");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("A soma dos numeros %d e %d eh %d.", n1, n2, soma);
	
	return 0;
}
