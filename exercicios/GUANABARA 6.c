#include <stdio.h>

int main(){
	
	int n, ant, suc;
	
	printf("Inform o numero desejado: .\n");
	scanf ("%d", &n);
	
	ant = n-1;
	suc = n+1;
	
	printf("O antecessor do numero %d, e %d.\n", n, ant);
	printf("O sucessor do numero %d, e %d.", n, suc);
	
	return 0;
}
