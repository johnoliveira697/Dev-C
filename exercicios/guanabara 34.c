#include <stdio.h>

int main(){
	
	float alt, peso, IMC;
	
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	printf("Informe o seu peso: ");
	scanf("%f", &peso);
	printf("Informe a sua altura: ");
	scanf("%f", &alt);
	printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	
	IMC = peso / (alt * alt);
	
	if(IMC < 18.5){
		printf("Voce esta ABAIXO DO PESO.\n");
	}else if (IMC >= 18.5 && IMC < 25){
		printf("Voce esta com o PESO IDEAL.\n");
	}else if(IMC >= 25 && IMC < 30){
		printf("Voce esta com SOBREPESO.\n");
	}else if(IMC >= 30 && IMC < 40){
		printf("Voce esta com OBESIDADE.\n");
	}else{
		printf("Voce esta com OBESIDADE MORDIDA.");
	}
	
	return 0;
}
