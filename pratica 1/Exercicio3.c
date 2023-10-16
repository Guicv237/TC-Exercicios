#include <stdio.h>

int main() {
    float cotacaoDolar, valorDolares, valorReais;

    // Solicita ao usuário que insira a cotação do dólar
    printf("Digite a cotação do dólar em reais: ");
    scanf("%f", &cotacaoDolar);

    // Solicita ao usuário que insira a quantidade de dólares
    printf("Digite a quantidade de dólares que você possui: ");
    scanf("%f", &valorDolares);

    // Calcula o valor em reais
    valorReais = valorDolares * cotacaoDolar;

    // Apresenta o valor em reais ao usuário
    printf("O valor em reais é: R$%.2f\n", valorReais);

    return 0;
}