#include <stdio.h>

int main(){
	
	int N;
	
	printf("Informe o numero desejado: ");
	scanf("%d", &N);
	printf("-----------------------------------");
	
	if (N % 2 == 0){
		printf("O numero informado e PAR.");
	} else{
		printf("O numero informado e IMPAR:");
	}
	
	return 0;
}
