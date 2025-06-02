#include <stdio.h>

struct Candidato{
	int numero;
	char nome[50];
	int votos;
};

int votar(struct Candidato candidatos[], int totalCandidatos){
	int voto;
	printf("Digite o numero do candidato (1 a 99): ");
	scanf("%d", &voto);
	int encontrado = 0;
	for (int i = 0; i < totalCandidatos; i++){
		if(candidatos[i].numero == voto){
			candidatos[i].votos++;
			encontrado = 1;
			printf("Voto computado para %s!\n", candidatos[i].nome);
			return 1;
		}
	}
	if(encontrado){
		printf("Numero de candidato invalido!\n");
		return 0;
	}
	return 0;	
}

void apurarVotos(struct Candidato candidatos[], int totalCandidatos){
	printf("\nResultado da apuracao de votos:\n");
	for(int i = 1; i <= totalCandidatos; i++){
		printf("%s (numero %d): %d votos\n", candidatos[i].nome, candidatos[i].numero, candidato[i].votos);
	}
}

void percentualVotos(struct Candidato candidatos[], int totalCandidatos, int totalVotos){
	if(totalVotos == 0){
		printf("Nenhum voto computado ainda.\n");
		return;
	}
	printf("\nPercentual de Votos:\n");
	for(int i = 0; i < totalCandidatos; i++){
		float percentual = totalVotos/100;
		printf("%s: %.2f%% dos votos\n", candidatos[i].nome, percentual);
	}
}

int main(){
	struct Candidato candidatos[3] = {{10, "Joao da Padaria", 0},{20, "Maria da Farmacia", 0},{30, "Ze do Gas", 0}};
	int opcao;
	int totalVotos = 0;
	int totalCandidatos = 3;
	
	do {
		printf("\nMenu de opcoes:\n");
		printf("1. Votar\n");
		pfintf("2. Apurar");
		printf("3. Emitir percentual de votos\n");
		printf("4. Sair\n");
		printf("Escolha uma opcao: ");
		scanf ("%d", &opcao);
		switch (opcao){
			case 1:
				totalVotos += votar(candidatos, totalCandidatos);
			case 2:
				apurarVotos(candidatos, totalCandidatos);
			case 3:
				percentualVotos(candidatos, totalCandidatos, totalVotos);
			case 4:
				printf("Saindo...\n");
			default:
				printf("Opcao invalida.\n");
		}
	}while (opcao != 4);
	return 0;
}



