#include <stdio.h>

int main(){
	
	int dias_trabalhados;
	float salario, valor_dia;
	
	printf("Informe a quantidade de dias trabalhados: ");
	scanf("%d", &dias_trabalhados);
	
	valor_dia = 8 * 25;
	salario = dias_trabalhados * valor_dia;
	
	printf("A quantidade de dias trabalhado nesse mes foi de %d e o salario de R$%.2f.", dias_trabalhados, salario);
	
	return 0;
}
