
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Solicita ao usuário que insira as três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média aritmética
    media = (nota1 + nota2 + nota3) / 3.0;

    // Apresenta a média ao usuário
    printf("A média das notas é: %.2f\n", media);

    return 0;
} 