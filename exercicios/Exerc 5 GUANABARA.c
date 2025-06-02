#include <stdio.h>

int main(){
	
	float nota1, nota2, media;
	
	printf("informe a primeira nota: .\n");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: .\n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("A media das notas %.2f e %.2f eh %.2f. ", nota1, nota2, media);
	
	return 0;
}
