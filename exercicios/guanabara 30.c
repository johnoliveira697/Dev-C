#include <stdio.h>

int main(){
	
	float a, b, c;
	
	printf("Informe o valor de um lado: ");
	scanf("%f", &a);
	printf("Informe o valor de um lado: ");
	scanf("%f", &b);
	printf("Informe o valor de um lado: ");
	scanf("%f", &c);
	
	if ((a==b) && (b==c)){
		printf("Os valores formam um TRIANGULO EQUILATERO.");
	}else if((a<b+c) && (b<a+c) && (c<a+b) && (a!=b) && (b!=c)){
		printf("Os valores formam um TRIANGULO ESCALENO.");
	}else if(a==b && b!=c) {
		printf("Os valores formam um TRIANGULO ISOSCELES.");
	} else{
		printf("Os valores nao formam um triangulo.");
	}
	
	return 0;
}
