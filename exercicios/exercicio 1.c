#include <stdio.h>

int main(){
	
	int seg, min, h;
	int seg_rest;
	
	printf("Informe a quantidade de segundos: \n");
	scanf("%d", &seg);
	
	h = seg / 3600;
	seg_rest = seg % 3600;
	min = seg_rest / 60;
	seg_rest = seg_rest % 60;
	
	printf("%d seg correspondem a %d horas, %d minutos e %d segundos.\n", seg, h, min, seg_rest);
		
	return 0;
}
