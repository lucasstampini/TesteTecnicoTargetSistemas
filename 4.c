#include <stdio.h>

// Função para calcular o percentual de um estado em relação ao total
float calcPercentual(float estado, float total) {
    return (100 * estado) / total;
}

int main() {
    // Constantes para os valores de faturamento de cada estado
    const float estados[] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
    const char *nomes[] = {"São Paulo", "Rio de Janeiro", "Minas Gerais", "Espírito Santo", "Outros"};
    const int numEstados = sizeof(estados) / sizeof(estados[0]);

    // Calcula o faturamento total
    float total = 0;
    for (int i = 0; i < numEstados; i++) {
        total += estados[i];
    }

    // Calcula e imprime o percentual de cada estado
    for (int i = 0; i < numEstados; i++) {
        float percentual = calcPercentual(estados[i], total);
        printf("Percentual do estado de %s: %.2f%%\n", nomes[i], percentual);
    }

    return 0;
}
