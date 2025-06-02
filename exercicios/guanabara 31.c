#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int escolhaJogador, escolhaComputador;
	
	srand(time(NULL));
	
	printf("Bem-vindo ao JOKENPO\n");
	printf("Escolha uma opcao:\n");
	printf("1 - Pedra\n");
	printf("2 - Papel\n");
	printf("3 - Tesoura\n");
	printf("Digite sua escolha: ");
	scanf("%d", &escolhaJogador);
	
	escolhaComputador = rand() % 3 +1;
	
	printf("O computador escolheu: ");
	if(escolhaComputador == 1){
		printf("Pedra\n");
	}else if(escolhaComputador == 2){
		printf("Papel\n");
	}else {
		printf("Tesoura\n");
	}
	
	if(escolhaJogador == escolhaComputador){
		printf("EMPATE!\n");
	}else if(escolhaJogador == 1 && escolhaComputador == 3 || escolhaJogador == 2 && escolhaComputador == 1 || escolhaJogador == 3 && escolhaComputador == 2){
		printf("Voce venceu!\n");
	}else {
		printf("O computador venceu!\n");
	}
	
	return 0;	

}
