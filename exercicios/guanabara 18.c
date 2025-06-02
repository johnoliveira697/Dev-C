#include <stdio.h>

int main(){
	
	int ano, ano_nasc, idade;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &ano_nasc);
	
	ano = 2024;
	idade = 2024 - ano_nasc;
	
	if (idade >= 16){
		printf("A sua idade e %d, voce esta APTA para votar.", idade);
	} else {
		printf("A sua idade e %d, voce esta INAPTA para vota.", idade);
	}
	
	return 0;
	
}
