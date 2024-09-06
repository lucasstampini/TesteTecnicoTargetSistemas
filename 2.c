#include <stdio.h>

int isFibonacci(int num) {
    int a = 0, b = 1, c = 0;

    if (num == 0 || num == 1) {
        return 1; // Se o número é 0 ou 1, ele pertence à sequência
    }

    while (c < num) {
        c = a + b; // Calcula o próximo número da sequência de Fibonacci
        a = b; // Atualiza o valor de 'a'
        b = c; // Atualiza o valor de 'b'
    }

    return (c == num); // Retorna 1 se o número pertence à sequência, 0 caso contrário
}

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (isFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
