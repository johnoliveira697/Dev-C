#include <stdio.h>

int main(){
	
	int v1, v2, v3;
	float media;
	
	printf("Informe o valor da primeira nota: ");
	scanf("%d", &v1);
	printf("Informe o valor da segunda nota: ");
	scanf("%d", &v2);
	printf("Informe o valor da terceira nota: ");
	scanf("%d", &v3);
	printf("\n");
	
	media = (v1 + v2 + v3) / 3;
	
	printf("A media das notas informadas e: %.2f.\n", media);
	printf("\n");
	
	if (media >= 7.0){
		printf("O ALUNO OBTEVE MEDIA %.2f E FOI APROVADO(A)!", media);
	} else {
		printf("O ALUNO OBTEVE MEDIA %.2f E FOI REPROVADO(A)!", media);
	}
	
	return 0;
}
