#include <stdio.h>

int main(){

	float valor_casa, salario_comprador, valor_prestacoes;
	char nome[50];
	int quantidade_prestacoes;
	
	printf("----------------------------------------------------------\n");
	printf("Informe o nome: ");
	scanf("%s", &nome);
	printf("----------------------------------------------------------\n");
	printf("Informe o valor da casa: R$");
	scanf("%f", &valor_casa);
	printf("----------------------------------------------------------\n");
	printf("Informe o salario do comprador: R$");
	scanf("%f", &salario_comprador);
	printf("----------------------------------------------------------\n");
	printf("Informe a quantidade prestacoes para quitar a casa: ");
	scanf("%d", &quantidade_prestacoes);
	printf("----------------------------------------------------------\n");
	
	valor_prestacoes = valor_casa / quantidade_prestacoes;
	
	printf("Com salario de R$%.2f, o valor da prestacao de R$%.2f, com %d prestacoes.\n", salario_comprador, valor_prestacoes, quantidade_prestacoes);
	
	if (valor_prestacoes <= (salario_comprador * 0.3)){
		printf("O seu emprestimo foi DEFERIDO.");
	}else{
		printf("O seu emprestimo foi INDEFERIDO.");
	}
	
	return 0;
}
