#include <stdio.h>

int main() {
    int idade;
    char sexo;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if (idade >= 18 && idade <= 30) {
        printf("Voce esta na faixa etaria adequada.\n");
    } else {
        printf("Voce nao esta na faixa etária adequada.\n");
    }
    if (sexo == 'F' || sexo == 'f') {
        printf("Voce e do sexo feminino.\n");
    } else {
        printf("Voce nao e do sexo feminino.\n");
    }
    if (idade > 5) {
        printf("Voce tem mais de 5 anos.\n");
    } else {
        printf("Voce tem 5 anos ou menos.\n");
    }
}
