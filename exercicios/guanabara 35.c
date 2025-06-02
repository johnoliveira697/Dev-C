#include <stdio.h>
#include <string.h>

int main(){
	char tipo_carro[50];
	int dias_aluguel;
	float km_percorridos, preco_total = 0.0, preco_diaria = 0.0, preco_km = 0.0;
	
	printf("Informe o tipo de carro (Popular ou Luxo): ");
	scanf("%s", &tipo_carro);
	printf("Informe quantos Km percorridos: ");
	scanf("%f", &km_percorridos);
	printf("Informe a quantidade de dias de aluguel: ");
	scanf("%d", &dias_aluguel);
	
	if (strcmp(tipo_carro, "popular") == 0){
		preco_diaria = 90.0;
		
		if(km_percorridos <= 100){
			preco_km = km_percorridos * 0.20;
		}else {
			preco_km = km_percorridos * 0.10;
		}
	}else if (strcmp(tipo_carro, "luxo") == 0){
		preco_diaria = 150.0;
		
		if(km_percorridos <= 200){
			preco_km = km_percorridos * 0.30;
		}else {
			preco_km = km_percorridos * 0.25;
		}
	}else {
		printf("Tipo de carro INVALIDO.\n");
		return 1;
	}
	
	preco_total = (dias_aluguel * preco_diaria) + preco_km;
	
	printf("O preco total a ser pago e: R$%.2f\n", preco_total);
	
	return 0;
}
