#include <stdio.h>

int main(){
	
	char nome[50];
	int anos_trab; 
	float salario, novo_salario;
	
	printf("Informe o seu nome: ");
	scanf("%s", &nome);
	printf("Informe quantos anos na empresa: ");
	scanf("%d", &anos_trab);
	printf("informe o seu salario: ");
	scanf("%f", &salario);
	
	if(anos_trab < 3){
		novo_salario = salario + (0.03 * salario);
		printf("\nO funcionario %s teve um aumento de 3%% e o seu novo salario e %.2f.", nome, novo_salario);
	}else if(anos_trab >=3 && anos_trab < 10){
		novo_salario = salario + (0.125 * salario);
		printf("\nO funcionario %s teve um aumento de 12.5%% e o seu novo salario e %.2f.", nome, novo_salario);
	}else if (anos_trab >= 10){
		novo_salario = salario + (0.2 * salario);
		printf("\nO funcionario %s teve um aumento de 20%% e o seu novo salario e %.2f.", nome, novo_salario);
	}
	
	return 0;
}
