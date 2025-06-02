#include <stdio.h>

int main(){
	char op;
	int num1, num2, resultado;
	
	//recebendo dados do usuario
	printf("Digite a operacao desejada (+, -, *, /): ");
	scanf(" %c", op); //note o espaco de %c para ignorar caracteres em branco
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	//Realizando a operação com base no operador fornecido
	switch (op){
		case '+':
			resultado = num1 + num2;
			printf("Resultado: %.2f\n", resultado);
			break;
		case '-':
			resultado = num1 - num2;
			printf("Resultado: %.2f\n", resultado);
			break;
		case '*':
			resultado = num1 * num2;
			printf("Resultado: %.2f\n", resultado);
			break;
		case '/':
			if (num2 != 0){
				resultado = num1 / num2;
				printf("Resultado: %.2f\n", resultado);
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
