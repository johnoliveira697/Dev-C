#include <stdio.h>

int main(){
	
	float preco_passagem;
	int dist_percorrida;
	
	printf("Informe a distancia percorrida: ");
	scanf("%d", &dist_percorrida);
	
	if(dist_percorrida <= 200){
		preco_passagem = 0.5 * dist_percorrida;
		printf("\nO preco da passagem para a distancia de %dKm sera de R$%.2f.", dist_percorrida, preco_passagem);
	}else{
		preco_passagem = 0.45 * dist_percorrida;
		printf("\nO preco da passagem para a distancia de %dKm sera de R$%.2f.", dist_percorrida, preco_passagem);
	}
	
	return 0;
}
