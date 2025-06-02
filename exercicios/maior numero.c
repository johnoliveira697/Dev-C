#include <stdio.h>

int main(){
	
	float v1, v2, v3;
	float maior, menor, media;
	
	//Valores informados pelo usuario
	printf("Informe o primeiro valor: ");
	scanf("%f", &v1);
	printf("Informe o segundo valor: ");
	scanf("%f", &v2);
	printf("Informe o terceiro valor: ");
	scanf("%f", &v3);
	
	//determinando o maior valor
	maior = v1;
	if (v2 > maior){
		maior = v2;
	}
	if (v3 > maior){
		maior = v3;
	}
	
	//determinando o menor valor
	menor = v1;
	if (v2 < menor){
		menor = v2;
	}
	if (v3 < menor){
		menor = v3;
	}
	
	//calculando a media
	media = (v1 + v2 + v3) / 3;
	
	//imprimindo os resultados
	printf("O maior valor: %.2f.\n", maior);
	printf("O menor valor: %.2f.\n", menor);
	printf("A media dos valores: %.2f.\n", media);
	
	return 0;
}