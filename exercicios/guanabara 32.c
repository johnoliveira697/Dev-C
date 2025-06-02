#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int numerosorteado, tentativa;
	
	srand(time(NULL));
	
	numerosorteado = rand() % 5 +1;
	
	printf("Tente adivinhar o numero sorteado (entre 1 e 5): ");
	scanf("%d", &tentativa);
	
	if(tentativa == numerosorteado){
		printf("Parabens! Voce acertou o numero sorteado. o numero era %d.\n", numerosorteado);
	}else {
		printf("Que pena! Voce errou. O numero sorteado era %d.\n", numerosorteado);
	}
	
	return 0;
}
