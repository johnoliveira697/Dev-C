#include <stdio.h>

int main(){
	
	float km, hm, dam, m, dm, cm, mm;
	
	printf("Informe a distancia em metros: ");
	scanf("%f", &m);
	printf("\n");
	
	km = m / 1000;
	hm = m / 100;
	dam = m / 10;
	dm = m * 10;
	cm = m * 100;
	mm = m * 1000;
	
	printf("A distancia %.2fm corresponde a %.5fkm.\n", m, km);
	printf("A distancia %.2fm corresponde a %.4fhm.\n", m, hm);
	printf("A distancia %.2fm corresponde a %.3fdam.\n", m, dam);
	printf("A distancia %.2fm corresponde a %.1fdm.\n", m, dm);
	printf("A distancia %.2fm corresponde a %.1fcm.\n", m, cm);
	printf("A distancia %.2fm corresponde a %.1fmm.\n", m, mm);
	
	return 0;
}
