#include <stdio.h>
#include <math.h> // para usar a funçao SQRT()

int main(){
	int num, i;
	int is_prime = 1; //assume-se que o numero é primo ate provar o contrario
	
	//solicita ao usuario que insira um numero
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if (num <= 1){
		is_prime = 0;
	} 
	//verifica se o numero é 2 
	else if(num == 2){
		is_prime = 1;
	} else {
		//verificar se o numero é divisivel por algum outro numero entre 2 e sqrt(num)
		for(i=2; i<=sqrt(num); i++){
			if (num % i == 0){
				is_prime = 0; //encontrou um divisor, o numero nao e primo
			    break;
			}
			
		}
	}
	
	//exibe se o numero é primo ou nao 
	if(is_prime){
		printf("%d e um numero primo.\n", num); 
	} else {
		printf("%d nao e um numero primo.\n", num);
	}
	
	return 0;
}
