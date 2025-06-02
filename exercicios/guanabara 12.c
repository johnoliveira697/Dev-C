#include <stdio.h>

int main(){
	
	float preco, preco_promo, desc;
	
	printf("Informe o valor do produto: \n");
	scanf("%f", &preco);
	
	desc = 0.05 * preco;
	preco_promo = preco - desc;
	
	printf("O valor promocional do produto e %.2f", preco_promo);
	
	return 0;
}
