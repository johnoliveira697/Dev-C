#include <stdio.h>

int main(){
	
	int n1, n2;
	
	printf("Infomre um numero: ");
	scanf("%d", &n1);
	printf("Infomre outro numero: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("O numero %d e maior.", n1);
	}else if (n2 > n1){
		printf("O numero %d e maior.", n2);
	}else {
		printf("Nao existe numero maior, os dois sao iguais.");
	}
	
	return 0;
	
}
