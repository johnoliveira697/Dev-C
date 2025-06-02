#include <stdio.h>

int main(){
	long long int fib1 = 0, fib2 = 1, fib3;
	int i;
	
	printf("Os 20 primeiros numeros da serie de Fibonacci sao:\n");
	
	printf("%lld ", fib1);
	printf("%lld ", fib2);
	
	for (i=2; i<20; i++){
		fib3 = fib1 + fib2;
		printf("%lld ", fib3);
		
		fib1 = fib2;
		fib2 = fib3;
	}
	
	return 0;
}
