#include <stdio.h>

int main() {
    float diagonalMaior, diagonalMenor, area;

    // Solicita ao usuário que insira a diagonal maior
    printf("Digite a medida da diagonal maior do losango: ");
    scanf("%f", &diagonalMaior);

    // Solicita ao usuário que insira a diagonal menor
    printf("Digite a medida da diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);

    // Calcula a área do losango
    area = (diagonalMaior * diagonalMenor) / 2.0;

    // Apresenta a área ao usuário
    printf("A área do losango é: %.2f unidades quadradas\n", area);

    return 0;
}