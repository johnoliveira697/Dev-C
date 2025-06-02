#include <stdio.h>

int main(){
	
	float nota1, nota2, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	if(media < 5.0){
		printf("A sua media foi %.2f e voce esta REPROVADO.", media);
	}else if((media >= 5.0) && (media < 7.0)){
		printf("A sua media foi %.2f e voce esta de RECUPERAÇÃO.", media);
	}else if(media >= 7.0){
		printf("A sua media foi %.2f e voce esta APROVADO.", media);
	}
	
	return 0;
}
