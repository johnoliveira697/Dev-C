#include <stdio.h>

int main(){
	
	float km_percorridos, preco_total;
	int dias_alugado;
	
	printf("Informe a quantidade de dias que o carro foi alugado: ");
	scanf("%d", &dias_alugado);
	printf("informe a quantidade de Km percorridos: ");
	scanf("%f", &km_percorridos);
	
	preco_total = (90 * dias_alugado) + (0.2 * km_percorridos);
	
	printf("O valor total do aluguel sera de %.2f", preco_total);
	
	return 0;
}
