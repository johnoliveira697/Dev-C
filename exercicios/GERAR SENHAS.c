#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarSenha(int tamanho) { 
	//definir os caracteres possiveis para a senha
	char caracteres[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%&^*";
	int totalCaracteres = sizeof(caracteres) - 1;
	
	//gerar a senha aleatoria
	int i;
	for(i=0; i<tamanho; i++){
		printf("%c", caracteres[rand() % totalCaracteres]);
	}
	printf("\n");
}

int main(){
	
	int tamanho;
	
	//inicializa a semente para numeros aleatorios
	srand(time(NULL));
	
	printf("Digite o tamanho da senha (minimo 8 caracteres): ");
	scanf("%d", &tamanho);
	
	//verifica se o tamanho é pelo menos 8 caracteres
	if(tamanho < 8){
		printf("O tamanho minimo e de 8 caracteres.\n");
	}else{
		printf("Senha Gerada: ");
		gerarSenha(tamanho);
	}
	
	return 0;
}

