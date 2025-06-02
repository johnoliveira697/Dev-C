#include <stdio.h>

int main(){
	
	float real, dolar;
	
	printf("Informe a quantidade de dinheiro na carteira: ");
	scanf("%f", &real);
	
	dolar = real / 6;
	
	printf("O valor R$%.2f corresponde a $%.2f.", real, dolar);
	
	return 0;
}
