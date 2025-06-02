#include <stdio.h>

int main(){
	
	float salario, novo_salario;
	
	printf("Informe o seu Salario atual: \n");
	scanf("%f", &salario);
	
	novo_salario = salario + (0.15 * salario);
	
	printf("O novo salario com aumento e %.2f.", novo_salario);
	
	return 0;
}
