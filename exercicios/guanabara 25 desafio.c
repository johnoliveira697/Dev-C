#include <stdio.h>

int main(){
	
	float a, b, c;
	
	printf("Informe o valor de um lado: ");
	scanf("%f", &a);
	printf("Informe o valor de um lado: ");
	scanf("%f", &b);
	printf("Informe o valor de um lado: ");
	scanf("%f", &c);
	
	if ((a == b) && (b == c)){
		printf("Os valores formam um TRIANGULO.");
	}else if((a < b + c) && (b < a + c) && (c < a + b)){
		printf("Os valores formam um TRIANGULO.");
	}else {
		printf("Os valores NAO formam um TRIANGULO.");
	}
	
	return 0;
}
