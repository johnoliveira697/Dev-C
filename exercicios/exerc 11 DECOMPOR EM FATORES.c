#include <stdio.h>

void decompor_fatores_primos (int num){
	//verifica os divisores primos começando pelo 2
	if (num <= 1){
		printf("Nao existe decomposicao para numeros menores ou iguais a 1.\n");
		return;
	}
	
	printf("Decomposicao em fatores primos de %d: ", num);
	
	//dividir o numero por 2 enquanto for divisivel
	while (num % 2 == 0){
		printf("2 ");
		num / 2;
	}
	
	//verificar divisibilidade por numeros ímpares a partir do 3
	for (int i=3; i*i<=num; i+=2){
		while (num % i == 0){
			printf("%d ", i);
			num /= i;
		}
	}
	
	//se o numero resultante for maior que 2, ele é primo
	if(num > 2){
		printf("%d ", num);
	}
	
	printf("\n");
}

int main(){
	int num, i;
	
	//solicita ao usuário o número
	printf("Digite un numero inteiro para decompor em fatores primos: ");
	scanf("%d", &num);
	
	//chama a função para decompô-lo
	decompor_fatores_primos(num);
	
	return 0;
}
