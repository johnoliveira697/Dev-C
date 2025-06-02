#include <stdio.h>

int main(){
	
	char nome[50];
	float nota1, nota2, media;
	
	printf("Informe o seu nome: ");
	scanf("%s", &nome);
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if (media > 7.0){
		printf("O aluno %s obteve uma media de %.2f e teve um BOM APROVEITAMENTO.", nome, media);
		
	} else {
		printf("O aluno %s obteve uma media de %.2f e teve um MAU APROVEITAMENTO.", nome, media);
	}
	
	return 0;
}
