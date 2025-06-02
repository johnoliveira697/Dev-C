#include <stdio.h>

int main(){
	
	int i, j;
	
	// cabecalho da tabela
	printf("TABUADA DE 1 a 9\n");
	printf("==================\n");
	
	//loop para gerar a tabuada
	for (i = 1; i <= 9; i++){
		for (j = 1; j <= 9; j++){
			printf("%2d X %2d = %3d ", i, j, i * j);
		}
		printf("\n"); //Nova linha após cada linha da tabuada
	}
		
	return 0;
}
