#include <stdio.h>

int main(){
	
	int vel, multa;
	
	printf("Informe a velocidade do veiculo: ");
	scanf("%d", &vel);
	
	if (vel > 80){
	   printf("Voce foi multado.\n"); 
	   multa = (vel - 80) * 5;	   
	   printf("O valor da multa e de R$%d.", multa);
	} else {
		printf("Voce nao foi multado.");
	}

	  	
	return 0;
}
