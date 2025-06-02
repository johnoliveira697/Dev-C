#include <stdio.h>

int main(){
	
	char nome[50], sexo;
	float valor_compra, valor_desc;
	
	printf("Infomre o seu Nome: ");
	scanf("%s", &nome);
	printf("Informe o seu sexo: ");
	scanf("%s", &sexo);
	printf("Informe o valor da compra: ");
	scanf("%f", &valor_compra);
	
	if (sexo == 'F' || sexo == 'f'){
		valor_desc = valor_compra - (0.13 * valor_compra);
		
		printf("\n");
		printf("A cliente %s fez uma compra de R$%.2f e obteve 13%% de desconto.\n", nome[50], valor_compra);
		printf("O valor final da compra com desconto foi de R$%.2f.", valor_desc);
	}if (sexo == 'M' || sexo == 'm'){
		valor_desc = valor_compra - (0.05 * valor_compra);
		
		printf("\n");
		printf("O cliente %s fez uma compra de R$%.2f e obteve 5%% de desconto.\n", nome[50], valor_compra);
		printf("O valor final da compra com desconto foi de R$%.2f.", valor_desc);
	}
	
	return 0;
}
