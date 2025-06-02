#include <stdio.h>

void decompor_fatores_primos(int num) {
    // Verifica os divisores primos começando pelo 2
    if (num <= 1) {
        printf("Não existe decomposição para números menores ou iguais a 1.\n");
        return;
    }

    printf("Decomposição em fatores primos de %d: ", num);

    // Dividir o número por 2 enquanto for divisível
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }
    
    int i;
    // Verificar divisibilidade por números ímpares a partir de 3
    for(i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    // Se o número resultante for maior que 2, ele é um primo
    if (num > 2) {
        printf("%d ", num);
    }

    printf("\n");
}

int main() {
    int num;

    // Solicita o número ao usuário
    printf("Digite um numero inteiro para decompor em fatores primos: ");
    scanf("%d", &num);

    // Chama a função para decompô-lo
    decompor_fatores_primos(num);

    return 0;
}

