#include <stdio.h>

int main(){
	
	float Salario;
	char nome[50];
	
	printf("Informe o seu NOME: \n");
	scanf("%s", &nome);
	printf("Informe o seu SALARIO: \n");
	scanf("%f", &Salario);
	
	printf("O(a) funcionario(a) %s, tem um salario de R$%.2f.", nome, Salario);
	
	return 0;
}
