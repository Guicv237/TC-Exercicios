#include <stdio.h>

int main() {
    float salario, novoSalario;

    // Solicita ao usuário que insira o salário atual
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    // Calcula o novo salário com um aumento de 25%
    novoSalario = salario + (salario * 0.25);  // 25% em forma decimal é 0.25

    // Apresenta o novo salário ao usuário
    printf("O novo salário com aumento de 25%% é: R$%.2f\n", novoSalario);

    return 0;
}