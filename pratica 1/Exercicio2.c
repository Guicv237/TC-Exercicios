#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idadeAtual, idade2050;

    // Solicita ao usuário que insira o ano de nascimento e o ano atual
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    // Calcula a idade da pessoa no ano atual
    idadeAtual = anoAtual - anoNascimento;

    // Calcula a idade que a pessoa terá em 2050
    idade2050 = 2050 - anoNascimento;

    // Apresenta as informações ao usuário
    printf("Idade da pessoa no ano atual: %d anos\n", idadeAtual);
    printf("Idade que a pessoa terá em 2050: %d anos\n", idade2050);

    return 0;
}