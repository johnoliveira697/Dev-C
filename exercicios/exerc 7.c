#include <stdio.h>

int main(){
	
	int num, A, B, soma;
	
	for(num=1000; num<=9999; num++){
		A = num / 100;
		B = num % 100;
		
		soma = A + B;
		
		if(soma * soma == num){
			printf("%d possui a caracteristica: %d + %d = %d -> %d * %d = %d\n", num, A, B, soma, soma, soma, num);
					
		}
	}
	
	return 0;
}
