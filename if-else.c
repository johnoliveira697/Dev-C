#include <stdio.h>

int main(){
	
	float nota;
	
	printf("Insira a nota: \n");
	scanf("%f", &nota);
	
	if(nota >=  7.0){
		printf("Aprovado!\n");
	} else {
		printf("Reprovado!\n");
	}
	
	return 0;
}
