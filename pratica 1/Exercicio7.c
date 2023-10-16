#include <stdio.h>

int main() {
    float salarioMinimo, salarioFuncionario, quantidadeSalarios;

    // Solicita ao usuário que insira o valor do salário mínimo
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    // Solicita ao usuário que insira o valor do salário do funcionário
    printf("Digite o valor do salário do funcionário: ");
    scanf("%f", &salarioFuncionario);

    // Calcula a quantidade de salários mínimos que o funcionário recebe
    quantidadeSalarios = salarioFuncionario / salarioMinimo;

    // Apresenta a quantidade de salários mínimos ao usuário
    printf("O funcionário recebe %.2f salários mínimos\n", quantidadeSalarios);

    return 0;
}
