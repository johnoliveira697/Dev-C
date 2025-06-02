#include <stdio.h>
int main(){
	int valor[10], i;
	
	for(i=0; i<10; i++){
		printf("Qual o %do valor?\n", i+1);
		scanf("%d", &valor[i]);
	}
	
	printf("\nA ordem inversa dos valores de entrada e:\n");
	
	for(i=0; i<10; i++)
	   printf("%d ", valor[9-i]);
	
	
	getch();
}
