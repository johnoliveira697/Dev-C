#include <stdio.h>

int main(){
	char operacao;
	double num1, num2, resultado;
	
	//recebendo dados do usuario
	printf("Digite o primeiro numero: ");
	scanf("%lf", &num1);
	printf("Digite o segundo numero: ");
	scanf("%lf", &num2);
	
	printf("Digite a operacao desejada (+, -, * ou /): ");
	scanf(" %s", &operacao); //note o espaco de %c para ignorar caracteres em branco
	
	//Realizando a operação com base no operador fornecido
	switch(operacao) {
		case '+':
			resultado = num1 + num2;
			printf("Resultado: %.2lf\n", resultado);
			break;
		case '-':
			resultado = num1 - num2;
			printf("Resultado: %.2lf\n", resultado);
			break;
		case '*':
			resultado = num1 * num2;
			printf("Resultado: %.2lf\n", resultado);
			break;
		case '/':
			if (num2 != 0){
				resultado = num1 / num2;
				printf("Resultado: %.2lf\n", resultado);
			} else {
				printf("Erro: Divisao por zero nao e permitida.\n");
			}
			break;
		default: 
		    printf("Operacao invalida.\n");
		    break;
	}
	
	return 0;
}
