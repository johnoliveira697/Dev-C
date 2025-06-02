#include <stdio.h>

int main(){
	
	int L1, L2, L3;
	int perimetro;
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &L1);
	printf("Informe o segundo valor: ");
	scanf("%d", &L2);
	printf("Informe o terceiro valor: ");
	scanf("%d", &L3);
	
	perimetro = L1 + L2 + L3;
	
	if(L1 + L2 > L3 && L1 + L3 > L2 && L2 + L3 > L1){
		if(L1 == L2 && L1 == L3){
		   printf("Os valores formam um triangulo equilatero com %d de perimetro.\n", perimetro);
		}else if (L1 == L2 || L1 == L3 || L2 == L3){
		   printf("Os valores formam um triangulo isosceles com %d de perimetro.\n", perimetro);
		}else{
		   printf("Os valores formam um triangulo escaleno com %d de perimetro.\n", perimetro);	
		}
    } else {
    	printf("Os valores nao formam um triangulo.\n");
	}
	return 0;
}
