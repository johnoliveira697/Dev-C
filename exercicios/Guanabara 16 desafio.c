#include <stdio.h>

int main(){
	
	int cigarros_dia, anos_fumando, minutos_perdidos_dia, minutos_perdidos_ano, tempo_perdido, minutos_perdidos_total;
	
	printf("Informe a quantidade de cigarros fumados por dia: ");
	scanf("%d", &cigarros_dia);
	
	printf("\n");
	
	printf("Informe ha quantos anos voce fuma: ");
	scanf("%d", &anos_fumando);
	
	printf("\n");
	
	minutos_perdidos_dia = (10 * cigarros_dia);
	minutos_perdidos_ano = (365 * minutos_perdidos_dia);
	minutos_perdidos_total = (anos_fumando * minutos_perdidos_ano);
	tempo_perdido = (minutos_perdidos_total / 1440);
	
	printf("O tempo de vida perdido e de %d dias.", tempo_perdido);
	
	return 0;
}
