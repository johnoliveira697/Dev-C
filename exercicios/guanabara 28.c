#include <stdio.h>

int main(){
	
	int largura, comprimento, area;
	
	printf("Informe a largura: ");
	scanf("%d", &largura);
	printf("Informe o comprimento: ");
	scanf("%d", &comprimento);
	
	area = largura * comprimento;
	if(area < 100){
		printf("O terreno com area total de %dm2 e classificado com POPULAR.", area);
	}else if(area >= 100 && area < 500){
		printf("O terreno com area total de %dm2 e classificado com MASTER.", area);
	}else if(area >= 500){
		printf("O terreno com area total de %dm2 e classificado com VIP.", area);
	}
	
	return 0;
}
