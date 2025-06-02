#include <stdio.h>

int main(){
	int numero;
	
	//solicita ao usuario um numero decimal
	printf("Digite um numero decimal: ");
	scanf("%d", &numero);
	
	//exibe o numero em hexadecimal e octal
	printf("Hexadecimal: %x\n", numero);
	printf("Octal: %o\n", numero);
	
	return 0;
}
