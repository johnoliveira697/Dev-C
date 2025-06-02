#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int ano_nasc, ano_atual;
	int idade, anos_alist;
	
	printf("Informe o ano de nascimento: ");
	scanf("%d", &ano_nasc);
	printf("Informe o ano atual: ");
	scanf("%d", &ano_atual);
		
	idade = ano_atual - ano_nasc;
	anos_alist = 18 - idade;
	
	if (idade >= 18){
		printf("Voce esta apto para o SERVICO MILITAR.\n");
		printf("Tem %d anos que voce se alistou.", abs(anos_alist));
	} else{
		printf("Voce NAO esta APTO para o SERVICO MILTIAR.\n");
		printf("Faltam %d anos para realizar o ALISTAMENTO MILITAR.", anos_alist);
	}
}
