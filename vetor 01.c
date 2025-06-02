#include <stdio.h>

int main(){
	int valor[5], i, soma=0;
	float media;
	
	for(i=0; i<5; i++){
		printf("Qual o %do valor?\n", i+1);
		scanf("%d", &valor[i]);
		
		soma = soma + valor[i];
	}
	
	media = soma / 5;
	
	printf("A media vale: %.2f", media);
	
	printf("\nOs seguintes valores sao maiores que a media:\n");
	for(i=0; i<5; i++)
	   if(valor[i] > media)
	      printf("%d\n", valor[i]);
	      
	printf("\nOs seguintes valores sao menores que a media:\n");
	for(i=0; i<5; i++)
	   if(valor[i] < media)
	      printf("%d\n", valor[i]);
	
	return 0;
}
