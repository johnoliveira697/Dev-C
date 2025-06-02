#include <stdio.h>

void decompor_fatores_primos(int num) {
    // Verifica os divisores primos come�ando pelo 2
    if (num <= 1) {
        printf("N�o existe decomposi��o para n�meros menores ou iguais a 1.\n");
        return;
    }

    printf("Decomposi��o em fatores primos de %d: ", num);

    // Dividir o n�mero por 2 enquanto for divis�vel
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }
    
    int i;
    // Verificar divisibilidade por n�meros �mpares a partir de 3
    for(i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    // Se o n�mero resultante for maior que 2, ele � um primo
    if (num > 2) {
        printf("%d ", num);
    }

    printf("\n");
}

int main() {
    int num;

    // Solicita o n�mero ao usu�rio
    printf("Digite um numero inteiro para decompor em fatores primos: ");
    scanf("%d", &num);

    // Chama a fun��o para decomp�-lo
    decompor_fatores_primos(num);

    return 0;
}

