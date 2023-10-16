#include <stdio.h>

int main() {
    float peso, novoPesoEngordar, novoPesoEmagrecer;

    // Solicita ao usuário que insira o peso da pessoa
    printf("Digite o peso da pessoa: ");
    scanf("%f", &peso);

    // Calcula o novo peso se a pessoa engordar 15%
    novoPesoEngordar = peso + (peso * 0.15);  // 15% em forma decimal é 0.15

    // Calcula o novo peso se a pessoa emagrecer 20%
    novoPesoEmagrecer = peso - (peso * 0.20);  // 20% em forma decimal é 0.20

    // Apresenta os novos pesos ao usuário
    printf("Se a pessoa engordar 15%%, o novo peso será: %.2f kg\n", novoPesoEngordar);
    printf("Se a pessoa emagrecer 20%%, o novo peso será: %.2f kg\n", novoPesoEmagrecer);

    return 0;
}