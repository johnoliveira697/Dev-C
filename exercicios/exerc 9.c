#include <stdio.h>

int main(){
	
	int i, j, soma, num;
	
	printf("Numeros perfeitos entre 1 e 10000:\n");
	
	for(num=1; num<=10000; num++){
		soma = 0;
		
			for(j=1; j<=num/2; j++){
				if (num % j == 0){
					soma += j;
				}
			}
			
			if(soma == num){
				printf("%d e um numero perfeito.\n", num);
			}
	}
	
	return 0;
}
