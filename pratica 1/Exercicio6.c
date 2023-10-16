#include <stdio.h>

int main() {
    float temperaturaCelsius, temperaturaFahrenheit;

    // Solicita ao usuário que insira a temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperaturaCelsius);

    // Calcula a temperatura em graus Fahrenheit
    temperaturaFahrenheit = (temperaturaCelsius * 1.8) + 32.0;

    // Apresenta a temperatura em graus Fahrenheit ao usuário
    printf("A temperatura em graus Fahrenheit é: %.2f °F\n", temperaturaFahrenheit);

    return 0;
}