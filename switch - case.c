#include <stdio.h>

int main(){
	
	int d;
	
	printf("Insira um valor de 1 a 7:\n");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("DOMINGO.\n");
			break;
		case 2:
			printf("SEGUNDA-FEIRA.\n");
			break;
		case 3:
			printf("TERCA-FEIRA.\n");
			break;
		case 4:
			printf("QUARTA-FEIRA.\n");
			break;
		case 5:
			printf("QUINTA-FEIRA.\n");
			break;
		case 6:
			printf("SEXTA-FEIRA.\n");
			break;
		case 7:
			printf("SABADO.\n");
			break;
		default:
			printf("Valor inv�lido.\n");
			break;
	}
	
	return 0;
}
