#include <stdio.h>

int main(){
	
	int n;
	
	printf("Informe o numero desejado: ");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		printf("O numero %d e PAR.", n);
	} else {
		printf("O numero %d e IMPAR.", n);
	}
	
	return 0;
}
