#include <stdio.h>

int main(){
	
	float media;
	
	printf("Insira a nota: \n");
	scanf("%f", &media);
	
	if(media >= 4.0 && media < 7.0){
		printf("Tem direito a exame!\n");
	}
	
	return 0;
}
