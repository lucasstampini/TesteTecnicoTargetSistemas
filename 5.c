#include <stdio.h>
#include <string.h>

// Função para inverter uma string
void inverterString(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;

    // Troca os caracteres das extremidades até encontrar o meio da string
    while (inicio < fim) {
        // Troca os caracteres
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Move os índices em direção ao centro
        inicio++;
        fim--;
    }
}

int main() {
    char str[100];

    // Solicita ao usuário para inserir uma string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Inverte a string
    inverterString(str);

    // Exibe a string invertida
    printf("String invertida: %s\n", str);

    return 0;
}
