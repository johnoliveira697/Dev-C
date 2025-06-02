#include <stdio.h>

int main (){
	int A, B, soma, subtr, mult, div, rest;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	div = A / B;
	rest = A % B;
	
	printf("Resultados:\n");
	printf("A Soma e: %d.\n", soma);
	printf("A Subtracao e: %d.\n",subtr);
	printf("A Multiplicacao e: %d.\n", mult);
	printf("A Divisao e: %d.\n", div);
	printf("O resto da divisao e: %d.\n", rest);
}
