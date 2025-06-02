#include <stdio.h>
int main(){
	int valor[10], i, ref;
	int conta=0, menores=0, iguais=0;
	
	for(i=0; i<10; i++){
		printf("Qual o %do valor?\n", i+1);
		scanf("%d", &valor[i]);
	}
	
	printf("\nEntre com o valor de referencia:\n");
	scanf("%d", &ref);
	
	for(i=0; i<10; i++){
		if(valor[i] > ref){
			conta++;
		}else{
			if(valor[i] < ref){
				menores++;
			}else{
				iguais++;
			}
		}
	}
	if(ref > 0){
		printf("\nOs valores maiores que a referencia sao:\n");
		
		for(i=0; i<10; i++)
		   if(valor[i] > ref)
		      printf("%d\n", valor[i]);
	}else
	   printf("\nNao existem valores maiores que a referencia\n");
	
	if(menores > 0)
	   printf("\nExistem %d valores menores que a referencia\n", menores);
	else
	   printf("\nNao existem valores menores que a referencia\n");
	
	if(iguais > 0)
	   printf("\nExistem %d valores iguais ao da referencia\n", iguais);
	else
	   printf("\nNao existem valores iguais ao da referencia\n");
	
	getch();

}
