#include <stdio.h>

int main(){
	
	float largura, altura, area, qtde_tinta;
	
	printf("Informe a largura e a altura da parede (x,y): \n");
	scanf("%f, %f", &largura, &altura);
	
	area = largura * altura;
	qtde_tinta = area / 2;
	
	printf("A area a ser pintada e de %.2fm2 e sera ncessario %.2fL de tinta.", area, qtde_tinta);
	
	return 0;
}
