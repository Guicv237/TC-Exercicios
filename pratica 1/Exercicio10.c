#include <stdio.h>
#include <math.h>

int main() {
    double raio, comprimento, area, volume;
    const double pi = 3.14159265359;

    // Solicita ao usuário que insira o raio da esfera
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    // Calcula o comprimento da circunferência (2 * π * raio)
    comprimento = 2 * pi * raio;

    // Calcula a área da esfera (π * raio^2)
    area = pi * pow(raio, 2);

    // Calcula o volume da esfera (3/4 * π * raio^3)
    volume = (3.0 / 4.0) * pi * pow(raio, 3);

    // Apresenta os resultados ao usuário
    printf("O comprimento da circunferência da esfera é: %.2lf\n", comprimento);
    printf("A área da esfera é: %.2lf\n", area);
    printf("O volume da esfera é: %.2lf\n", volume);

    return 0;
}
