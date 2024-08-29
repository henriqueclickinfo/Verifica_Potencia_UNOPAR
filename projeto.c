#include <stdio.h>  // Inclui a biblioteca padrão para uso de printf e scanf

int main() {
    int valores[20];  // Declara um array, vetor, de 20 inteiros que armazene os valores inseridos
    int maximo, minimo;  // Declara as variáveis que armazenarão os valores máximo e mínimo

    // Loop para solicitar os 20 valores ao usuário
    for(int i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1);  // Solicita o valor ao usuário, indicando qual valor ele estará preenchendo
        scanf("%d", &valores[i]);  // Lê o valor inserido pelo usuário e o armazena no array relacionado

        // Atualiza os valores máximo e mínimo a cada entrada
        if (i == 0) {
            // Para o primeiro valor, inicializa as variáveis maximo e minimo com o valor inserido
            maximo = minimo = valores[i];
        } else {
            // Verifica se o valor atual é maior que o máximo atual e, se for, atualiza o máximo
            if(valores[i] > maximo) {
                maximo = valores[i];
            }
            // Verifica se o valor atual é menor que o mínimo atual e, se for, atualiza o mínimo
            if(valores[i] < minimo) {
                minimo = valores[i];
            }
        }
    }

    // Exibe os valores máximo e mínimo ao final
    printf("\nValor máximo final: %d\n", maximo);  // Exibe o maior valor encontrado
    printf("Valor mínimo final: %d\n", minimo);  // Exibe o menor valor encontrado

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
