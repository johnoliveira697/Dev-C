#include <stdio.h>

int main(){
	
	int ano;
	
	printf("Informe o ano: ");
	scanf("%d", &ano);
	
	if ((ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0){ //um ano é bissexto se for DIVISÍVEL por 4, mas nao por 100, exceto se tambem for DIVISÍVEL por 400.
		printf("O ano %d e BISSEXTO.", ano);
	} else{
		printf("O ano %d NAO e BISSEXTO.");
	}
	
	return 0;
}
